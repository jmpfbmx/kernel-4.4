/*
 *  include header file for Richtek RT5081 PMU
 *
 *  Copyright (C) 2016 Richtek Technology Corp.
 *  Shufan <shufan_lee@richtek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#ifndef __LINUX_MFD_RT5081_PMU_CHARGER_H
#define __LINUX_MFD_RT5081_PMU_CHARGER_H

/* Define this macro if detecting apple samsung TA is needed */
/* #define RT5081_APPLE_SAMSUNG_TA_SUPPORT */

/* Parameter */
/* uA */
#define RT5081_ICHG_NUM		64
#define RT5081_ICHG_MIN		100000
#define RT5081_ICHG_MAX		5000000
#define RT5081_ICHG_STEP	100000

/* uA */
#define RT5081_IEOC_NUM		16
#define RT5081_IEOC_MIN		100000
#define RT5081_IEOC_MAX		850000
#define RT5081_IEOC_STEP	50000

/* uV */
#define RT5081_MIVR_NUM		128
#define RT5081_MIVR_MIN		3900000
#define RT5081_MIVR_MAX		13400000
#define RT5081_MIVR_STEP	100000

/* uA */
#define RT5081_AICR_NUM		64
#define RT5081_AICR_MIN		100000
#define RT5081_AICR_MAX		3250000
#define RT5081_AICR_STEP	50000

/* uV */
#define RT5081_BAT_VOREG_NUM	128
#define RT5081_BAT_VOREG_MIN	3900000
#define RT5081_BAT_VOREG_MAX	4710000
#define RT5081_BAT_VOREG_STEP	10000

/* uV */
#define RT5081_BOOST_VOREG_NUM	64
#define RT5081_BOOST_VOREG_MIN	4425000
#define RT5081_BOOST_VOREG_MAX	5825000
#define RT5081_BOOST_VOREG_STEP	25000

/* uV */
#define RT5081_VPREC_NUM	16
#define RT5081_VPREC_MIN	2000000
#define RT5081_VPREC_MAX	3500000
#define RT5081_VPREC_STEP	100000

/* uA */
#define RT5081_IPREC_NUM	16
#define RT5081_IPREC_MIN	100000
#define RT5081_IPREC_MAX	850000
#define RT5081_IPREC_STEP	50000

/* uV */
#define RT5081_VRECHG_NUM	4
#define RT5081_VRECHG_MIN	100000
#define RT5081_VRECHG_MAX	400000
#define RT5081_VRECHG_STEP	100000

/* Watchdog fast-charge timer */
/* hour */
#define RT5081_WT_FC_NUM	8
#define RT5081_WT_FC_MIN	4
#define RT5081_WT_FC_MAX	20
#define RT5081_WT_FC_STEP	2

/* [lidebiao] Modify IR compensation for charging */
/* IR compensation */
/* uohm */
#define RT5081_IRCMP_RES_NUM	8
#define RT5081_IRCMP_RES_MIN	0
#define RT5081_IRCMP_RES_MAX	140000
#define RT5081_IRCMP_RES_STEP	20000
/* [lidebiao end] */

/* IR compensation maximum voltage clamp */
/* uV */
#define RT5081_IRCMP_VCLAMP_NUM		8
#define RT5081_IRCMP_VCLAMP_MIN		0
#define RT5081_IRCMP_VCLAMP_MAX		224000
#define RT5081_IRCMP_VCLAMP_STEP	32000

/* PE+20 voltage */
/* uV */
#define RT5081_PEP20_VOLT_NUM	30
#define RT5081_PEP20_VOLT_MIN	5500000
#define RT5081_PEP20_VOLT_MAX	20000000
#define RT5081_PEP20_VOLT_STEP	500000

/* AICL VTH */
/* uV */
#define RT5081_AICL_VTH_NUM	8
#define RT5081_AICL_VTH_MIN	4100000
#define RT5081_AICL_VTH_MAX	4800000
#define RT5081_AICL_VTH_STEP	100000

