/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif


#ifndef LV_ATTRIBUTE_IMG_BW_TEST
#define LV_ATTRIBUTE_IMG_BW_TEST
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BW_TEST uint8_t bw_test_map[] = {
  #if CONFIG_NICE_VIEW_WIDGET_INVERTED
          0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
          0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
  #else
          0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
          0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
  #endif

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x3f, 0xc0, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x80, 0xe0, 0x61, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x30, 0x61, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x18, 0x21, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x21, 0xa0, 0x00, 0x00, 0x0f, 0xc0, 0x07, 0x00, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x10, 0x63, 0x20, 0x3f, 0x80, 0xff, 0xc0, 0x0f, 0x00, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x63, 0x20, 0x61, 0xef, 0xc0, 0x60, 0x08, 0x00, 0x00, 
  0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x20, 0x60, 0x7c, 0x01, 0xe0, 0x38, 0x00, 0x00, 
  0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x60, 0x60, 0x00, 0x07, 0x80, 0x70, 0x00, 0x00, 
  0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30, 0x00, 0x0c, 0x00, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30, 0x00, 0x38, 0x00, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x01, 0x80, 0x18, 0x1f, 0xf8, 0x03, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x3f, 0x80, 0x7e, 0x07, 0x00, 0x0e, 0x78, 0x1e, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1e, 0x00, 0x01, 0xfc, 0x00, 0x07, 0x84, 0x00, 0x07, 0xe0, 0x03, 0x8e, 0x00, 0x18, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x03, 0x80, 0x01, 0xfc, 0x00, 0x38, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x80, 0x1c, 0x00, 0x00, 0x00, 0x70, 0x00, 0x07, 0x80, 0x00, 0x60, 0x00, 0x30, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xc0, 0x38, 0x00, 0x00, 0x00, 0x38, 0x00, 0x0e, 0x00, 0x00, 0x30, 0x00, 0x60, 0x00, 
  0x00, 0x3f, 0x00, 0x00, 0x70, 0xe0, 0x00, 0x00, 0x00, 0x18, 0x00, 0x0c, 0x00, 0x00, 0x18, 0x07, 0xc0, 0x00, 
  0x00, 0x1f, 0xf0, 0x00, 0x3b, 0xc0, 0x01, 0xf0, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x03, 0xf0, 0x00, 0x0c, 0x00, 0x30, 0x00, 0xe3, 0x0c, 0x3e, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x03, 0x80, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0xe3, 0x04, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0xff, 0x60, 0x80, 0xe3, 0x07, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x70, 0x0f, 0xc0, 0x00, 0x03, 0xc0, 0xe3, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x38, 0x18, 0xc0, 0x00, 0x03, 0xc0, 0xc2, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0e, 0x70, 0xc0, 0x00, 0x03, 0xc0, 0x06, 0x03, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x07, 0xe0, 0xc0, 0x00, 0x03, 0xc0, 0x0c, 0x03, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x03, 0x81, 0x80, 0x00, 0x03, 0xc0, 0x00, 0x01, 0x00, 0x7c, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x07, 0x01, 0x80, 0x00, 0x03, 0x98, 0x00, 0x01, 0x0f, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0c, 0x01, 0xe0, 0x00, 0x03, 0x18, 0x00, 0x03, 0xfd, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x07, 0x00, 0x60, 0x00, 0x03, 0x18, 0x00, 0x01, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x18, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x60, 0x00, 0x03, 0x18, 0x0c, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x3e, 0xe0, 0x60, 0x80, 0x03, 0x00, 0x0e, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0xf0, 0x39, 0xc0, 0x80, 0x03, 0x80, 0x03, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x1f, 0x80, 0x80, 0x00, 0xc0, 0x61, 0x03, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0xf8, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x71, 0x03, 0xcf, 0x00, 0x00, 
  0x00, 0x0f, 0xc0, 0x00, 0x06, 0xe0, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0xc0, 0x71, 0x86, 0x7f, 0xf0, 0x00, 
  0x00, 0x3e, 0x00, 0x00, 0x0c, 0x70, 0x00, 0x00, 0x00, 0x03, 0x1f, 0xf0, 0x00, 0x71, 0x84, 0x00, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x30, 0x00, 0x71, 0x8c, 0x00, 0x1c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x0f, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0xf0, 0x00, 0x00, 0xf8, 0x30, 0x0c, 0x00, 0x00, 0x18, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x3c, 0x00, 0x03, 0xc0, 0x30, 0x0c, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x3f, 0x00, 0x18, 0x07, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0xc0, 0xf8, 0x00, 0x00, 0x03, 0xf7, 0xf0, 0x00, 0x08, 0x03, 0x80, 0x01, 0xcf, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x0c, 0x01, 0xe0, 0x03, 0x83, 0xf8, 0x00, 0x00, 
  0x00, 0x1d, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x7c, 0x1f, 0x00, 0x0e, 0x00, 0x00, 
  0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x84, 0x00, 0xdf, 0xfc, 0x00, 0x07, 0x00, 0x00, 
  0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x84, 0x01, 0x80, 0x0f, 0x00, 0x03, 0x80, 0x00, 
  0x00, 0x1f, 0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc0, 0x84, 0x03, 0x80, 0x03, 0x80, 0x01, 0x80, 0x00, 
  0x00, 0x3c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0xc0, 0x8c, 0x07, 0x00, 0x00, 0xc0, 0x00, 0xc0, 0x00, 
  0x00, 0x3f, 0x60, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0xc0, 0x8c, 0x06, 0x01, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 
  0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x01, 0x80, 0x98, 0x04, 0x3f, 0xff, 0x80, 0x00, 0x60, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x01, 0x81, 0x80, 0x06, 0x70, 0x06, 0x00, 0x00, 0x38, 0x00, 
  0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x03, 0x80, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x1c, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t bw_test = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = bw_test_map,
};
