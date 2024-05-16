/**
 * @file GC9A01.h
 *
 **/

#ifndef GC9A01_H
#define GC9A01_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************
 *      INCLUDES
 *********************/
#ifndef LV_DRV_NO_CONF
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_drv_conf.h"
#else
#include "../../lv_drv_conf.h"
#endif
#endif

#if USE_GC9A01

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#if LV_COLOR_DEPTH != 16
#error "GC9A01 currently supports 'LV_COLOR_DEPTH == 16'. Set it in lv_conf.h"
#endif

#if LV_COLOR_16_SWAP != 1
#error "GC9A01 SPI requires LV_COLOR_16_SWAP == 1. Set it in lv_conf.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

int GC9A01_init(const uint8_t display_id);
void GC9A01_flush_displays(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p);
void GC9A01_fill(const uint8_t display_id, int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t color);
void GC9A01_map(const uint8_t display_id, int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t *color_p);
void GC9A01_setRotation(const uint8_t display_id, uint8_t m);
void GC9A01_fillRect(const uint8_t display_id, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void GC9A01_fillScreen(const uint8_t display_id, uint16_t color);
uint16_t GC9A01_Color565(uint8_t r, uint8_t g, uint8_t b);
void GC9A01_invertDisplay(const uint8_t display_id, bool i);
void GC9A01_drawPixel(const uint8_t display_id, int16_t x, int16_t y, uint16_t color);
void GC9A01_drawFastHLine(const uint8_t display_id, int16_t x, int16_t y, int16_t w, uint16_t color);
void GC9A01_drawFastVLine(const uint8_t display_id, int16_t x, int16_t y, int16_t w, uint16_t color);

/**********************
 *      MACROS
 **********************/

#endif /* USE_GC9A01 */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* GC9A01_H */