/* VBUSOV LVL */
#define RT5081_DC_VBUSOV_LVL_NUM	32
#define RT5081_DC_VBUSOV_LVL_MIN	3900000
#define RT5081_DC_VBUSOV_LVL_MAX	7000000
#define RT5081_DC_VBUSOV_LVL_STEP	100000

/* IBUSOC LVL */
#define RT5081_DC_IBUSOC_LVL_NUM	8
#define RT5081_DC_IBUSOC_LVL_MIN	4000000
#define RT5081_DC_IBUSOC_LVL_MAX	6500000
#define RT5081_DC_IBUSOC_LVL_STEP	500000

/* ADC unit/offset */
#define RT5081_ADC_UNIT_VBUS_DIV5	25000	/* uV */
#define RT5081_ADC_UNIT_VBUS_DIV2	10000	/* uV */
#define RT5081_ADC_UNIT_VSYS		5000	/* uV */
#define RT5081_ADC_UNIT_VBAT		5000	/* uV */
#define RT5081_ADC_UNIT_TS_BAT		25	/* 0.01% */
#define RT5081_ADC_UNIT_IBUS		50000	/* uA */
#define RT5081_ADC_UNIT_IBAT		50000	/* uA */
#define RT5081_ADC_UNIT_CHG_VDDP	5000	/* uV */
#define RT5081_ADC_UNIT_TEMP_JC		2	/* degree */

#define RT5081_ADC_OFFSET_VBUS_DIV5	0	/* mV */
#define RT5081_ADC_OFFSET_VBUS_DIV2	0	/* mV */
#define RT5081_ADC_OFFSET_VSYS		0	/* mV */
#define RT5081_ADC_OFFSET_VBAT		0	/* mV */
#define RT5081_ADC_OFFSET_TS_BAT	0	/* % */
#define RT5081_ADC_OFFSET_IBUS		0	/* mA */
#define RT5081_ADC_OFFSET_IBAT		0	/* mA */
#define RT5081_ADC_OFFSET_CHG_VDDP	0	/* mV */
#define RT5081_ADC_OFFSET_TEMP_JC	(-40)	/* degree */

/* ========== CORE_CTRL2 0x02 ============ */
#define RT5081_SHIFT_CHG_RST	6
#define RT5081_MASK_CHG_RST	(1 << RT5081_SHIFT_CHG_RST)

/* ========== CHG_CTRL1 0x11 ============ */
#define RT5081_SHIFT_OPA_MODE	0
#define RT5081_SHIFT_HZ_EN	2

#define RT5081_MASK_OPA_MODE	(1 << RT5081_SHIFT_OPA_MODE)
#define RT5081_MASK_HZ_EN	(1 << RT5081_SHIFT_HZ_EN)

/* ========== CHG_CTRL2 0x12 ============ */
#define RT5081_SHIFT_CHG_EN		0
#define RT5081_SHIFT_CFO_EN		1
#define RT5081_SHIFT_IINLMTSEL		2
#define RT5081_SHIFT_TE_EN		4
#define RT5081_SHIFT_BYPASS_MODE	5

#define RT5081_MASK_CHG_EN	(1 << RT5081_SHIFT_CHG_EN)
#define RT5081_MASK_CFO_EN	(1 << RT5081_SHIFT_CFO_EN)
#define RT5081_MASK_IINLMTSEL	0x0C
#define RT5081_MASK_TE_EN	(1 << RT5081_SHIFT_TE_EN)
#define RT5081_MASK_BYPASS_MODE	(1 << RT5081_SHIFT_BYPASS_MODE)


/* ========== CHG_CTRL3 0x13 ============ */
#define RT5081_SHIFT_AICR	2
#define RT5081_SHIFT_AICR_EN	1
#define RT5081_SHIFT_ILIM_EN	0

#define RT5081_MASK_AICR	0xFC
#define RT5081_MASK_AICR_EN	(1 << RT5081_SHIFT_AICR_EN)
#define RT5081_MASK_ILIM_EN	(1 << RT5081_SHIFT_ILIM_EN)

