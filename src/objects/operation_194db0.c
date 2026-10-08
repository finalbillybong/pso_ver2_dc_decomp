/* Provisional names; retain default sentinels, field widths and call order. */
#include "src/include/widget_notice_record.h"
#define payload_init_at ((void (*)(WidgetPayload *))0x8c1c7dd4)
#define select_at ((void (*)(int))0x8c1954bc)
#define submit_at ((void (*)(WidgetNotice *))0x8c192360)
static inline void initialize(WidgetNotice *o){
    o->field01=0;
    o->kind=-1;
    o->field02=-1;
    o->x=0.0f;
    o->y=0.0f;
    o->field0c=-1;
    o->field0e=0;
    payload_init_at(&o->payload);
}
void operation_194db0(signed char kind,float x,float y,short index,WidgetPayload *payload){
    WidgetNotice local;
    initialize(&local);
    local.kind=kind;
    local.x=x;
    local.y=y;
    local.field0c=index;
    local.payload=*payload;
    select_at(payload->field0c);
    submit_at(&local);
}
