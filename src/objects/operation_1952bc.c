/* Provisional names; preserve field widths, mode checks and counter ordering. */
#include "src/include/widget_confirmation.h"
#define check_at ((int (*)(int,unsigned int))0x8c1924c0)
#define send_at ((void (*)(WidgetConfirmPacket *))0x8c0368a8)
void operation_1952bc(WidgetConfirmOwner *o){
    if(check_at(o->field08,o->field04)){
        WidgetConfirmPacket p;
        p.field04=0xffff;
        p.field06=0;
        p.field08=0xffffffff;
        p.opcode=89;
        p.length=3;
        p.field02=o->field02;
        p.field04=o->field02;
        p.field06=o->field08;
        p.field08=o->field04;
        send_at(&p);
    }
}
