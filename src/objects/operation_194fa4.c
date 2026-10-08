/* Provisional names; preserve record copies, sentinel widths and packet writes. */
#include "src/include/widget_record_tables.h"
#define large_table (*(WidgetLargeRecord **)0x8c46ed10)
#define lookup_at ((int (*)(unsigned short))0x8c195514)
#define payload_init_at ((void (*)(WidgetPayload *))0x8c1c7dd4)
#define configure_at ((void (*)(int,int,WidgetPayload *))0x8c158938)
#define valid_at ((int (*)(WidgetPayload *))0x8c1c9bb0)
#define finalize_at ((void (*)(WidgetPayload *))0x8c1c9418)
#define notice_init_at ((void (*)(WidgetNotice *))0x8c195108)
#define send_at ((void (*)(WidgetPacket *))0x8c0368a8)
void operation_194fa4(int type,short index,int slot,short argument,int kind,float x,float y){
    WidgetLargeRecord record;
    WidgetPayload payload;
    WidgetPacket packet;
    int value,offset;
    if(index==-1)return;
    offset=index*12;
    record=(*(WidgetLargeRecord *)((char *)large_table+offset));
    {
        unsigned short id=record.value,invalid=0xffff;
        if(id==invalid)return;
        value=lookup_at(id);
        record.value=0xffff;
        if(!(index>0xb4f))(*(WidgetLargeRecord *)((char *)large_table+offset))=record;
        payload_init_at(&payload);
        configure_at(type,kind,&payload);
        payload.field0c=value;
        if(!valid_at(&payload))return;
        finalize_at(&payload);
        notice_init_at(&packet.notice);
        packet.opcode=95;
        packet.length=10;
        packet.opcode=95;
        packet.field28=2;
        packet.field29=0;
        packet.field2a=0;
        packet.field2b=0;
        packet.length=11;
        packet.notice.kind=slot;
        packet.notice.field01=1;
        packet.notice.field02=index;
        packet.notice.x=x;
        packet.notice.y=y;
        packet.notice.payload=payload;
        packet.notice.field0c=argument;
        send_at(&packet);
    }
}
