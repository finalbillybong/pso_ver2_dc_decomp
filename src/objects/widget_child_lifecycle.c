/* Provisional names; preserve signed fields, callback order and exact ranges. */
#include "src/include/widget_child.h"
WidgetChild *operation_192b14(WidgetChild *o,signed char selected,signed char count){
    o->selected=selected;
    o->count=count;
    o->displacement=0.0f;
    return o;
}
#define free_at ((void (*)(WidgetChild *))0x8c011ed8)
WidgetChild *operation_192b28(WidgetChild *o,short release){
    if(o&&release>0)free_at(o);
    return o;
}
