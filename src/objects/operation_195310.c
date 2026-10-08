/* Provisional names; preserve field widths, mode checks and counter ordering. */
#include "src/include/widget_confirmation.h"
#define forward_at ((int (*)(int,unsigned int))0x8c192558)
int operation_195310(WidgetForwardOwner *o){
    return forward_at(o->index,o->value);
}
