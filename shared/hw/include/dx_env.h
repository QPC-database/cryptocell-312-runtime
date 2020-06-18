/****************************************************************************
* The confidential and proprietary information contained in this file may   *
* only be used by a person authorised under and to the extent permitted     *
* by a subsisting licensing agreement from Arm Limited (or its affiliates). *
*     (C) COPYRIGHT [2001-2019] Arm Limited (or its affiliates).            *
*         ALL RIGHTS RESERVED                                               *
* This entire notice must be reproduced on all copies of this file          *
* and copies of this file may only be made by a person if such person is    *
* permitted to do so under the terms of a subsisting license agreement      *
* from Arm Limited (or its affiliates).                                     *
*****************************************************************************/

#ifndef __DX_ENV_H__
#define __DX_ENV_H__

// --------------------------------------
// BLOCK: FPGA_ENV_REGS
// --------------------------------------
#define DX_ENV_PKA_DEBUG_MODE_REG_OFFSET   0x024UL 
#define DX_ENV_PKA_DEBUG_MODE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PKA_DEBUG_MODE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_SCAN_MODE_REG_OFFSET   0x030UL 
#define DX_ENV_SCAN_MODE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SCAN_MODE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_ALLOW_SCAN_REG_OFFSET   0x034UL 
#define DX_ENV_CC_ALLOW_SCAN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_ALLOW_SCAN_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_HOST_INT_REG_OFFSET   0x0A0UL 
#define DX_ENV_CC_HOST_INT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_HOST_INT_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_PUB_HOST_INT_REG_OFFSET   0x0A4UL 
#define DX_ENV_CC_PUB_HOST_INT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_PUB_HOST_INT_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_RST_N_REG_OFFSET   0x0A8UL 
#define DX_ENV_CC_RST_N_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_RST_N_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_RST_OVERRIDE_REG_OFFSET   0x0ACUL 
#define DX_ENV_RST_OVERRIDE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_RST_OVERRIDE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_POR_N_ADDR_REG_OFFSET   0x0E0UL 
#define DX_ENV_CC_POR_N_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_POR_N_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_COLD_RST_REG_OFFSET   0x0FCUL 
#define DX_ENV_CC_COLD_RST_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_COLD_RST_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_DUMMY_ADDR_REG_OFFSET   0x108UL 
#define DX_ENV_DUMMY_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DUMMY_ADDR_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_COUNTER_CLR_REG_OFFSET   0x118UL 
#define DX_ENV_COUNTER_CLR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_COUNTER_CLR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_COUNTER_RD_REG_OFFSET   0x11CUL 
#define DX_ENV_COUNTER_RD_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_COUNTER_RD_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_RNG_DEBUG_ENABLE_REG_OFFSET   0x430UL 
#define DX_ENV_RNG_DEBUG_ENABLE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_RNG_DEBUG_ENABLE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_LCS_REG_OFFSET   0x43CUL 
#define DX_ENV_CC_LCS_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_LCS_VALUE_BIT_SIZE 	0x8UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_REG_OFFSET   0x440UL 
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_CM_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_CM_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_DM_BIT_SHIFT 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_DM_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_SECURE_BIT_SHIFT 	0x2UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_SECURE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_RMA_BIT_SHIFT 	0x3UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_RMA_BIT_SIZE 	0x1UL
#define DX_ENV_DCU_EN_REG_OFFSET   0x444UL 
#define DX_ENV_DCU_EN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DCU_EN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CC_LCS_IS_VALID_REG_OFFSET   0x448UL 
#define DX_ENV_CC_LCS_IS_VALID_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_LCS_IS_VALID_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_POWER_DOWN_REG_OFFSET   0x478UL 
#define DX_ENV_POWER_DOWN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_POWER_DOWN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_DCU_H_EN_REG_OFFSET   0x484UL 
#define DX_ENV_DCU_H_EN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DCU_H_EN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_VERSION_REG_OFFSET   0x488UL 
#define DX_ENV_VERSION_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_VERSION_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_ROSC_WRITE_REG_OFFSET   0x48CUL 
#define DX_ENV_ROSC_WRITE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_ROSC_WRITE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_ROSC_ADDR_REG_OFFSET   0x490UL 
#define DX_ENV_ROSC_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_ROSC_ADDR_VALUE_BIT_SIZE 	0x8UL
#define DX_ENV_RESET_SESSION_KEY_REG_OFFSET   0x494UL 
#define DX_ENV_RESET_SESSION_KEY_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_RESET_SESSION_KEY_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_SESSION_KEY_0_REG_OFFSET   0x4A0UL 
#define DX_ENV_SESSION_KEY_0_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SESSION_KEY_0_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_SESSION_KEY_1_REG_OFFSET   0x4A4UL 
#define DX_ENV_SESSION_KEY_1_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SESSION_KEY_1_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_SESSION_KEY_2_REG_OFFSET   0x4A8UL 
#define DX_ENV_SESSION_KEY_2_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SESSION_KEY_2_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_SESSION_KEY_3_REG_OFFSET   0x4ACUL 
#define DX_ENV_SESSION_KEY_3_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SESSION_KEY_3_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_SESSION_KEY_VALID_REG_OFFSET   0x4B0UL 
#define DX_ENV_SESSION_KEY_VALID_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SESSION_KEY_VALID_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_SPIDEN_REG_OFFSET   0x4D0UL 
#define DX_ENV_SPIDEN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SPIDEN_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_AXIM_USER_PARAMS_REG_OFFSET   0x600UL 
#define DX_ENV_AXIM_USER_PARAMS_ARUSER_BIT_SHIFT 	0x0UL
#define DX_ENV_AXIM_USER_PARAMS_ARUSER_BIT_SIZE 	0x5UL
#define DX_ENV_AXIM_USER_PARAMS_AWUSER_BIT_SHIFT 	0x5UL
#define DX_ENV_AXIM_USER_PARAMS_AWUSER_BIT_SIZE 	0x5UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_REG_OFFSET   0x604UL 
#define DX_ENV_SECURITY_MODE_OVERRIDE_AWPROT_NS_BIT_BIT_SHIFT 	0x0UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_AWPROT_NS_BIT_BIT_SIZE 	0x1UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_AWPROT_NS_OVERRIDE_BIT_SHIFT 	0x1UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_AWPROT_NS_OVERRIDE_BIT_SIZE 	0x1UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_ARPROT_NS_BIT_BIT_SHIFT 	0x2UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_ARPROT_NS_BIT_BIT_SIZE 	0x1UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_ARPROT_NS_OVERRIDE_BIT_SHIFT 	0x3UL
#define DX_ENV_SECURITY_MODE_OVERRIDE_ARPROT_NS_OVERRIDE_BIT_SIZE 	0x1UL
#define DX_ENV_SRAM_ENABLE_REG_OFFSET   0x608UL 
#define DX_ENV_SRAM_ENABLE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SRAM_ENABLE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_APB_FIPS_ADDR_REG_OFFSET   0x650UL 
#define DX_ENV_APB_FIPS_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_ADDR_VALUE_BIT_SIZE 	0xCUL
#define DX_ENV_APB_FIPS_VAL_REG_OFFSET   0x654UL 
#define DX_ENV_APB_FIPS_VAL_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_VAL_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APB_FIPS_MASK_REG_OFFSET   0x658UL 
#define DX_ENV_APB_FIPS_MASK_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_MASK_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APB_FIPS_CNT_REG_OFFSET   0x65CUL 
#define DX_ENV_APB_FIPS_CNT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_CNT_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APB_FIPS_NEW_ADDR_REG_OFFSET   0x660UL 
#define DX_ENV_APB_FIPS_NEW_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_NEW_ADDR_VALUE_BIT_SIZE 	0xCUL
#define DX_ENV_APB_FIPS_NEW_VAL_REG_OFFSET   0x664UL 
#define DX_ENV_APB_FIPS_NEW_VAL_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_FIPS_NEW_VAL_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APB_PPROT_OVERRIDE_REG_OFFSET   0x668UL 
#define DX_ENV_APB_PPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SHIFT 	0x0UL
#define DX_ENV_APB_PPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SIZE 	0x3UL
#define DX_ENV_APB_PPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SHIFT 	0x3UL
#define DX_ENV_APB_PPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SIZE 	0x1UL
#define DX_ENV_APBSC_FIPS_ADDR_REG_OFFSET   0x670UL 
#define DX_ENV_APBSC_FIPS_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_ADDR_VALUE_BIT_SIZE 	0xCUL
#define DX_ENV_APBSC_FIPS_VAL_REG_OFFSET   0x674UL 
#define DX_ENV_APBSC_FIPS_VAL_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_VAL_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APBSC_FIPS_MASK_REG_OFFSET   0x678UL 
#define DX_ENV_APBSC_FIPS_MASK_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_MASK_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APBSC_FIPS_CNT_REG_OFFSET   0x67CUL 
#define DX_ENV_APBSC_FIPS_CNT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_CNT_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APBSC_FIPS_NEW_ADDR_REG_OFFSET   0x680UL 
#define DX_ENV_APBSC_FIPS_NEW_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_NEW_ADDR_VALUE_BIT_SIZE 	0xCUL
#define DX_ENV_APBSC_FIPS_NEW_VAL_REG_OFFSET   0x684UL 
#define DX_ENV_APBSC_FIPS_NEW_VAL_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_FIPS_NEW_VAL_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_APBSC_PPROT_OVERRIDE_REG_OFFSET   0x688UL 
#define DX_ENV_APBSC_PPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SHIFT 	0x0UL
#define DX_ENV_APBSC_PPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SIZE 	0x3UL
#define DX_ENV_APBSC_PPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SHIFT 	0x3UL
#define DX_ENV_APBSC_PPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SIZE 	0x1UL
#define DX_ENV_AO_CC_GPPC_REG_OFFSET   0x700UL 
#define DX_ENV_AO_CC_GPPC_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_AO_CC_GPPC_VALUE_BIT_SIZE 	0x8UL
#define DX_ENV_AHBM_HPROT_OVERRIDE_REG_OFFSET   0x704UL 
#define DX_ENV_AHBM_HPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SHIFT 	0x0UL
#define DX_ENV_AHBM_HPROT_OVERRIDE_PPROT_OVERRIDE_VAL_BIT_SIZE 	0x3UL
#define DX_ENV_AHBM_HPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SHIFT 	0x3UL
#define DX_ENV_AHBM_HPROT_OVERRIDE_PPROT_OVERRIDE_CNTL_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_IDLE_REG_OFFSET   0x708UL 
#define DX_ENV_CC_IS_IDLE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_IS_IDLE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_POWERDOWN_RDY_REG_OFFSET   0x70CUL 
#define DX_ENV_CC_POWERDOWN_RDY_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_POWERDOWN_RDY_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_STATIC_CFG_REG_OFFSET   0x710UL 
#define DX_ENV_CC_STATIC_CFG_USER_OTP_FILTERING_DISABLE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_STATIC_CFG_USER_OTP_FILTERING_DISABLE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_STATIC_CFG_REMOVE_GHASH_ENGINE_BIT_SHIFT 	0x1UL
#define DX_ENV_CC_STATIC_CFG_REMOVE_GHASH_ENGINE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_STATIC_CFG_REMOVE_CHACHA_ENGINE_BIT_SHIFT 0x2UL
#define DX_ENV_CC_STATIC_CFG_REMOVE_CHACHA_ENGINE_BIT_SIZE 	0x1UL
#define DX_ENV_FUSE_AIB_1K_OFFSET_REG_OFFSET   0x714UL 
#define DX_ENV_FUSE_AIB_1K_OFFSET_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_FUSE_AIB_1K_OFFSET_VALUE_BIT_SIZE 	0x2UL
#define DX_ENV_CC_IS_IDLE_CNTR_REG_OFFSET   0x720UL 
#define DX_ENV_CC_IS_IDLE_CNTR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_IS_IDLE_CNTR_VALUE_BIT_SIZE 	0x20UL

// --------------------------------------
// BLOCK: ENV_CC_MEMORIES
// --------------------------------------
#define DX_ENV_FUSE_READY_REG_OFFSET 	0x0000UL 
#define DX_ENV_FUSE_READY_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_FUSE_READY_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_PERF_RAM_MASTER_REG_OFFSET 	0x00ECUL 
#define DX_ENV_PERF_RAM_MASTER_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_MASTER_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_PERF_RAM_ADDR_HIGH4_REG_OFFSET 	0x00F0UL 
#define DX_ENV_PERF_RAM_ADDR_HIGH4_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_ADDR_HIGH4_VALUE_BIT_SIZE 	0x2UL
#define DX_ENV_FUSES_RAM_REG_OFFSET 	0x03ECUL 
#define DX_ENV_FUSES_RAM_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_FUSES_RAM_VALUE_BIT_SIZE 	0x20UL
// --------------------------------------
// BLOCK: ENV_PERF_RAM_BASE
// --------------------------------------
#define DX_ENV_PERF_RAM_BASE_REG_OFFSET 	0x0000UL 
#define DX_ENV_PERF_RAM_BASE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_BASE_VALUE_BIT_SIZE 	0x20UL

#endif /*__DX_ENV_H__*/
