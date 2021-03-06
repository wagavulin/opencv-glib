#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

/**
 * GCVColorConversionCode:
 * @GCV_COLOR_CONVERSION_CODE_BGR2BGRA: Converts from BGR to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_RGB2RGBA: Converts from RGB to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2BGR: Converts from BGRA to BGR.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2RGB: Converts from RGBA to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2RGBA: Converts from BGR to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_RGB2BGRA: Converts from RGB to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2BGR: Converts from RGBA to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2RGB: Converts from BGRA to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2RGB: Converts from BGR to RGB.
 * @GCV_COLOR_CONVERSION_CODE_RGB2BGR: Converts from RGB to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2RGBA: Converts from BGRA to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2BGRA: Converts from RGBA to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_BGR2GRAY: Converts from BGR to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_RGB2GRAY: Converts from RGB to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2BGR: Converts from GRAY to BGR.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2RGB: Converts from GRAY to RGB.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2BGRA: Converts from GRAY to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2RGBA: Converts from GRAY to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2GRAY: Converts from BGRA to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2GRAY: Converts from RGBA to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BGR2BGR565: Converts from BGR to BGR565.
 * @GCV_COLOR_CONVERSION_CODE_RGB2BGR565: Converts from RGB to BGR565.
 * @GCV_COLOR_CONVERSION_CODE_BGR5652BGR: Converts from BGR565 to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BGR5652RGB: Converts from BGR565 to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2BGR565: Converts from BGRA to BGR565.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2BGR565: Converts from RGBA to BGR565.
 * @GCV_COLOR_CONVERSION_CODE_BGR5652BGRA: Converts from BGR565 to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_BGR5652RGBA: Converts from BGR565 to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2BGR565: Converts from GRAY to BGR565.
 * @GCV_COLOR_CONVERSION_CODE_BGR5652GRAY: Converts from BGR565 to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BGR2BGR555: Converts from BGR to BGR555.
 * @GCV_COLOR_CONVERSION_CODE_RGB2BGR555: Converts from RGB to BGR555.
 * @GCV_COLOR_CONVERSION_CODE_BGR5552BGR: Converts from BGR555 to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BGR5552RGB: Converts from BGR555 to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2BGR555: Converts from BGRA to BGR555.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2BGR555: Converts from RGBA to BGR555.
 * @GCV_COLOR_CONVERSION_CODE_BGR5552BGRA: Converts from BGR555 to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_BGR5552RGBA: Converts from BGR555 to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_GRAY2BGR555: Converts from GRAY to BGR555.
 * @GCV_COLOR_CONVERSION_CODE_BGR5552GRAY: Converts from BGR555 to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BGR2XYZ: Converts from BGR to XYZ.
 * @GCV_COLOR_CONVERSION_CODE_RGB2XYZ: Converts from RGB to XYZ.
 * @GCV_COLOR_CONVERSION_CODE_XYZ2BGR: Converts from XYZ to BGR.
 * @GCV_COLOR_CONVERSION_CODE_XYZ2RGB: Converts from XYZ to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2YCrCb: Converts from BGR to YCrCb.
 * @GCV_COLOR_CONVERSION_CODE_RGB2YCrCb: Converts from RGB to YCrCb.
 * @GCV_COLOR_CONVERSION_CODE_YCrCb2BGR: Converts from YCrCb to BGR.
 * @GCV_COLOR_CONVERSION_CODE_YCrCb2RGB: Converts from YCrCb to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2HSV: Converts from BGR to HSV.
 * @GCV_COLOR_CONVERSION_CODE_RGB2HSV: Converts from RGB to HSV.
 * @GCV_COLOR_CONVERSION_CODE_BGR2Lab: Converts from BGR to Lab.
 * @GCV_COLOR_CONVERSION_CODE_RGB2Lab: Converts from RGB to Lab.
 * @GCV_COLOR_CONVERSION_CODE_BGR2Luv: Converts from BGR to Luv.
 * @GCV_COLOR_CONVERSION_CODE_RGB2Luv: Converts from RGB to Luv.
 * @GCV_COLOR_CONVERSION_CODE_BGR2HLS: Converts from BGR to HLS.
 * @GCV_COLOR_CONVERSION_CODE_RGB2HLS: Converts from RGB to HLS.
 * @GCV_COLOR_CONVERSION_CODE_HSV2BGR: Converts from HSV to BGR.
 * @GCV_COLOR_CONVERSION_CODE_HSV2RGB: Converts from HSV to RGB.
 * @GCV_COLOR_CONVERSION_CODE_Lab2BGR: Converts from Lab to BGR.
 * @GCV_COLOR_CONVERSION_CODE_Lab2RGB: Converts from Lab to RGB.
 * @GCV_COLOR_CONVERSION_CODE_Luv2BGR: Converts from Luv to BGR.
 * @GCV_COLOR_CONVERSION_CODE_Luv2RGB: Converts from Luv to RGB.
 * @GCV_COLOR_CONVERSION_CODE_HLS2BGR: Converts from HLS to BGR.
 * @GCV_COLOR_CONVERSION_CODE_HLS2RGB: Converts from HLS to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2HSV_FULL: Converts from BGR to HSV_FULL.
 * @GCV_COLOR_CONVERSION_CODE_RGB2HSV_FULL: Converts from RGB to HSV_FULL.
 * @GCV_COLOR_CONVERSION_CODE_BGR2HLS_FULL: Converts from BGR to HLS_FULL.
 * @GCV_COLOR_CONVERSION_CODE_RGB2HLS_FULL: Converts from RGB to HLS_FULL.
 * @GCV_COLOR_CONVERSION_CODE_HSV2BGR_FULL: Converts from HSV to BGR_FULL.
 * @GCV_COLOR_CONVERSION_CODE_HSV2RGB_FULL: Converts from HSV to RGB_FULL.
 * @GCV_COLOR_CONVERSION_CODE_HLS2BGR_FULL: Converts from HLS to BGR_FULL.
 * @GCV_COLOR_CONVERSION_CODE_HLS2RGB_FULL: Converts from HLS to RGB_FULL.
 * @GCV_COLOR_CONVERSION_CODE_LBGR2Lab: Converts from LBGR to Lab.
 * @GCV_COLOR_CONVERSION_CODE_LRGB2Lab: Converts from LRGB to Lab.
 * @GCV_COLOR_CONVERSION_CODE_LBGR2Luv: Converts from LBGR to Luv.
 * @GCV_COLOR_CONVERSION_CODE_LRGB2Luv: Converts from LRGB to Luv.
 * @GCV_COLOR_CONVERSION_CODE_Lab2LBGR: Converts from Lab to LBGR.
 * @GCV_COLOR_CONVERSION_CODE_Lab2LRGB: Converts from Lab to LRGB.
 * @GCV_COLOR_CONVERSION_CODE_Luv2LBGR: Converts from Luv to LBGR.
 * @GCV_COLOR_CONVERSION_CODE_Luv2LRGB: Converts from Luv to LRGB.
 * @GCV_COLOR_CONVERSION_CODE_BGR2YUV: Converts from BGR to YUV.
 * @GCV_COLOR_CONVERSION_CODE_RGB2YUV: Converts from RGB to YUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR: Converts from YUV to BGR.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB: Converts from YUV to RGB.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_NV12: Converts from YUV to RGB_NV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_NV12: Converts from YUV to BGR_NV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_NV21: Converts from YUV to RGB_NV21.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_NV21: Converts from YUV to BGR_NV21.
 * @GCV_COLOR_CONVERSION_CODE_YUV420sp2RGB: Converts from YUV420sp to RGB.
 * @GCV_COLOR_CONVERSION_CODE_YUV420sp2BGR: Converts from YUV420sp to BGR.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_NV12: Converts from YUV to RGBA_NV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_NV12: Converts from YUV to BGRA_NV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_NV21: Converts from YUV to RGBA_NV21.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_NV21: Converts from YUV to BGRA_NV21.
 * @GCV_COLOR_CONVERSION_CODE_YUV420sp2RGBA: Converts from YUV420sp to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_YUV420sp2BGRA: Converts from YUV420sp to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_YV12: Converts from YUV to RGB_YV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_YV12: Converts from YUV to BGR_YV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_IYUV: Converts from YUV to RGB_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_IYUV: Converts from YUV to BGR_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_I420: Converts from YUV to RGB_I420.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_I420: Converts from YUV to BGR_I420.
 * @GCV_COLOR_CONVERSION_CODE_YUV420p2RGB: Converts from YUV420p to RGB.
 * @GCV_COLOR_CONVERSION_CODE_YUV420p2BGR: Converts from YUV420p to BGR.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YV12: Converts from YUV to RGBA_YV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YV12: Converts from YUV to BGRA_YV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_IYUV: Converts from YUV to RGBA_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_IYUV: Converts from YUV to BGRA_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_I420: Converts from YUV RGBA_I420.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_I420: Converts from YUV BGRA_I420.
 * @GCV_COLOR_CONVERSION_CODE_YUV420p2RGBA: Converts from YUV420p to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_YUV420p2BGRA: Converts from YUV420p to BGRA.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420: Converts from YUV to GRAY_420.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_NV21: Converts from YUV to GRAY_NV21.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_NV12: Converts from YUV to GRAY_NV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YV12: Converts from YUV to GRAY_YV12.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_IYUV: Converts from YUV to GRAY_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_I420: Converts from YUV to GRAY_I420.
 * @GCV_COLOR_CONVERSION_CODE_YUV420sp2GRAY: Converts from YUV420sp to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_YUV420p2GRAY: Converts from YUV420p to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYVY: Converts from YUV to RGB_UYVY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYVY: Converts from YUV to BGR_UYVY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_Y422: Converts from YUV to RGB_Y42.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_Y422: Converts from YUV to BGR_Y42.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYNV: Converts from YUV to RGB_UYNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYNV: Converts from YUV to BGR_UYNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYVY: Converts from YUV to RGBA_UYVY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYVY: Converts from YUV to BGRA_UYVY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_Y422: Converts from YUV to RGBA_Y42.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_Y422: Converts from YUV to BGRA_Y42.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYNV: Converts from YUV to RGBA_UYNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYNV: Converts from YUV to BGRA_UYNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUY2: Converts from YUV to RGB_YUY2.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUY2: Converts from YUV to BGR_YUY2.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_YVYU: Converts from YUV to RGB_YVYU.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_YVYU: Converts from YUV to BGR_YVYU.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUYV: Converts from YUV to RGB_YUYV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUYV: Converts from YUV to BGR_YUYV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUNV: Converts from YUV to RGB_YUNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUNV: Converts from YUV to BGR_YUNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUY2: Converts from YUV to RGBA_YUY2.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUY2: Converts from YUV to BGRA_YUY2.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YVYU: Converts from YUV to RGBA_YVYU.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YVYU: Converts from YUV to BGRA_YVYU.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUYV: Converts from YUV to RGBA_YUYV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUYV: Converts from YUV to BGRA_YUYV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUNV: Converts from YUV to RGBA_YUNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUNV: Converts from YUV to BGRA_YUNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYVY: Converts from YUV to GRAY_UYVY.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUY2: Converts from YUV to GRAY_YUY2.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_Y422: Converts from YUV to GRAY_Y42.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYNV: Converts from YUV to GRAY_UYNV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YVYU: Converts from YUV to GRAY_YVYU.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUYV: Converts from YUV to GRAY_YUYV.
 * @GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUNV: Converts from YUV to GRAY_YUNV.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2mRGBA: Converts from RGBA to mRGBA.
 * @GCV_COLOR_CONVERSION_CODE_mRGBA2RGBA: Converts from mRGBA to RGBA.
 * @GCV_COLOR_CONVERSION_CODE_RGB2YUV_I420: Converts from RGB to YUV_I42.
 * @GCV_COLOR_CONVERSION_CODE_BGR2YUV_I420: Converts from BGR to YUV_I42.
 * @GCV_COLOR_CONVERSION_CODE_RGB2YUV_IYUV: Converts from RGB to YUV_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_BGR2YUV_IYUV: Converts from BGR to YUV_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2YUV_I420: Converts from RGBA to YUV_I40.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2YUV_I420: Converts from BGRA to YUV_I40.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2YUV_IYUV: Converts from RGBA to YUV_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2YUV_IYUV: Converts from BGRA to YUV_IYUV.
 * @GCV_COLOR_CONVERSION_CODE_RGB2YUV_YV12: Converts from RGB to YUV_YV12.
 * @GCV_COLOR_CONVERSION_CODE_BGR2YUV_YV12: Converts from BGR to YUV_YV12.
 * @GCV_COLOR_CONVERSION_CODE_RGBA2YUV_YV12: Converts from RGBA to YUV_YV12.
 * @GCV_COLOR_CONVERSION_CODE_BGRA2YUV_YV12: Converts from BGRA to YUV_YV12.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2BGR: Converts from BayerBG to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2BGR: Converts from BayerGB to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2BGR: Converts from BayerRG to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2BGR: Converts from BayerGR to BGR.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2RGB: Converts from BayerBG to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2RGB: Converts from BayerGB to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2RGB: Converts from BayerRG to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2RGB: Converts from BayerGR to RGB.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2GRAY: Converts from BayerBG to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2GRAY: Converts from BayerGB to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2GRAY: Converts from BayerRG to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2GRAY: Converts from BayerGR to GRAY.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_VNG: Converts from BayerBG to BGR_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_VNG: Converts from BayerGB to BGR_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_VNG: Converts from BayerRG to BGR_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_VNG: Converts from BayerGR to BGR_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2RGB_VNG: Converts from BayerBG to RGB_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2RGB_VNG: Converts from BayerGB to RGB_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2RGB_VNG: Converts from BayerRG to RGB_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2RGB_VNG: Converts from BayerGR to RGB_VNG.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_EA: Converts from BayerBG to BGR_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_EA: Converts from BayerGB to BGR_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_EA: Converts from BayerRG to BGR_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_EA: Converts from BayerGR to BGR_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerBG2RGB_EA: Converts from BayerBG to RGB_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerGB2RGB_EA: Converts from BayerGB to RGB_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerRG2RGB_EA: Converts from BayerRG to RGB_EA.
 * @GCV_COLOR_CONVERSION_CODE_BayerGR2RGB_EA: Converts from BayerGR to RGB_EA.
 *
 * They are for gcv_image_convert_color().
 *
 * They are corresponding to `cv::ColorConversionCodes` values.
 *
 * See also [OpenCV documents](https://docs.opencv.org/).
 *
 * Since: 1.0.0
 */
