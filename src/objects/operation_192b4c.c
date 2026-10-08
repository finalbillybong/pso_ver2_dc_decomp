/* Provisional names; preserve signed fields, callback order and exact ranges. */
#include "src/include/widget_child.h"
#define decay_at ((void (*)(WidgetChild *))0x8c192c08)
extern int emit_at(unsigned int,void *,int,unsigned int);
extern WidgetInput input;
#define input_flags input.flags
int operation_192b4c(WidgetChild *o){
    signed char selected;
    decay_at(o);
    selected=o->selected;
    if(!(input_flags&0x30000))return 0;
    emit_at(0x50000,0,0,0);
    {
        unsigned int buttons=input_flags;
        if(buttons&0x10000)selected++;
        if(buttons&0x20000)selected--;
    }
    if(selected<0)selected=o->count-1;
    if(selected>=o->count)selected=0;
    if(selected==o->selected)return 0;
    o->selected=selected;
    if(input_flags&0x10000)o->displacement=10.0f;
    else o->displacement=-10.0f;
    return 1;
}
