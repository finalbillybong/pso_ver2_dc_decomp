#ifndef PSO_WIDGET_RECORD_TABLES_H
#define PSO_WIDGET_RECORD_TABLES_H
#include "src/include/widget_notice_record.h"
/* Provisional table rows and packet layout; all offsets remain checked. */
typedef struct WidgetLargeRecord {unsigned int field00;unsigned short value,field06;unsigned int field08;} WidgetLargeRecord;
typedef struct WidgetSmallRecord {unsigned short field00,value;} WidgetSmallRecord;
typedef struct WidgetPacket {
    unsigned char opcode,length;
    char unknown02[2];
    WidgetNotice notice;
    unsigned char field28,field29,field2a,field2b;
} WidgetPacket;
typedef char check_WidgetLargeRecord_field00[(unsigned long)&((WidgetLargeRecord *)0)->field00 == 0 ? 1 : -1];
typedef char check_WidgetLargeRecord_value[(unsigned long)&((WidgetLargeRecord *)0)->value == 4 ? 1 : -1];
typedef char check_WidgetLargeRecord_field06[(unsigned long)&((WidgetLargeRecord *)0)->field06 == 6 ? 1 : -1];
typedef char check_WidgetLargeRecord_field08[(unsigned long)&((WidgetLargeRecord *)0)->field08 == 8 ? 1 : -1];
typedef char check_WidgetLargeRecord_size[sizeof(WidgetLargeRecord) == 12 ? 1 : -1];
typedef char check_WidgetSmallRecord_field00[(unsigned long)&((WidgetSmallRecord *)0)->field00 == 0 ? 1 : -1];
typedef char check_WidgetSmallRecord_value[(unsigned long)&((WidgetSmallRecord *)0)->value == 2 ? 1 : -1];
typedef char check_WidgetSmallRecord_size[sizeof(WidgetSmallRecord) == 4 ? 1 : -1];
typedef char check_WidgetPacket_opcode[(unsigned long)&((WidgetPacket *)0)->opcode == 0 ? 1 : -1];
typedef char check_WidgetPacket_length[(unsigned long)&((WidgetPacket *)0)->length == 1 ? 1 : -1];
typedef char check_WidgetPacket_notice[(unsigned long)&((WidgetPacket *)0)->notice == 4 ? 1 : -1];
typedef char check_WidgetPacket_field28[(unsigned long)&((WidgetPacket *)0)->field28 == 40 ? 1 : -1];
typedef char check_WidgetPacket_field29[(unsigned long)&((WidgetPacket *)0)->field29 == 41 ? 1 : -1];
typedef char check_WidgetPacket_field2a[(unsigned long)&((WidgetPacket *)0)->field2a == 42 ? 1 : -1];
typedef char check_WidgetPacket_field2b[(unsigned long)&((WidgetPacket *)0)->field2b == 43 ? 1 : -1];
typedef char check_WidgetPacket_size[sizeof(WidgetPacket) == 44 ? 1 : -1];
#endif