typedef enum {
  GCV_COLOR_CONVERSION_CODE_BGR2BGRA     = 0,
  GCV_COLOR_CONVERSION_CODE_RGB2RGBA     = GCV_COLOR_CONVERSION_CODE_BGR2BGRA,

  GCV_COLOR_CONVERSION_CODE_BGRA2BGR     = 1,
  GCV_COLOR_CONVERSION_CODE_RGBA2RGB     = GCV_COLOR_CONVERSION_CODE_BGRA2BGR,

  GCV_COLOR_CONVERSION_CODE_BGR2RGBA     = 2,
  GCV_COLOR_CONVERSION_CODE_RGB2BGRA     = GCV_COLOR_CONVERSION_CODE_BGR2RGBA,

  GCV_COLOR_CONVERSION_CODE_RGBA2BGR     = 3,
  GCV_COLOR_CONVERSION_CODE_BGRA2RGB     = GCV_COLOR_CONVERSION_CODE_RGBA2BGR,

  GCV_COLOR_CONVERSION_CODE_BGR2RGB      = 4,
  GCV_COLOR_CONVERSION_CODE_RGB2BGR      = GCV_COLOR_CONVERSION_CODE_BGR2RGB,

  GCV_COLOR_CONVERSION_CODE_BGRA2RGBA    = 5,
  GCV_COLOR_CONVERSION_CODE_RGBA2BGRA    = GCV_COLOR_CONVERSION_CODE_BGRA2RGBA,

  GCV_COLOR_CONVERSION_CODE_BGR2GRAY     = 6,
  GCV_COLOR_CONVERSION_CODE_RGB2GRAY     = 7,
  GCV_COLOR_CONVERSION_CODE_GRAY2BGR     = 8,
  GCV_COLOR_CONVERSION_CODE_GRAY2RGB     = GCV_COLOR_CONVERSION_CODE_GRAY2BGR,
  GCV_COLOR_CONVERSION_CODE_GRAY2BGRA    = 9,
  GCV_COLOR_CONVERSION_CODE_GRAY2RGBA    = GCV_COLOR_CONVERSION_CODE_GRAY2BGRA,
  GCV_COLOR_CONVERSION_CODE_BGRA2GRAY    = 10,
  GCV_COLOR_CONVERSION_CODE_RGBA2GRAY    = 11,

  GCV_COLOR_CONVERSION_CODE_BGR2BGR565   = 12,
  GCV_COLOR_CONVERSION_CODE_RGB2BGR565   = 13,
  GCV_COLOR_CONVERSION_CODE_BGR5652BGR   = 14,
  GCV_COLOR_CONVERSION_CODE_BGR5652RGB   = 15,
  GCV_COLOR_CONVERSION_CODE_BGRA2BGR565  = 16,
  GCV_COLOR_CONVERSION_CODE_RGBA2BGR565  = 17,
  GCV_COLOR_CONVERSION_CODE_BGR5652BGRA  = 18,
  GCV_COLOR_CONVERSION_CODE_BGR5652RGBA  = 19,

  GCV_COLOR_CONVERSION_CODE_GRAY2BGR565  = 20,
  GCV_COLOR_CONVERSION_CODE_BGR5652GRAY  = 21,

  GCV_COLOR_CONVERSION_CODE_BGR2BGR555   = 22,
  GCV_COLOR_CONVERSION_CODE_RGB2BGR555   = 23,
  GCV_COLOR_CONVERSION_CODE_BGR5552BGR   = 24,
  GCV_COLOR_CONVERSION_CODE_BGR5552RGB   = 25,
  GCV_COLOR_CONVERSION_CODE_BGRA2BGR555  = 26,
  GCV_COLOR_CONVERSION_CODE_RGBA2BGR555  = 27,
  GCV_COLOR_CONVERSION_CODE_BGR5552BGRA  = 28,
  GCV_COLOR_CONVERSION_CODE_BGR5552RGBA  = 29,

  GCV_COLOR_CONVERSION_CODE_GRAY2BGR555  = 30,
  GCV_COLOR_CONVERSION_CODE_BGR5552GRAY  = 31,

  GCV_COLOR_CONVERSION_CODE_BGR2XYZ      = 32,
  GCV_COLOR_CONVERSION_CODE_RGB2XYZ      = 33,
  GCV_COLOR_CONVERSION_CODE_XYZ2BGR      = 34,
  GCV_COLOR_CONVERSION_CODE_XYZ2RGB      = 35,

  GCV_COLOR_CONVERSION_CODE_BGR2YCrCb    = 36,
  GCV_COLOR_CONVERSION_CODE_RGB2YCrCb    = 37,
  GCV_COLOR_CONVERSION_CODE_YCrCb2BGR    = 38,
  GCV_COLOR_CONVERSION_CODE_YCrCb2RGB    = 39,

  GCV_COLOR_CONVERSION_CODE_BGR2HSV      = 40,
  GCV_COLOR_CONVERSION_CODE_RGB2HSV      = 41,

  GCV_COLOR_CONVERSION_CODE_BGR2Lab      = 44,
  GCV_COLOR_CONVERSION_CODE_RGB2Lab      = 45,

  GCV_COLOR_CONVERSION_CODE_BGR2Luv      = 50,
  GCV_COLOR_CONVERSION_CODE_RGB2Luv      = 51,
  GCV_COLOR_CONVERSION_CODE_BGR2HLS      = 52,
  GCV_COLOR_CONVERSION_CODE_RGB2HLS      = 53,

  GCV_COLOR_CONVERSION_CODE_HSV2BGR      = 54,
  GCV_COLOR_CONVERSION_CODE_HSV2RGB      = 55,

  GCV_COLOR_CONVERSION_CODE_Lab2BGR      = 56,
  GCV_COLOR_CONVERSION_CODE_Lab2RGB      = 57,
  GCV_COLOR_CONVERSION_CODE_Luv2BGR      = 58,
  GCV_COLOR_CONVERSION_CODE_Luv2RGB      = 59,
  GCV_COLOR_CONVERSION_CODE_HLS2BGR      = 60,
  GCV_COLOR_CONVERSION_CODE_HLS2RGB      = 61,

  GCV_COLOR_CONVERSION_CODE_BGR2HSV_FULL = 66,
  GCV_COLOR_CONVERSION_CODE_RGB2HSV_FULL = 67,
  GCV_COLOR_CONVERSION_CODE_BGR2HLS_FULL = 68,
  GCV_COLOR_CONVERSION_CODE_RGB2HLS_FULL = 69,

  GCV_COLOR_CONVERSION_CODE_HSV2BGR_FULL = 70,
  GCV_COLOR_CONVERSION_CODE_HSV2RGB_FULL = 71,
  GCV_COLOR_CONVERSION_CODE_HLS2BGR_FULL = 72,
  GCV_COLOR_CONVERSION_CODE_HLS2RGB_FULL = 73,

  GCV_COLOR_CONVERSION_CODE_LBGR2Lab     = 74,
  GCV_COLOR_CONVERSION_CODE_LRGB2Lab     = 75,
  GCV_COLOR_CONVERSION_CODE_LBGR2Luv     = 76,
  GCV_COLOR_CONVERSION_CODE_LRGB2Luv     = 77,

  GCV_COLOR_CONVERSION_CODE_Lab2LBGR     = 78,
  GCV_COLOR_CONVERSION_CODE_Lab2LRGB     = 79,
  GCV_COLOR_CONVERSION_CODE_Luv2LBGR     = 80,
  GCV_COLOR_CONVERSION_CODE_Luv2LRGB     = 81,

  GCV_COLOR_CONVERSION_CODE_BGR2YUV      = 82,
  GCV_COLOR_CONVERSION_CODE_RGB2YUV      = 83,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR      = 84,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB      = 85,

  GCV_COLOR_CONVERSION_CODE_YUV2RGB_NV12  = 90,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_NV12  = 91,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_NV21  = 92,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_NV21  = 93,
  GCV_COLOR_CONVERSION_CODE_YUV420sp2RGB  = GCV_COLOR_CONVERSION_CODE_YUV2RGB_NV21,
  GCV_COLOR_CONVERSION_CODE_YUV420sp2BGR  = GCV_COLOR_CONVERSION_CODE_YUV2BGR_NV21,

  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_NV12 = 94,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_NV12 = 95,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_NV21 = 96,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_NV21 = 97,
  GCV_COLOR_CONVERSION_CODE_YUV420sp2RGBA = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_NV21,
  GCV_COLOR_CONVERSION_CODE_YUV420sp2BGRA = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_NV21,

  GCV_COLOR_CONVERSION_CODE_YUV2RGB_YV12  = 98,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_YV12  = 99,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_IYUV  = 100,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_IYUV  = 101,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_I420  = GCV_COLOR_CONVERSION_CODE_YUV2RGB_IYUV,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_I420  = GCV_COLOR_CONVERSION_CODE_YUV2BGR_IYUV,
  GCV_COLOR_CONVERSION_CODE_YUV420p2RGB   = GCV_COLOR_CONVERSION_CODE_YUV2RGB_YV12,
  GCV_COLOR_CONVERSION_CODE_YUV420p2BGR   = GCV_COLOR_CONVERSION_CODE_YUV2BGR_YV12,

  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YV12 = 102,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YV12 = 103,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_IYUV = 104,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_IYUV = 105,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_I420 = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_IYUV,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_I420 = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_IYUV,
  GCV_COLOR_CONVERSION_CODE_YUV420p2RGBA  = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YV12,
  GCV_COLOR_CONVERSION_CODE_YUV420p2BGRA  = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YV12,

  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420  = 106,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_NV21 = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_NV12 = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YV12 = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_IYUV = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_I420 = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV420sp2GRAY = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,
  GCV_COLOR_CONVERSION_CODE_YUV420p2GRAY  = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_420,

  GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYVY = 107,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYVY = 108,
  /* GCV_COLOR_CONVERSION_CODE_YUV2RGB_VYUY = 109, */
  /* GCV_COLOR_CONVERSION_CODE_YUV2BGR_VYUY = 110, */
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_Y422 = GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_Y422 = GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYNV = GCV_COLOR_CONVERSION_CODE_YUV2RGB_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYNV = GCV_COLOR_CONVERSION_CODE_YUV2BGR_UYVY,

  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYVY = 111,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYVY = 112,
  /* GCV_COLOR_CONVERSION_CODE_YUV2RGBA_VYUY = 113, */
  /* GCV_COLOR_CONVERSION_CODE_YUV2BGRA_VYUY = 114, */
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_Y422 = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_Y422 = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYNV = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYNV = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_UYVY,

  GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUY2 = 115,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUY2 = 116,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_YVYU = 117,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_YVYU = 118,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUYV = GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUYV = GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUNV = GCV_COLOR_CONVERSION_CODE_YUV2RGB_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUNV = GCV_COLOR_CONVERSION_CODE_YUV2BGR_YUY2,

  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUY2 = 119,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUY2 = 120,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YVYU = 121,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YVYU = 122,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUYV = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUYV = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUNV = GCV_COLOR_CONVERSION_CODE_YUV2RGBA_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUNV = GCV_COLOR_CONVERSION_CODE_YUV2BGRA_YUY2,

  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYVY = 123,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUY2 = 124,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_Y422 = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYNV = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_UYVY,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YVYU = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUYV = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUY2,
  GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUNV = GCV_COLOR_CONVERSION_CODE_YUV2GRAY_YUY2,

  GCV_COLOR_CONVERSION_CODE_RGBA2mRGBA    = 125,
  GCV_COLOR_CONVERSION_CODE_mRGBA2RGBA    = 126,

  GCV_COLOR_CONVERSION_CODE_RGB2YUV_I420  = 127,
  GCV_COLOR_CONVERSION_CODE_BGR2YUV_I420  = 128,
  GCV_COLOR_CONVERSION_CODE_RGB2YUV_IYUV  = GCV_COLOR_CONVERSION_CODE_RGB2YUV_I420,
  GCV_COLOR_CONVERSION_CODE_BGR2YUV_IYUV  = GCV_COLOR_CONVERSION_CODE_BGR2YUV_I420,

  GCV_COLOR_CONVERSION_CODE_RGBA2YUV_I420 = 129,
  GCV_COLOR_CONVERSION_CODE_BGRA2YUV_I420 = 130,
  GCV_COLOR_CONVERSION_CODE_RGBA2YUV_IYUV = GCV_COLOR_CONVERSION_CODE_RGBA2YUV_I420,
  GCV_COLOR_CONVERSION_CODE_BGRA2YUV_IYUV = GCV_COLOR_CONVERSION_CODE_BGRA2YUV_I420,
  GCV_COLOR_CONVERSION_CODE_RGB2YUV_YV12  = 131,
  GCV_COLOR_CONVERSION_CODE_BGR2YUV_YV12  = 132,
  GCV_COLOR_CONVERSION_CODE_RGBA2YUV_YV12 = 133,
  GCV_COLOR_CONVERSION_CODE_BGRA2YUV_YV12 = 134,

  GCV_COLOR_CONVERSION_CODE_BayerBG2BGR = 46,
  GCV_COLOR_CONVERSION_CODE_BayerGB2BGR = 47,
  GCV_COLOR_CONVERSION_CODE_BayerRG2BGR = 48,
  GCV_COLOR_CONVERSION_CODE_BayerGR2BGR = 49,

  GCV_COLOR_CONVERSION_CODE_BayerBG2RGB = GCV_COLOR_CONVERSION_CODE_BayerRG2BGR,
  GCV_COLOR_CONVERSION_CODE_BayerGB2RGB = GCV_COLOR_CONVERSION_CODE_BayerGR2BGR,
  GCV_COLOR_CONVERSION_CODE_BayerRG2RGB = GCV_COLOR_CONVERSION_CODE_BayerBG2BGR,
  GCV_COLOR_CONVERSION_CODE_BayerGR2RGB = GCV_COLOR_CONVERSION_CODE_BayerGB2BGR,

  GCV_COLOR_CONVERSION_CODE_BayerBG2GRAY = 86,
  GCV_COLOR_CONVERSION_CODE_BayerGB2GRAY = 87,
  GCV_COLOR_CONVERSION_CODE_BayerRG2GRAY = 88,
  GCV_COLOR_CONVERSION_CODE_BayerGR2GRAY = 89,

  GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_VNG = 62,
  GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_VNG = 63,
  GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_VNG = 64,
  GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_VNG = 65,

  GCV_COLOR_CONVERSION_CODE_BayerBG2RGB_VNG = GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_VNG,
  GCV_COLOR_CONVERSION_CODE_BayerGB2RGB_VNG = GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_VNG,
  GCV_COLOR_CONVERSION_CODE_BayerRG2RGB_VNG = GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_VNG,
  GCV_COLOR_CONVERSION_CODE_BayerGR2RGB_VNG = GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_VNG,

  GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_EA  = 135,
  GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_EA  = 136,
  GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_EA  = 137,
  GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_EA  = 138,

  GCV_COLOR_CONVERSION_CODE_BayerBG2RGB_EA  = GCV_COLOR_CONVERSION_CODE_BayerRG2BGR_EA,
  GCV_COLOR_CONVERSION_CODE_BayerGB2RGB_EA  = GCV_COLOR_CONVERSION_CODE_BayerGR2BGR_EA,
  GCV_COLOR_CONVERSION_CODE_BayerRG2RGB_EA  = GCV_COLOR_CONVERSION_CODE_BayerBG2BGR_EA,
  GCV_COLOR_CONVERSION_CODE_BayerGR2RGB_EA  = GCV_COLOR_CONVERSION_CODE_BayerGB2BGR_EA,
} GCVColorConversionCode;


