#include "lvgl.h"
#include "app_hal.h"

#include "../../ui_edited/ui.h"

int main(void)
{
	lv_init();
	hal_setup();
  ui_init();
	hal_loop();
}
