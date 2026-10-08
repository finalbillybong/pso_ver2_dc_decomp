/* Provisional names; preserve signed accesses, loop order and float grouping. */
#include "src/include/widget_panel.h"
#define states ((WidgetPanelState *)0x8c4dc360)
#define groups ((WidgetPanelGroup *)0x8c31b344)
#define metrics ((WidgetPanelMetric *)0x8c31b3f8)
#define total_height (*(float *)0x8c4dc3cc)
#define query_at ((int (*)(void *,int))0x8c1957c0)
void operation_1955b4(void *o){
    float total;
    {
        WidgetPanelState *state=states;
        int i;
        for(i=0;
        i<9;
        i++,state++){
            if(state->mode==0){
                float value=state->opacity+0.16666667163372039794921875f;
                state->opacity=value;
                if(value>1.0f)state->opacity=1.0f;
            }
            else{
                float value=state->opacity+-0.066666670143604278564453125f;
                state->opacity=value;
                if(value<0.0f)state->opacity=0.0f;
            }
        }
    }
    {
        WidgetPanelGroup *group=groups;
        int i,j;
        WidgetPanelState *state=states;
        total=0.0f;
        for(i=0;
        i<9;
        i++,state++,group++){
            if(state->mode==1){
                float value=state->position-1.0f;
                state->position=value;
                if(value<0.0f)state->position=0.0f;
            }
            else{
                state->position+=(total-state->position)*0.05f;
                for(j=0;
                j<group->count;
                j++){
                    int *codes=group->codes;
                    int index=query_at(o,*(int *)((char *)codes+(j<<2)));
                    total+=(float)(metrics[index].height+1);
                }
                total+=4.0f;
            }
        }
    }
    total_height+=(total-total_height)*0.15f;
}
