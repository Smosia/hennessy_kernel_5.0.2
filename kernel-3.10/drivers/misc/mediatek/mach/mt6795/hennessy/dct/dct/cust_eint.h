/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6795. Copyright MediaTek Inc. (C) 2013.
 * Mon Oct 17 23:37:25 2016
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINTF_TRIGGER_RISING     			1    //High Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_FALLING    			2    //Low Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_HIGH      				4    //High Polarity and Level Sensitive
#define CUST_EINTF_TRIGGER_LOW       				8    //Low Polarity and Level Sensitive
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_MSDC1_INS_NUM              1
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      1
#define CUST_EINT_MSDC1_INS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_DT_EXT_MD_WDT_NUM              2
#define CUST_EINT_DT_EXT_MD_WDT_DEBOUNCE_CN      16
#define CUST_EINT_DT_EXT_MD_WDT_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_DT_EXT_MD_WDT_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_IRQ_NFC_NUM              3
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN      0
#define CUST_EINT_IRQ_NFC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_WIFI_NUM              4
#define CUST_EINT_WIFI_DEBOUNCE_CN      0
#define CUST_EINT_WIFI_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_WIFI_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_DT_EXT_MD_EXP_NUM              5
#define CUST_EINT_DT_EXT_MD_EXP_DEBOUNCE_CN      0
#define CUST_EINT_DT_EXT_MD_EXP_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_DT_EXT_MD_EXP_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_TOUCH_PANEL_NUM              6
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_EXT_BUCK_OC_NUM              7
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_CN      0
#define CUST_EINT_EXT_BUCK_OC_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ALS_NUM              8
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MHALL_NUM              10
#define CUST_EINT_MHALL_DEBOUNCE_CN      32
#define CUST_EINT_MHALL_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_MHALL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_MSE_NUM              12
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ACCDET_NUM              13
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_GYRO_NUM              105
#define CUST_EINT_GYRO_DEBOUNCE_CN      0
#define CUST_EINT_GYRO_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_GYRO_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_DSI_TE_1_NUM              107
#define CUST_EINT_DSI_TE_1_DEBOUNCE_CN      0
#define CUST_EINT_DSI_TE_1_TYPE							CUST_EINTF_TRIGGER_RISING
#define CUST_EINT_DSI_TE_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MHL_NUM              134
#define CUST_EINT_MHL_DEBOUNCE_CN      0
#define CUST_EINT_MHL_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MHL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H


