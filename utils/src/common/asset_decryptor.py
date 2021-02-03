#!/usr/bin/env python3
#
# Copyright (c) 2001-2020, Arm Limited and Contributors. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause OR Arm’s non-OSI source license
#

# This utility's purpose is to be able to decrypt
# encrypted ICV keys created with asset_encryptor.py or the following legacy Openssl command:
# "openssl enc -d -nosalt -md md5 -aes-128-cbc -in <in_file,bin> -out <out_file.bin> -pass file:<pwd_file.txt>"

import optparse
import sys
import os
import logging

sys.path.append(os.path.join(sys.path[0], ".."))

from common import loggerinitializer
from common import cryptolayer

# Util's log file
LOG_FILENAME = "asset_decryptor_log.log"


class ArgumentParser:
    def __init__(self):
        self.input_file = None
        self.output_file = None
        self.password_filename = None
        self.log_filename = None
        self.parser = optparse.OptionParser(usage="usage: %prog <input_file> <output_file> [options]",
                                            description="%prog decrypts the file <input_file> into the file "
                                                        "<output_file>. It uses AES-128-CBC "
                                                        "with key derivation function PBKDF1 for keeping "
                                                        "backwards compatibility.")
        self.parser.add_option("-p", "--pass_file", dest="password_filename", default="",
                               help="The file holding the passphrase in plaintext format. "
                                    "If omitted, the script will ask for a passphrase directly.")
        self.parser.add_option("-l", "--log", dest="log_filename", default=LOG_FILENAME,
                               metavar="FILE",
                               help="Writes event log to FILE [default: %default]")

    def parse_arguments(self):
        (options, args) = self.parser.parse_args()
        if len(args) != 2:
            self.parser.error("incorrect number of positional arguments")
        self.input_file = args[0]
        self.output_file = args[1]
        self.password_filename = options.password_filename
        self.log_filename = options.log_filename


class AssetDecryptor:
    def __init__(self, argument_parser):
        self.argument_parser = argument_parser

    def decrypt(self):
        with open(self.argument_parser.input_file, "rb") as encrypted_file:
            enc_data = encrypted_file.read()
        decrypted_data = cryptolayer.Common.decrypt_asset_with_aes_cbc(enc_data, self.argument_parser.password_filename)

        # write encrypted key to output file
        with open(self.argument_parser.output_file, "wb") as decrypted_outfile:
            decrypted_outfile.write(decrypted_data)


if __name__ == "__main__":
    if not (sys.version_info.major == 3 and sys.version_info.minor >= 5):
        sys.exit("The script requires Python3.5 or later!")
    # parse arguments
    the_argument_parser = ArgumentParser()
    the_argument_parser.parse_arguments()
    # get logging up and running
    logger_config = loggerinitializer.LoggerInitializer(the_argument_parser.log_filename)
    logger = logging.getLogger()
    # perform main task
    decryptor = AssetDecryptor(the_argument_parser)
    decryptor.decrypt()
    logger.info("Script completed successfully")