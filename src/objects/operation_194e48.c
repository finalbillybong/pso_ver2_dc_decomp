/* Provisional names; preserve record copies, sentinel widths and packet writes. */
#include "src/include/widget_record_tables.h"
#define setup_at ((void (*)(WidgetPayload *,int))0x8c1c9f04)
#define finish_at ((void (*)(WidgetPayload *))0x8c1c9730)
#define clear_at ((void (*)(void *,int))0x8c162de4)
#define large_table (*(WidgetLargeRecord **)0x8c46ed10)
#define small_table (*(WidgetSmallRecord **)0x8c46ed0c)
void operation_194e48(WidgetPacket *o){
    WidgetLargeRecord large;
    WidgetSmallRecord small;
    if((o->length<<2)==40)setup_at(&o->notice.payload,0);
    else setup_at(&o->notice.payload,2);
    finish_at(&o->notice.payload);
    if((signed char)o->notice.field01==1){
        WidgetLargeRecord *base=large_table;
        WidgetLargeRecord *copy=&large;
        int index=o->notice.field02;
        WidgetLargeRecord *entry=&base[index];
        *copy=*entry;
        large.value=0xffff;
        if(!(index>0xb4f))*entry=*copy;
    }
    else{
        WidgetSmallRecord *base=small_table;
        WidgetSmallRecord *copy=&small;
        int index=o->notice.field02;
        WidgetSmallRecord *entry=(WidgetSmallRecord *)((char *)base+(index<<2));
        *copy=*entry;
        small.value=0xffff;
        if(!(index>0xb9f))*entry=*copy;
    }
    clear_at(&o->notice.kind,0);
}
