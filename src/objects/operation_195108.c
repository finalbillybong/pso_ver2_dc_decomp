/* Provisional names; preserve record copies, sentinel widths and packet writes. */
#include "src/include/widget_notice_record.h"
#define payload_init_at ((void (*)(WidgetPayload *))0x8c1c7dd4)
void operation_195108(WidgetNotice *o){
    o->field01=0;
    o->kind=-1;
    o->field02=-1;
    o->x=0.0f;
    o->y=0.0f;
    o->field0c=-1;
    o->field0e=0;
    payload_init_at(&o->payload);
}