/* ========== CHG_CTRL4 0x14 ============ */
#define RT5081_SHIFT_BAT_VOREG	1

#define RT5081_MASK_BAT_VOREG	0xFE

/* ========== CHG_CTRL5 0x15 ============ */
#define RT5081_SHIFT_BOOST_VOREG	2

#define RT5081_MASK_BOOST_VOREG		0xFC

/* ========== CHG_CTRL6 0x16 ============ */
#define RT5081_SHIFT_MIVR	1
#define RT5081_SHIFT_MIVR_EN	0

#define RT5081_MASK_MIVR	0xFE
#define RT5081_MASK_MIVR_EN	(1 << RT5081_SHIFT_MIVR_EN)

/* ========== CHG_CTRL7 0x17 ============ */
#define RT5081_SHIFT_ICHG	2

#define RT5081_MASK_ICHG	0xFC

/* ========== CHG_CTRL8 0x18 ============ */
#define RT5081_SHIFT_VPREC	4
#define RT5081_SHIFT_IPREC	0

#define RT5081_MASK_VPREC	0xF0
#define RT5081_MASK_IPREC	0x0F

/* ========== CHG_CTRL9 0x19 ============ */
#define RT5081_SHIFT_IEOC	4

#define RT5081_MASK_IEOC	0xF0

/* ========== CHG_CTRL10 0x1A ============ */
#define RT5081_SHIFT_BOOST_OC	0

#define RT5081_MASK_BOOST_OC	0x07

/* ========== CHG_CTRL11 0x1B ============ */
#define RT5081_SHIFT_VRECHG	0

#define RT5081_MASK_VRECHG	0x03

/* ========== CHG_CTRL12 0x1C ============ */
#define RT5081_SHIFT_TMR_EN	1
#define RT5081_SHIFT_WT_FC	5

#define RT5081_MASK_TMR_EN	(1 << RT5081_SHIFT_TMR_EN)
#define RT5081_MASK_WT_FC	0xE0

/* ========== CHG_CTRL13 0x1D ============ */
#define RT5081_SHIFT_WDT_EN	7

#define RT5081_MASK_WDT_EN	(1 << RT5081_SHIFT_WDT_EN)

/* ========== CHG_CTRL14 0x1E ============ */
#define RT5081_SHIFT_AICL_MEAS	7
#define RT5081_SHIFT_AICL_VTH	0

#define RT5081_MASK_AICL_MEAS	(1 << RT5081_SHIFT_AICL_MEAS)
#define RT5081_MASK_AICL_VTH	0x07

/* ========== CHG_CTRL16 0x20 ============ */
#define RT5081_SHIFT_JEITA_EN	4

#define RT5081_MASK_JEITA_EN	(1 << RT5081_SHIFT_JEITA_EN)

/* ========== CHG_ADC 0x21 ============ */
#define RT5081_SHIFT_ADC_IN_SEL	4
#define RT5081_SHIFT_ADC_START	0

#define RT5081_MASK_ADC_IN_SEL	0xF0
#define RT5081_MASK_ADC_START	(1 << RT5081_SHIFT_ADC_START)

/* ========== CHG_DEVICETYPE 0x22 ============ */
#define RT5081_SHIFT_USBCHGEN	7
#define RT5081_SHIFT_DCPSTD	2
#define RT5081_SHIFT_CDP	1
#define RT5081_SHIFT_SDP	0

#define RT5081_MASK_USBCHGEN	(1 << RT5081_SHIFT_USBCHGEN)
#define RT5081_MASK_DCPSTD	(1 << RT5081_SHIFT_DCPSTD)
#define RT5081_MASK_CDP		(1 << RT5081_SHIFT_CDP)
#define RT5081_MASK_SDP		(1 << RT5081_SHIFT_SDP)

/* ========== QCCTRL2 0x24 ============ */
#define RT5081_SHIFT_EN_DCP	1

#define RT5081_MASK_EN_DCP	(1 << RT5081_SHIFT_EN_DCP)

