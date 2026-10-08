/* Provisional names; preserve signed accesses, loop order and float grouping. */
#include "src/include/widget_panel.h"
WidgetPanelOwner *operation_195570(WidgetPanelOwner *o,short mode){
    if(o){
        o->dispatch=(void *)0x8c2728a0;
        ((void (*)(WidgetPanelOwner *,int))0x8c03311c)(o,0);
        if(mode>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o);
    }
    return o;
}
