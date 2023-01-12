#include "lvgl.h"
#include "app_hal.h"


int main(void)
{
	lv_init();
	hal_setup();
	hal_loop();
}
