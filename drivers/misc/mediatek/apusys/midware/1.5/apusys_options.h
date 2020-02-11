/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __APUSYS_OPTIONS_H__
#define __APUSYS_OPTIONS_H__

/* apusys interface support */
//#define APUSYS_OPTIONS_INF_MNOC
//#define APUSYS_OPTIONS_INF_REVISER
//#define APUSYS_OPTIONS_INF_POWERARCH

#define APUSYS_OPTIONS_SUSPEND_SUPPORT
//#define APUSYS_OPTIONS_SECURE_SUPPORT
//#define APUSYS_OPTIONS_DEVALLOC_SUPPORT

/* apusys memory support */
#ifdef CONFIG_MTK_ION
#define APUSYS_OPTIONS_MEM_ION
#else
#define APUSYS_OPTIONS_MEM_DMA
#endif
#define APUSYS_OPTIONS_MEM_VLM

/* scheduler param */
#define APUSYS_PARAM_WAIT_TIMEOUT (30*1000*1000)

#endif