/* ========== USBSTATUS1 0x27 ============ */
#define RT5081_SHIFT_USB_STATUS	4

#define RT5081_MASK_USB_STATUS	0x70

/* ========== CHG_PUMP 0x2A ============ */
#define RT5081_SHIFT_VG_LVL_SEL	1
#define RT5081_SHIFT_VG_EN	0

#define RT5081_MASK_VG_LVL_SEL	(1 << RT5081_SHIFT_LVL_SEL)
#define RT5081_MASK_VG_EN	(1 << RT5081_SHIFT_VG_EN)

/* ========== CHG_CTRL17 0x2B ============ */
#define RT5081_SHIFT_PUMPX_EN		7
#define RT5081_SHIFT_PUMPX_20_10	6
#define RT5081_SHIFT_PUMPX_UP_DN	5
#define RT5081_SHIFT_PUMPX_DEC		0

#define RT5081_MASK_PUMPX_EN	(1 << RT5081_SHIFT_PUMPX_EN)
#define RT5081_MASK_PUMPX_20_10	(1 << RT5081_SHIFT_PUMPX_20_10)
#define RT5081_MASK_PUMPX_UP_DN	(1 << RT5081_SHIFT_PUMPX_UP_DN)
#define RT5081_MASK_PUMPX_DEC	0x1F

/* ========== CHG_CTRL18 0x2C ============ */
#define RT5081_SHIFT_IRCMP_RES		3
#define RT5081_SHIFT_IRCMP_VCLAMP	0

#define RT5081_MASK_IRCMP_RES		0x38
#define RT5081_MASK_IRCMP_VCLAMP	0x07

/* ========== CHG_DIRCHG1 0x2D ============ */
#define RT5081_SHIFT_DC_VBATOV_EN	6
#define RT5081_SHIFT_DC_VBATOV_LVL	4
#define RT5081_SHIFT_DC_IBUSOC_EN	3
#define RT5081_SHIFT_DC_IBUSOC_LVL	0

#define RT5081_MASK_DC_VBATOV_EN	(1 << RT5081_SHIFT_DC_VBATOV_EN)
#define RT5081_MASK_DC_VBATOV_LVL	0x30
#define RT5081_MASK_DC_IBUSOC_EN	(1 << RT5081_SHIFT_DC_IBUSOC_EN)
#define RT5081_MASK_DC_IBUSOC_LVL	0x07

/* ========== CHG_DIRCHG1 0x2E ============ */
#define RT5081_SHIFT_DC_WDT	4

#define RT5081_MASK_DC_WDT	0x70

/* ========== CHG_DIRCHG2 0x2F ============ */
#define RT5081_SHIFT_DC_VBUSOV_EN	7
#define RT5081_SHIFT_DC_VBUSOV_LVL	2

#define RT5081_MASK_DC_VBUSOV_EN	(1 << RT5081_SHIFT_DC_VBUSOV_EN)
#define RT5081_MASK_DC_VBUSOV_LVL	0x7C

/* ========== CHG_STAT 0x4A ============ */
#define RT5081_SHIFT_ADC_STAT	0
#define RT5081_SHIFT_CHG_STAT	6

#define RT5081_MASK_ADC_STAT	(1 << RT5081_SHIFT_ADC_STAT)
#define RT5081_MASK_CHG_STAT	0xC0

/* ========== CHG_STAT1 0xD0 ============ */
#define RT5081_SHIFT_PWR_RDY	7
#define RT5081_SHIFT_CHG_MIVR	6
#define RT5081_SHIFT_CHG_AICR	5
#define RT5081_SHIFT_CHG_TREG	4
#define RT5081_SHIFT_DIRCHG_ON	0

#define RT5081_MASK_PWR_RDY	(1 << RT5081_SHIFT_PWR_RDY)
#define RT5081_MASK_CHG_MIVR	(1 << RT5081_SHIFT_CHG_MIVR)
#define RT5081_MASK_CHG_AICR	(1 << RT5081_SHIFT_CHG_AICR)
#define RT5081_MASK_CHG_TREG	(1 << RT5081_SHIFT_CHG_TREG)
#define RT5081_MASK_DIRCHG_ON	(1 << RT5081_SHIFT_DIRCHG_ON)

