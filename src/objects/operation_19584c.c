/* Provisional names; preserve original memory checks, nullable construction and default render arguments. */
#include "src/include/widget_panel_render.h"
extern void load_at(char *,void *);
extern char resource_names[];
extern int panel_mode;
extern float panel_scale;
extern int panel_source_mode;
extern void * panel_parent;
extern float panel_height;
extern void * panel_pool;
extern WidgetPanelInstance * panel_owner;
void operation_19584c(void){
    WidgetPanelInstance *o;
    void *parent;
    {
        short i;
        unsigned int *p=(unsigned int *)0x8c004000;
        unsigned int limit=4096;
        for(i=0;
        i<limit;
        i++){
            if(*p++)for(;
            ;
            ){
            }
        }
    }
    panel_scale=1.0f;
    panel_mode=0;
    if(panel_source_mode)panel_mode=1;
    {
        int i;
        WidgetPanelState *p=(WidgetPanelState *)0x8c4dc360;
        for(i=0;
        i<9;
        i++,p++)*p=*(WidgetPanelState *)0x8c287758;
    }
    panel_height=0.0f;
    parent=panel_parent;
    o=((WidgetPanelInstance *(*)(void *,int))0x8c122700)(panel_pool,32);
    if(o){
        ((void (*)(WidgetPanelInstance *,void *))0x8c0330e4)(o,parent);
        o->dispatch=(void *)0x8c2728a0;
        o->field00=*(int *)0x8c31b340;
        o->field1e=32;
    }
    panel_owner=o;
    load_at(resource_names+185,(void *)0x8c31b338);
    {
        short i;
        unsigned int *p=(unsigned int *)0x8c004000;
        unsigned int limit=4096;
        for(i=0;
        i<limit;
        i++){
            if(*p++)for(;
            ;
            ){
            }
        }
    }
}
