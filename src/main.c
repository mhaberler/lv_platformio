/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "app_hal.h"
#include "lvgl.h"

#ifdef INCLUDE_UI_H
// #include "../../flowsensor/src/ui/ui.h"
#include "ui.h"
#endif

#include "demos/lv_demos.h"

// #ifdef INIT_FUNCTION
// void INIT_FUNCTION(void);
// #endif

int main(void) {
  lv_init();

  hal_setup();

#ifdef INIT_FUNCTION
  INIT_FUNCTION();
#endif

#if LV_USE_DEMO_WIDGETS
  lv_demo_widgets();
#endif

#if LV_USE_DEMO_KEYPAD_AND_ENCODER
  lv_demo_keypad_encoder();
#endif

  hal_loop();
}