#define GCV_TYPE_COLOR (gcv_color_get_type())
G_DECLARE_DERIVABLE_TYPE(GCVColor,
                         gcv_color,
                         GCV,
                         COLOR,
                         GObject)
struct _GCVColorClass
{
  GObjectClass parent_class;
};

GCVColor *gcv_color_new_brightness(gdouble brightness);
GCVColor *gcv_color_new_color(gdouble pixel0,
                              gdouble pixel1,
                              gdouble pixel2);
GCVColor *gcv_color_new_color_alpha(gdouble pixel0,
                                    gdouble pixel1,
                                    gdouble pixel2,
                                    gdouble alpha);

gdouble gcv_color_get_brightness(GCVColor *color);
void gcv_color_set_brightness(GCVColor *color, gdouble brightness);
gdouble gcv_color_get_pixel0(GCVColor *color);
void gcv_color_set_pixel0(GCVColor *color, gdouble pixel0);
gdouble gcv_color_get_pixel1(GCVColor *color);
void gcv_color_set_pixel1(GCVColor *color, gdouble pixel1);
gdouble gcv_color_get_pixel2(GCVColor *color);
void gcv_color_set_pixel2(GCVColor *color, gdouble pixel2);
gdouble gcv_color_get_alpha(GCVColor *color);
void gcv_color_set_alpha(GCVColor *color, gdouble alpha);

G_END_DECLS