/* ========== CHG_IRQ5 0xC4 ============ */
#define RT5081_SHIFT_CHG_IEOCI		7
#define RT5081_SHIFT_CHG_TERMI		6
#define RT5081_SHIFT_CHG_RECHGI		5
#define RT5081_SHIFT_CHG_SSFINISHI	4
#define RT5081_SHIFT_CHG_WDTMRI		3
#define RT5081_SHIFT_CHGDET_DONEI	2
#define RT5081_SHIFT_CHG_ICHGMEASI	1
#define RT5081_SHIFT_CHG_AICLMEASI	0

#define RT5081_MASK_CHG_IEOCI		(1 << RT5081_SHIFT_CHG_IEOCI)
#define RT5081_MASK_CHG_TERMI		(1 << RT5081_SHIFT_CHG_TERMI)
#define RT5081_MASK_CHG_RECHGI		(1 << RT5081_SHIFT_CHG_RECHGI)
#define RT5081_MASK_CHG_SSFINISHI	(1 << RT5081_SHIFT_CHG_SSFINISHI)
#define RT5081_MASK_CHG_WDTMRI		(1 << RT5081_SHIFT_CHG_WDTMRI)
#define RT5081_MASK_CHGDET_DONEI	(1 << RT5081_SHIFT_CHGDET_DONEI)
#define RT5081_MASK_CHG_ICHGMEASI	(1 << RT5081_SHIFT_CHG_ICHGMEASI)
#define RT5081_MASK_CHG_AICLMEASI	(1 << RT5081_SHIFT_CHG_AICLMEASI)

/* ========== CHG_IRQ6 0xC5 ============ */
#define RT5081_SHIFT_BST_OLPI		7
#define RT5081_SHIFT_BST_MIDOVI		6
#define RT5081_SHIFT_BST_BATUVI		5
#define RT5081_SHIFT_PUMPX_DONEI	1
#define RT5081_SHIFT_ADC_DONEI		0

#define RT5081_MASK_BST_OLPI	(1 << RT5081_SHIFT_BST_OLPI)
#define RT5081_MASK_BST_MIDOVI	(1 << RT5081_SHIFT_BST_MIDOVI)
#define RT5081_MASK_BST_BATUVI	(1 << RT5081_SHIFT_BST_BATUVI)
#define RT5081_MASK_PUMPX_DONEI	(1 << RT5081_SHIFT_PUMPX_DONEI)
#define RT5081_MASK_ADC_DONEI	(1 << RT5081_SHIFT_ADC_DONEI)

/* ========== DPDM_IRQ 0xC6 ============ */
#define RT5081_SHIFT_DCDTI	7
#define RT5081_SHIFT_CHGDETI	6
#define RT5081_SHIFT_HVDCPDET	5
#define RT5081_SHIFT_DETACHI	1
#define RT5081_SHIFT_ATTACHI	0

#define RT5081_MASK_DCDTI	(1 << RT5081_SHIFT_DCDTI)
#define RT5081_MASK_CHGDETI	(1 << RT5081_SHIFT_CHGDETI)
#define RT5081_MASK_HVDCPDET	(1 << RT5081_SHIFT_HVDCPDET)
#define RT5081_MASK_DETACHI	(1 << RT5081_SHIFT_DETACHI)
#define RT5081_MASK_ATTACHI	(1 << RT5081_SHIFT_ATTACHI)

/* ========== CHG_STAT1 0xD0 ============ */
#define RT5081_SHIFT_MIVR_STAT	6

#define RT5081_MASK_MIVR_STAT	(1 << RT5081_SHIFT_MIVR_STAT)

/* ========== CHG_STAT2 0xD1 ============ */
#define RT5081_SHIFT_CHG_VBUSOV_STAT	7

