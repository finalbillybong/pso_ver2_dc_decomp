/* Provisional names; preserve signed wrapping, state transitions, field widths and original call order. */
#include "src/include/widget_panel_owner.h"
WidgetPanelController *operation_195e24(WidgetPanelController *o,short mode){
    if(o){
        o->dispatch=(void *)0x8c272884;
        ((void (*)(WidgetPanelController *,int))0x8c03311c)(o,0);
        if(mode>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o);
    }
    return o;
}
