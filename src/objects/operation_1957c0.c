/* Provisional names; preserve signed accesses, loop order and float grouping. */
#include "src/include/widget_panel.h"
#define states ((WidgetPanelState *)0x8c4dc360)
#define groups ((WidgetPanelGroup *)0x8c31b344)
#define metrics ((WidgetPanelMetric *)0x8c31b3f8)
#define total_height (*(float *)0x8c4dc3cc)
#define query_at ((int (*)(void *,int))0x8c1957c0)
int operation_1957c0(void *o,int code){
    if(*(int *)0x8c4dc3d4==1 && code>=122 && code<=124)code+=3;
    return code;
}
