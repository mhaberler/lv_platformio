#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

int main(void)
{
	lv_init();
	hal_setup();
  lv_demo_widgets();
	hal_loop();
}
