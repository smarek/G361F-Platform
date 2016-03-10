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
#ifndef _MMP_DISP_H_
#define _MMP_DISP_H_
#define MMP_XALIGN(x) ALIGN(x, 16)
#define MMP_YALIGN(x) ALIGN(x, 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 PIXFMT_UYVY = 0,
 PIXFMT_VYUY,
 PIXFMT_YUYV,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_YUV422P,
 PIXFMT_YVU422P,
 PIXFMT_YUV420P = 0x6,
 PIXFMT_YVU420P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_YUV420SP = 0xA,
 PIXFMT_YVU420SP,
 PIXFMT_RGB565 = 0x100,
 PIXFMT_BGR565,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_RGB1555,
 PIXFMT_BGR1555,
 PIXFMT_RGB888PACK,
 PIXFMT_BGR888PACK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_RGB888UNPACK,
 PIXFMT_BGR888UNPACK,
 PIXFMT_RGBA888,
 PIXFMT_BGRA888,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_RGB666PACK,
 PIXFMT_BGR666PACK,
 PIXFMT_RGB666UNPACK,
 PIXFMT_BGR666UNPACK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIXFMT_PSEUDOCOLOR = 0x200,
};
struct mmp_win {
 unsigned short xsrc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short ysrc;
 unsigned short xdst;
 unsigned short ydst;
 unsigned short xpos;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short ypos;
 unsigned short left_crop;
 unsigned short right_crop;
 unsigned short up_crop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short bottom_crop;
 int pix_fmt;
 unsigned int pitch[3];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmp_addr {
 unsigned int phys[6];
 unsigned int hdr_addr[3];
 unsigned int hdr_size[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmp_gamma {
#define GAMMA_ENABLE (1 << 0)
#define GAMMA_DUMP (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int flag;
#define GAMMA_TABLE_LEN 256
 char table[GAMMA_TABLE_LEN];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmp_colorkey_alpha {
#define FB_DISABLE_COLORKEY_MODE 0x0
#define FB_ENABLE_Y_COLORKEY_MODE 0x1
#define FB_ENABLE_U_COLORKEY_MODE 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_ENABLE_RGB_COLORKEY_MODE 0x3
#define FB_ENABLE_V_COLORKEY_MODE 0x4
#define FB_ENABLE_R_COLORKEY_MODE 0x5
#define FB_ENABLE_G_COLORKEY_MODE 0x6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_ENABLE_B_COLORKEY_MODE 0x7
 unsigned int mode;
#define FB_VID_PATH_ALPHA 0x0
#define FB_GRA_PATH_ALPHA 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_CONFIG_ALPHA 0x2
 unsigned int alphapath;
 unsigned int config;
 unsigned int y_coloralpha;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int u_coloralpha;
 unsigned int v_coloralpha;
};
struct mmp_alpha {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALPHA_PN_GRA_AND_PN_VID (1 << 0)
#define ALPHA_PN_GRA_AND_TV_GRA (1 << 1)
#define ALPHA_PN_GRA_AND_TV_VID (1 << 2)
#define ALPHA_PN_VID_AND_TV_GRA (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALPHA_PN_VID_AND_TV_VID (1 << 4)
#define ALPHA_TV_GRA_AND_TV_VID (1 << 5)
 unsigned int alphapath;
#define ALPHA_PATH_PN_PATH_ALPHA (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALPHA_PATH_TV_PATH_ALPHA (1 << 1)
#define ALPHA_PATH_VID_PATH_ALPHA (1 << 2)
#define ALPHA_PATH_GRA_PATH_ALPHA (1 << 3)
 unsigned int config;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmp_surface {
 struct mmp_win win;
 struct mmp_addr addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WAIT_VSYNC (1 << 0)
#define DECOMPRESS_MODE (1 << 1)
 unsigned int flag;
 int fence_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fd;
};
#define PITCH_ALIGN_FOR_DECOMP(x) ALIGN(x, 256)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
