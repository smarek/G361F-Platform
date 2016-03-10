/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _MMP_IOCTL_H_
#define _MMP_IOCTL_H_
#include <linux/ioctl.h>
#include <video/mmp_disp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_IOC_MAGIC 'm'
#define FB_IOCTL_GAMMA_SET _IO(FB_IOC_MAGIC, 7)
#define FB_IOCTL_FLIP_USR_BUF _IO(FB_IOC_MAGIC, 8)
#define FB_IOCTL_SET_COLORKEYnALPHA _IO(FB_IOC_MAGIC, 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_IOCTL_GET_COLORKEYnALPHA _IO(FB_IOC_MAGIC, 14)
#define FB_IOCTL_ENABLE_DMA _IO(FB_IOC_MAGIC, 15)
#define FB_IOCTL_ENABLE_COMMIT_DMA _IO(FB_IOC_MAGIC, 16)
#define FB_IOCTL_WAIT_VSYNC _IO(FB_IOC_MAGIC, 18)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_IOCTL_GRA_PARTDISP _IO(FB_IOC_MAGIC, 24)
#define FB_IOCTL_FLIP_VSYNC _IO(FB_IOC_MAGIC, 26)
#define FB_IOCTL_FLIP_COMMIT _IO(FB_IOC_MAGIC, 27)
#define FB_IOCTL_QUERY_GLOBAL_INFO _IO(FB_IOC_MAGIC, 29)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_IOCTL_VSMOOTH_EN _IO(FB_IOC_MAGIC, 30)
#define FB_IOCTL_SET_PATHALPHA _IO(FB_IOC_MAGIC, 28)
#define LEGACY_FB_VMODE 1
#ifdef LEGACY_FB_VMODE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_RGB565 0x100
#define FB_VMODE_BGR565 0x101
#define FB_VMODE_RGB1555 0x102
#define FB_VMODE_BGR1555 0x103
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_RGB888PACK 0x104
#define FB_VMODE_BGR888PACK 0x105
#define FB_VMODE_RGB888UNPACK 0x106
#define FB_VMODE_BGR888UNPACK 0x107
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_RGBA888 0x108
#define FB_VMODE_BGRA888 0x109
#define FB_VMODE_RGB888A 0x10A
#define FB_VMODE_BGR888A 0x10B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_YUV422PACKED 0x0
#define FB_VMODE_YUV422PACKED_SWAPUV 0x1
#define FB_VMODE_YUV422PACKED_SWAPYUorV 0x2
#define FB_VMODE_YUV422PLANAR 0x3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_YUV422PLANAR_SWAPUV 0x4
#define FB_VMODE_YUV422PLANAR_SWAPYUorV 0x5
#define FB_VMODE_YUV420PLANAR 0x6
#define FB_VMODE_YUV420PLANAR_SWAPUV 0x7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_VMODE_YUV420PLANAR_SWAPYUorV 0x8
#define FB_VMODE_YUV422PACKED_IRE_90_270 0x9
#define FB_VMODE_YUV420SEMIPLANAR 0xA
#define FB_VMODE_YUV420SEMIPLANAR_SWAPUV 0xB
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define FB_FB0_AND_FB1 0x0
#define FB_FB0_AND_FB2 0x1
#define FB_FB0_AND_FB3 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_FB1_AND_FB2 0x3
#define FB_FB1_AND_FB3 0x4
#define FB_FB2_AND_FB3 0x5
#define FB_FB0_ALPHA 0x0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_FB1_ALPHA 0x1
#define FB_FB2_ALPHA 0x2
#define FB_FB3_ALPHA 0x3
struct _sViewPortInfo {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short srcWidth;
 unsigned short srcHeight;
 unsigned short zoomXSize;
 unsigned short zoomYSize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short yPitch;
 unsigned short uPitch;
 unsigned short vPitch;
 unsigned int rotation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int yuv_format;
};
struct _sViewPortOffset {
 unsigned short xOffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short yOffset;
};
struct _sVideoBufferAddr {
 unsigned char frameID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *startAddr[3];
 unsigned char *inputData;
 unsigned int length;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct _sOvlySurface {
 int videoMode;
 struct _sViewPortInfo viewPortInfo;
 struct _sViewPortOffset viewPortOffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct _sVideoBufferAddr videoBufferAddr;
};
#endif
