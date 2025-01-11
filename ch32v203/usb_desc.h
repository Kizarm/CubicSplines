/********************************** (C) COPYRIGHT *******************************
 * File Name          : usb_desc.h
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2022/08/20
 * Description        : header file of usb_desc.c
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/

#ifndef USER_USB_DESC_H_
#define USER_USB_DESC_H_

#include <stdint.h>

/******************************************************************************/
/* global define */
/* file version */
#define DEF_FILE_VERSION             0x01
/* usb device info define  */
#define DEF_USB_VID                  0x1A86
#define DEF_USB_PID                  0xFE0C
/* USB device descriptor, device serial number(bcdDevice) */
#define DEF_IC_PRG_VER               DEF_FILE_VERSION

/******************************************************************************/
/* usb device endpoint size define */
#define DEF_USBD_UEP0_SIZE           64     /* usb hs/fs device end-point 0 size */
/* FS */
#define DEF_USBD_FS_PACK_SIZE        64     /* usb fs device max bluk/int pack size */
#define DEF_USBD_FS_ISO_PACK_SIZE    1023   /* usb fs device max iso pack size */
/* LS */
#define DEF_USBD_LS_UEP0_SIZE        8      /* usb ls device end-point 0 size */
#define DEF_USBD_LS_PACK_SIZE        64     /* usb ls device max int pack size */

/* Pack size */
#define DEF_USBD_ENDP1_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP2_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP3_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP4_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP5_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP6_SIZE          DEF_USBD_FS_PACK_SIZE
#define DEF_USBD_ENDP7_SIZE          DEF_USBD_FS_PACK_SIZE

/******************************************************************************/
/* usb device Descriptor length, length of usb descriptors, if one descriptor not
 * exists , set the length to 0  */
#define DEF_USBD_DEVICE_DESC_LEN     ((uint8_t)MyDevDescr[0])
#define DEF_USBD_CONFIG_DESC_LEN     ((uint16_t)MyCfgDescr[2] + (uint16_t)(MyCfgDescr[3] << 8))
#define DEF_USBD_REPORT_DESC_LEN     0

#define DEF_MAX_STRINGS (4)
/******************************************************************************/
/* external variables */
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
  extern const uint8_t   MyDevDescr[ ];
  extern const uint8_t   MyCfgDescr[ ];
  extern const uint8_t * StringDescArray [DEF_MAX_STRINGS];
#ifdef __cplusplus
};
#endif // __cplusplus
#endif /* USER_USB_DESC_H_ */
