/* Provisional names; preserve signed wrapping, state transitions, field widths and original call order. */
#include "src/include/widget_panel_owner.h"
#define root_at ((void (*)(WidgetPanelController *,void *))0x8c0330e4)
#define allocate_at ((WidgetPanelController *(*)(void *,int))0x8c122700)
#define setup_at ((void (*)(WidgetPanelController *))0x8c0c532c)
#define finish_at ((void (*)(WidgetPanelController *))0x8c196dc8)
#define states ((WidgetPanelState *)0x8c4dc360)
static inline void reset(void){
    WidgetPanelState *state=states;
    int i;
    for(i=0;
    i<9;
    i++,state++)state->mode=1;
}
static inline void select(int count,int *indices){
    int i;
    {
        WidgetPanelState *state=states;
        int j;
        for(j=0;
        j<9;
        j++,state++)state->mode=1;
    }
    for(i=0;
    i<count;
    i++)states[*(int *)((char *)indices+(i<<2))].mode=0;
}
void operation_195f14(WidgetPanelController *o){
    o->current=*(int *)0x8c469e40;
    if((o->current-=2)<0)o->current+=9;
    if(o->previous==o->current){
        float value=o->opacity+0.16666667163372039794921875f;
        o->opacity=value;
        if(value>1.0f)o->opacity=1.0f;
    }
    else {
        float value=o->opacity+-0.4444444477558136f;
        o->opacity=value;
        if(!(value>0.0f)){
            o->opacity=0.0f;
            o->previous=o->current;
        }
    }
    o->field30+=*(float *)((char *)0x8c287764+(o->mode<<2));
    if(o->field30<0.0f)o->field30=0.0f;
    else if(o->field30>1.0f)o->field30=1.0f;
    o->field34+=*(float *)((char *)0x8c287770+(o->mode<<2));
    if(o->field34<0.0f)o->field34=0.0f;
    else if(o->field34>1.0f)o->field34=1.0f;
    switch(o->mode){
        case 0:{
            WidgetSelectionPair list=*(WidgetSelectionPair *)0x8c31c110;
            select(2,list.items);
        }
        break;
        case 1:{
            WidgetSelectionPair list=*(WidgetSelectionPair *)0x8c31c118;
            select(2,list.items);
        }
        break;
        default:reset();
        break;
    }
    o->field38++;
}
