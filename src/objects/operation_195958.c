/* Provisional names; preserve original memory checks, nullable construction and default render arguments. */
#include "src/include/widget_panel_render.h"
extern void release_at(void *);
void operation_195958(void){
    (*(WidgetPanelInstance **)0x8c4dc3d0)->flags|=1;
    *(WidgetPanelInstance **)0x8c4dc3d0=0;
    release_at((void *)0x8c31b338);
}
