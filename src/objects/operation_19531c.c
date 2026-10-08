/* Provisional names; preserve field widths, mode checks and counter ordering. */
#include "src/include/widget_confirmation.h"
#include "src/include/widget_record_tables.h"
#define small_table (*(WidgetSmallRecord **)0x8c46ed0c)
#define lookup_at ((int (*)(unsigned short))0x8c195514)
#define payload_init_at ((void (*)(WidgetPayload *))0x8c1c7dd4)
#define configure_at ((void (*)(int,WidgetPayload *))0x8c1588b8)
#define valid_at ((int (*)(WidgetPayload *))0x8c1c9bb0)
#define finalize_at ((void (*)(WidgetPayload *))0x8c1c9418)
#define notice_init_at ((void (*)(WidgetNotice *))0x8c195108)
#define send_at ((void (*)(WidgetPacket *))0x8c0368a8)
#define actor_at ((WidgetPacketActor *(*)(int,short))0x8c09e8c4)
#define load_at ((void (*)(WidgetPayload *,WidgetPacketActor *))0x8c1c9cdc)
void operation_19531c(short index,int slot,int kind){
    WidgetPayload payload;
    WidgetPacket packet;
    WidgetSmallRecord record;
    int value,offset;
    WidgetPacketActor *actor;
    if(index==-1)return;
    offset=index<<2;
    record=(*(WidgetSmallRecord *)((char *)small_table+offset));
    {
        unsigned short id=record.value,invalid=0xffff;
        if(id==invalid)return;
        value=lookup_at(id);
        record.value=0xffff;
        if(!(index>0xb9f))(*(WidgetSmallRecord *)((char *)small_table+offset))=record;
        actor=actor_at(slot,index);
        load_at(&payload,actor);
        if(!actor)return;
        if(actor->field2c==0.0f){
            unsigned char first=payload.field00,second=payload.field01;
            payload_init_at(&payload);
            payload.field00=first;
            payload.field01=second;
            configure_at(kind,&payload);
        }
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
        packet.notice.field01=2;
        packet.notice.field02=index;
        packet.notice.x=actor->x;
        packet.notice.y=actor->y;
        packet.notice.field0c=actor->argument;
        packet.notice.payload=payload;
        send_at(&packet);
    }
}