#define RT5081_MASK_CHG_VBUSOV_STAT	(1 << RT5081_SHIFT_CHG_VBUSOV_STAT)

/* ========== CHG_STAT4 0xD3 ============ */
#define RT5081_SHIFT_CHG_TMRI_STAT	3

#define RT5081_MASK_CHG_TMRI_STAT	(1 << RT5081_SHIFT_CHG_TMRI_STAT)

/* ========== CHG_STAT5 0xD4 ============ */
#define RT5081_SHIFT_CHG_IEOCI_STAT	7

#define RT5081_MASK_CHG_IEOCI_STAT	(1 << RT5081_SHIFT_CHG_IEOCI_STAT)

/* ========== DPDM_STAT 0xD6 ============ */
#define RT5081_SHIFT_DCDTI_STAT	7

#define RT5081_MASK_DCDTI_STAT	(1 << RT5081_SHIFT_DCDTI_STAT)

/* ========== OVPCTRL_STAT 0xD8 ============ */
#define RT5081_SHIFT_OVPCTRL_UVP_D_STAT	4

#define RT5081_MASK_OVPCTRL_UVP_D_STAT	(1 << RT5081_SHIFT_OVPCTRL_UVP_D_STAT)

/* ========== CHG_MASK1 0xE0 ============ */
#define RT5081_SHIFT_CHG_MIVRM	6
#define RT5081_MASK_CHG_MIVRM	(1 << RT5081_SHIFT_CHG_MIVRM)

/* ========== CHG_MASK5 0xE4 ============ */
#define RT5081_SHIFT_CHG_IEOCM		7
#define RT5081_SHIFT_CHG_TERMM		6
#define RT5081_SHIFT_CHG_RECHGM		5
#define RT5081_SHIFT_CHG_SSFINISHM	4
#define RT5081_SHIFT_CHG_WDTMRM		3
#define RT5081_SHIFT_CHGDET_DONEM	2
#define RT5081_SHIFT_CHG_ICHGMEASM	1
#define RT5081_SHIFT_CHG_AICLMEASM	0

#define RT5081_MASK_CHG_IEOCM		(1 << RT5081_SHIFT_CHG_IEOCM)
#define RT5081_MASK_CHG_TERMM		(1 << RT5081_SHIFT_CHG_TERMM)
#define RT5081_MASK_CHG_RECHGM		(1 << RT5081_SHIFT_CHG_RECHGM)
#define RT5081_MASK_CHG_SSFINISHM	(1 << RT5081_SHIFT_CHG_SSFINISHM)
#define RT5081_MASK_CHG_WDTMRM		(1 << RT5081_SHIFT_CHG_WDTMRM)
#define RT5081_MASK_CHGDET_DONEM	(1 << RT5081_SHIFT_CHGDET_DONEM)
#define RT5081_MASK_CHG_ICHGMEASM	(1 << RT5081_SHIFT_CHG_ICHGMEASM)
#define RT5081_MASK_CHG_AICLMEASM	(1 << RT5081_SHIFT_CHG_AICLMEASM)

/* ========== CHG_MASK6 0xE5 ============ */
#define RT5081_SHIFT_BST_OLPM		7
#define RT5081_SHIFT_BST_MIDOVM		6
#define RT5081_SHIFT_BST_BATUVM		5
#define RT5081_SHIFT_PUMPX_DONEM	1
#define RT5081_SHIFT_ADC_DONEM		0

#define RT5081_MASK_BST_OLPM	(1 << RT5081_SHIFT_BST_OLPM)
#define RT5081_MASK_BST_MIDOVM	(1 << RT5081_SHIFT_BST_MIDOVM)
#define RT5081_MASK_BST_BATUVM	(1 << RT5081_SHIFT_BST_BATUVM)
#define RT5081_MASK_PUMPX_DONEM	(1 << RT5081_SHIFT_PUMPX_DONEM)
#define RT5081_MASK_ADC_DONEM	(1 << RT5081_SHIFT_ADC_DONEM)

#endif /* __LINUX_MFD_RT5081_PMU_CHARGER_H */
