/*
 * Copyright (c) 2001-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause OR Arm’s non-OSI source license
 */

#include "cc_pal_types.h"
#include "ec_edw_local.h"


/*!
@file
@brief The file contains EC Domain 25519 parameters and get-function.
*/


/*  EC Edwards curve domain: curve over prime fild GFp:
    x^2 + y^2 = 1 + d*x^2*y^2 */

/*!> EC Edwards domain 25519 domain parameters and auxiliary values.
     The data is in little endian order of words: LS-Word is most left one */
static const CCEcEdwDomain_t  EcEdwDomain25519 = {

        /* Prime modulus P = {2^255 - 19) = 0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFED */
        {0xffffffed,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x7fffffff},
        /* modulus size in bits and words */
        255, 8,
        /* EC generator G coordinate X = 0x216936D3CD6E53FEC0A4E231FDD6DC5C692CC7609525A7B2C9562D608F25D51A  */
        {0x8F25D51A,0xC9562D60,0x9525A7B2,0x692CC760,0xFDD6DC5C,0xC0A4E231,0xCD6E53FE,0x216936D3},
        /* EC generator G coordinate Y = 0x6666666666666666666666666666666666666666666666666666666666666658 = 4/5 */
        {0x66666658,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666},
        /* EC_MONT generator order n =  0x1000000000000000000000000000000014DEF9DEA2F79CD65812631A5CF5D3ED */
        {0x5cf5d3ed,0x5812631a,0xa2f79cd6,0x14def9de,0x00000000,0x00000000,0x00000000,0x10000000},
        253, 8, /* EC_MONT generator order size in bits and IN words */
        8, /* EC order cofactor */
        /* EC parameter d = 0x52036CEE2B6FFE738CC740797779E89800700A4D4141D8AB75EB4DCA135978A3 = 121665 / 121666 */
        {0x135978A3,0x75EB4DCA,0x4141D8AB,0x00700A4D,0x7779E898,0x8CC74079,0x2B6FFE73,0x52036CEE},

        /* EC generator G proective coordinates: X=  Z = 1 (there is c) */
        /* tg = [255] 67875F0FD78B766566EA4E8E64ABE37D20F09F80775152F56DDE8AB3A5B7DDA3 */
        {0xA5B7DDA3,0x6DDE8AB3,0x775152F5,0x20F09F80,0x64ABE37D,0x66EA4E8E,0xD78B7665,0x67875F0F},

        /* Precalculated cordinates of EC points G,2G,4G,8G,16G,32G */
        /* sg = [251] 7CF9D3A33D4BA65270B4898643D42C2CF932DC6FB8C0E192FBC93C6F58C3B85 */
        {0xF58C3B85,0x2FBC93C6,0xFB8C0E19,0xCF932DC6,0x643D42C2,0x270B4898,0x33D4BA65,0x07CF9D3A},
        /* dg = [255] 44FD2F9298F81267A5C18434688F8A09FD399F05D140BEB39D103905D740913E */
        {0xD740913E,0x9D103905,0xD140BEB3,0xFD399F05,0x688F8A09,0xA5C18434,0x98F81267,0x44FD2F92},
        /* pg = [255] 6F117B689F0C65A85A1B7DCBDD43598C26D9E823CCAAC49EABC91205877AAA68 */
        {0x877AAA68,0xABC91205,0xCCAAC49E,0x26D9E823,0xDD43598C,0x5A1B7DCB,0x9F0C65A8,0x6F117B68},
        /* mpg = [253] 10EE849760F39A57A5E4823422BCA673D92617DC33553B615436EDFA78855585 */
        {0x78855585,0x5436EDFA,0x33553B61,0xD92617DC,0x22BCA673,0xA5E48234,0x60F39A57,0x10EE8497},
        /* sg2 = [255]  */
        {0x933C71D7,0x9224E7FC,0x7A0FF5B5,0x9F469D96,0xE1D60702,0x5AA69A65,0xA87D2E2E,0x590C063F},
        /* dg2 = [255]  */
        {0x42B4D5A8,0x8A99A560,0x4E60ACF6,0x8F2B810C,0xB16E37AA,0xE09E236B,0x69C92555,0x6BB595A6},
        /* pg2 = [255]  */
        {0xA59B7A5F,0x43FAA8B3,0x5D9ACF78,0x36C16BDD,0x0B3D6A31,0x500FA084,0x3EA50B73,0x701AF5B1},
        /* mpg2 = [255]  */
        {0x5A64858E,0xBC05574C,0xA2653087,0xC93E9422,0xF4C295CE,0xAFF05F7B,0xC15AF48C,0x0FE50A4E},
        /* sg4 = [255] 680E910321E58727CA348D3DFB0A92656765C6F47DFD2538287351B98EFC099F */
        {0x8EFC099F,0x287351B9,0x7DFD2538,0x6765C6F4,0xFB0A9265,0xCA348D3D,0x21E58727,0x680E9103},
        /* dg4 = [254] 27933F4C7445A49AC3E8E3CD06A05073327E89715660FAA995FE050A056818BF */
        {0x056818BF,0x95FE050A,0x5660FAA9,0x327E8971,0x06A05073,0xC3E8E3CD,0x7445A49A,0x27933F4C},
        /* pg4 = [255] 7F9D0CBF63553E2B5DDBDCF9102B44946E9E39457B5CC1725A13FBE9C476FF09 */
        {0xC476FF09,0x5A13FBE9,0x7B5CC172,0x6E9E3945,0x102B4494,0x5DDBDCF9,0x63553E2B,0x7F9D0CBF},
        /* mpg4 = [247] 62F3409CAAC1D4A2242306EFD4BB6B9161C6BA84A33E8DA5EC04163B8900E4 */
        {0x3B8900E4,0xA5EC0416,0x84A33E8D,0x9161C6BA,0xEFD4BB6B,0xA2242306,0x9CAAC1D4,0x0062F340},
        /* sg8 = [252] 915E76061BCE52FB1339C665ED9C3236CB30377E288702C59B7596604DD3E8F */
        {0x04DD3E8F,0x59B75966,0xE288702C,0x6CB30377,0x5ED9C323,0xB1339C66,0x61BCE52F,0x0915E760},
        /* dg8 = [254] 3A9024A1320E01C32C2741AC6E3C23FB963D7680E1B558F9E2A75DEDF39234D9 */
        {0xF39234D9,0xE2A75DED,0xE1B558F9,0x963D7680,0x6E3C23FB,0x2C2741AC,0x320E01C3,0x3A9024A1},
        /* pg8 = [254] 26907C5C2ECC4E95636412190EB62A32B8A371788BCCA7D7E7C1F5D9C9A2911A */
        {0xC9A2911A,0xE7C1F5D9,0x8BCCA7D7,0xB8A37178,0x0EB62A32,0x63641219,0x2ECC4E95,0x26907C5C},
        /* mpg8 = [255] 596F83A3D133B16A9C9BEDE6F149D5CD475C8E8774335828183E0A26365D6ED3 */
        {0x365D6ED3,0x183E0A26,0x74335828,0x475C8E87,0xF149D5CD,0x9C9BEDE6,0xD133B16A,0x596F83A3},
        /* sg16 = [253] 143B1CF8AA64FE61587A3A4342D20B09B9C19F3375C6BF9C322D04A52D9021F6 */
        {0x2D9021F6,0x322D04A5,0x75C6BF9C,0xB9C19F33,0x42D20B09,0x587A3A43,0xAA64FE61,0x143B1CF8},
        /* dg16 = [255] 4CF210EC5A9A8883E6B5E4193288D1E7A71284CBA64878B37EC851CA553E2DF3 */
        {0x553E2DF3,0x7EC851CA,0xA64878B3,0xA71284CB,0x3288D1E7,0xE6B5E419,0x5A9A8883,0x4CF210EC},
        /* pg16 = [254] 21B546A3374126E1D0A7D34BEA1809755F54258E270927299F867C7D968ACAAB */
        {0x968ACAAB,0x9F867C7D,0x27092729,0x5F54258E,0xEA180975,0xD0A7D34B,0x374126E1,0x21B546A3},
        /* mpg16 = [255] 5E4AB95CC8BED91E2F582CB415E7F68AA0ABDA71D8F6D8D66079838269753542 */
        {0x69753542,0x60798382,0xD8F6D8D6,0xA0ABDA71,0x15E7F68A,0x2F582CB4,0xC8BED91E,0x5E4AB95C},

        /* xg2 = [254] 36AB384C9F5A046C3D043B7D1833E7AC080D8E4515D7A45F83C5A14E2843CE0E */
        {0x2843CE0E,0x83C5A14E,0x15D7A45F,0x080D8E45,0x1833E7AC,0x3D043B7D,0x9F5A046C,0x36AB384C},
        /* yg2 = [254] 2260CDF3092329C21DA25EE8C9A21F5697390F51643851560E5F46AE6AF8A3C9 */
        {0x6AF8A3C9,0x0E5F46AE,0x64385156,0x97390F51,0xC9A21F56,0x1DA25EE8,0x092329C2,0x2260CDF3},
        /* tg2 = [254] 2498A7850B2F68DC1DE55F087303B4135D79ACC9C1F72402B71A3F556D69B401 */
        {0x6D69B401,0xB71A3F55,0xC1F72402,0x5D79ACC9,0x7303B413,0x1DE55F08,0x0B2F68DC,0x2498A785},
        /* xg4 = [254] 203DA8DB56CFF1468325D4B87A3520F91A739EC193CE1547493AA657C4C9F870 */
        {0xC4C9F870,0x493AA657,0x93CE1547,0x1A739EC1,0x7A3520F9,0x8325D4B8,0x56CFF146,0x203DA8DB},
        /* yg4 = [255] 47D0E827CB1595E1470EB88580D5716C4CF22832EA2F0FF0DF38AB61CA32112F */
        {0xCA32112F,0xDF38AB61,0xEA2F0FF0,0x4CF22832,0x80D5716C,0x470EB885,0xCB1595E1,0x47D0E827},
        /* tg4 = [254] 22783CD8D873260C7214BA6AC67C29607195E31EB6DD07CA5F8F22F6728A1358 */
        {0x728A1358,0x5F8F22F6,0xB6DD07CA,0x7195E31E,0xC67C2960,0x7214BA6A,0xD873260C,0x22783CD8},

        /* xg32 = [254] 39CF6C6917421AF98582561D0B39567DE6033190F97852FC4FDD40F6977E4F26 */
        {0x977E4F26,0x4FDD40F6,0xF97852FC,0xE6033190,0x0B39567D,0x8582561D,0x17421AF9,0x39CF6C69},
        /* yg32 = [255] 4434A90EE12CCE6B7ADE93ECC0F88B78B41205E74C8C4038F92D394F3A06D269 */
        {0x3A06D269,0xF92D394F,0x4C8C4038,0xB41205E7,0xC0F88B78,0x7ADE93EC,0xE12CCE6B,0x4434A90E},
        /* tg32 = [255] 6DF8117912746C6DD3A384546D47A595714E56C176B8A6B523C1747F59E2C69F */
        {0x59E2C69F,0x23C1747F,0x76B8A6B5,0x714E56C1,0x6D47A595,0xD3A38454,0x12746C6D,0x6DF81179},

        /* auxiliary value d2 = 0x2406D9DC56DFFCE7198E80F2EEF3D13000E0149A8283B156EBD69B9426B2F159 = 2*d */
        {0x26B2F159,0xEBD69B94,0x8283B156,0x00E0149A,0xEEF3D130,0x198E80F2,0x56DFFCE7,0x2406D9DC},
        /* auxiliary value q58 = 0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD = (P - 5)/8 */
        {0xFFFFFFFD,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x0FFFFFFF},
        /* auxiliary value = ecAuxValSqrt_1 = 0x2B8324804FC1DF0B2B4D00993DFBD7A72F431806AD2FE478C4EE1B274A0EA0B0 = sqrt(-1) */
        {0x4A0EA0B0,0xC4EE1B27,0xAD2FE478,0x2F431806,0x3DFBD7A7,0x2B4D0099,0x4FC1DF0B,0x2B832480},

        /*Barrett tags for EC modulus and order */
#ifdef CC_SUPPORT_PKA_64_16
        {0x00000000,0x00000000,0x00000080}, /*0x800000000000000000 - for modulus*/
        {0xFFFFFFFF,0xFFFFFFFF,0x000000FF}, /*0x3FFFFFFFFFFFFFFFFF - for EC order*/
#else   /* CC_SUPPORT_PKA_128_32 */
        {0x00000000,0x00000000,0x00000000,0x00000000,0x00000080}, /*0x8000000000000000000000000000000000  - for modulus*/
        {0x000003FF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFAC8}, /*0x3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAC8 - for EC order*/
#endif
        /* scalar bit setting parameters */
        0xFFFFFFF8,  /* SCALAR_LSW_AND_VALUE (248)*/
        0x7FFFFFFF,  /* SCALAR_MSW_AND_VALUE (127<<24)*/
        0x40000000,  /* SCALAR_MSW_OR_VALUE (64<<24)*/
};

/*!<
 @brief    the function returns the domain pointer if the domain is supported for the product,
       otherwise return NULL
 @return   return domain pointer or NULL

*/
const CCEcEdwDomain_t *EcEdwGetDomain25519(void)
{
    return &EcEdwDomain25519;
}
