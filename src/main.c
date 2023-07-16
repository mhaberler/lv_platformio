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

#ifdef INCLUDE_1
#include INCLUDE_1
#endif
#ifdef INCLUDE_2
#include INCLUDE_2
#endif

int main(void) {
  lv_init();

  hal_setup();

#ifdef INIT_FUNCTION_1
  INIT_FUNCTION_1();
#endif
#ifdef INIT_FUNCTION_2
  INIT_FUNCTION_2();
#endif
  hal_loop();
}
