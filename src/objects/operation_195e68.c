/* Provisional names; preserve signed wrapping, state transitions, field widths and original call order. */
#include "src/include/widget_panel_owner.h"
#define root_at ((void (*)(WidgetPanelController *,void *))0x8c0330e4)
#define allocate_at ((WidgetPanelController *(*)(void *,int))0x8c122700)
#define setup_at ((void (*)(WidgetPanelController *))0x8c0c532c)
#define finish_at ((void (*)(WidgetPanelController *))0x8c196dc8)
static inline WidgetPanelController *construct(WidgetPanelController *base,void *parent){
    WidgetPanelController *o=base;
    root_at(base,parent);
    o->dispatch=(void *)0x8c272884;
    {
        WidgetPanelController *tag_owner=o;
        tag_owner->tag=*(int *)0x8c31c10c;
        o->size=60;
        setup_at(tag_owner);
    }
    o->mode=0;
    o->current=*(int *)0x8c469e40;
    if((o->current-=2)<0)o->current+=9;
    o->previous=o->current;
    o->opacity=0.0f;
    o->field30=0.0f;
    o->field34=0.0f;
    finish_at(o);
    {
        WidgetPanelController **self=&o;
        (void)self;
        return o;
    }
}
WidgetPanelController *operation_195e68(void *parent){
    WidgetPanelController *o=allocate_at(*(void **)0x8c4d97e0,60);
    if(o)construct(o,parent);
    return o;
}
