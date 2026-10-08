/* Provisional address-based name; preserve resource state, call ordering and signed dispatch conditions. */
#include "src/include/resource_widget.h"
#define child_query_at ((int (*)(void *))0x8c192b4c)
#define clear_at ((void (*)(void *))0x8c0e1bbc)
#define configure_at ((void (*)(ResourceWidget *))0x8c1941c0)
#define check_at ((void (*)(ResourceWidget *))0x8c194250)
#define base_update_at ((void (*)(ResourceWidget *))0x8c0db30c)
#define finish_at ((void (*)(ResourceWidget *,void *))0x8c0e1c08)
void operation_1940ec(ResourceWidget *o){
    if(!(o->flags&2))o->field64=0x01000000;
    if(child_query_at(o->child)){
        clear_at(o->panel);
        configure_at(o);
    }
    check_at(o);
    base_update_at(o);
    finish_at(o,o->panel);
}
