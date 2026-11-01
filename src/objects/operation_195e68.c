/* Provisional names; preserve signed wrapping, state transitions, field widths and original call order. */
#include "src/include/widget_panel_owner.h"
#define TObject_ctor_8c0330e4 ((void (*)(WidgetPanelController *,void *))0x8c0330e4)
#define heap_alloc_8c122700 ((WidgetPanelController *(*)(void *,int))0x8c122700)
#define setup_at ((void (*)(WidgetPanelController *))0x8c0c532c)
#define TObjBGLifeGame_ctor_8c196dc8 ((void (*)(WidgetPanelController *))0x8c196dc8)
static inline WidgetPanelController *construct(WidgetPanelController *base,void *parent){
    WidgetPanelController *o=base;
    TObject_ctor_8c0330e4(base,parent);
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
    TObjBGLifeGame_ctor_8c196dc8(o);
    {
        WidgetPanelController **self=&o;
        (void)self;
        return o;
    }
}
WidgetPanelController *TObjCMSprCharSelBG_ctor_8c195e68(void *parent){
    WidgetPanelController *o=heap_alloc_8c122700(*(void **)0x8c4d97e0,60);
    if(o)construct(o,parent);
    return o;
}
