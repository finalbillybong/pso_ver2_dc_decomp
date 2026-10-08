#ifndef PSO_WIDGET_NOTICE_RECORD_H
#define PSO_WIDGET_NOTICE_RECORD_H
/* Provisional record layout, checked against initialization and copy accesses. */
typedef struct WidgetPayloadPair {unsigned char first,second;} WidgetPayloadPair;
typedef struct WidgetPayload {
    unsigned char field00,field01,field02,field03,field04,field05;
    WidgetPayloadPair pairs[3];
    int field0c;
    unsigned int field10;
} WidgetPayload;
typedef struct WidgetNotice {
    signed char kind;
    unsigned char field01;
    short field02;
    float x,y;
    short field0c,field0e;
    WidgetPayload payload;
} WidgetNotice;
typedef char check_WidgetPayloadPair_first[(unsigned long)&((WidgetPayloadPair *)0)->first == 0 ? 1 : -1];
typedef char check_WidgetPayloadPair_second[(unsigned long)&((WidgetPayloadPair *)0)->second == 1 ? 1 : -1];
typedef char check_WidgetPayloadPair_size[sizeof(WidgetPayloadPair) == 2 ? 1 : -1];
typedef char check_WidgetPayload_field00[(unsigned long)&((WidgetPayload *)0)->field00 == 0 ? 1 : -1];
typedef char check_WidgetPayload_field01[(unsigned long)&((WidgetPayload *)0)->field01 == 1 ? 1 : -1];
typedef char check_WidgetPayload_field02[(unsigned long)&((WidgetPayload *)0)->field02 == 2 ? 1 : -1];
typedef char check_WidgetPayload_field03[(unsigned long)&((WidgetPayload *)0)->field03 == 3 ? 1 : -1];
typedef char check_WidgetPayload_field04[(unsigned long)&((WidgetPayload *)0)->field04 == 4 ? 1 : -1];
typedef char check_WidgetPayload_field05[(unsigned long)&((WidgetPayload *)0)->field05 == 5 ? 1 : -1];
typedef char check_WidgetPayload_pairs[(unsigned long)&((WidgetPayload *)0)->pairs == 6 ? 1 : -1];
typedef char check_WidgetPayload_field0c[(unsigned long)&((WidgetPayload *)0)->field0c == 12 ? 1 : -1];
typedef char check_WidgetPayload_field10[(unsigned long)&((WidgetPayload *)0)->field10 == 16 ? 1 : -1];
typedef char check_WidgetPayload_size[sizeof(WidgetPayload) == 20 ? 1 : -1];
typedef char check_WidgetNotice_kind[(unsigned long)&((WidgetNotice *)0)->kind == 0 ? 1 : -1];
typedef char check_WidgetNotice_field01[(unsigned long)&((WidgetNotice *)0)->field01 == 1 ? 1 : -1];
typedef char check_WidgetNotice_field02[(unsigned long)&((WidgetNotice *)0)->field02 == 2 ? 1 : -1];
typedef char check_WidgetNotice_x[(unsigned long)&((WidgetNotice *)0)->x == 4 ? 1 : -1];
typedef char check_WidgetNotice_y[(unsigned long)&((WidgetNotice *)0)->y == 8 ? 1 : -1];
typedef char check_WidgetNotice_field0c[(unsigned long)&((WidgetNotice *)0)->field0c == 12 ? 1 : -1];
typedef char check_WidgetNotice_field0e[(unsigned long)&((WidgetNotice *)0)->field0e == 14 ? 1 : -1];
typedef char check_WidgetNotice_payload[(unsigned long)&((WidgetNotice *)0)->payload == 16 ? 1 : -1];
typedef char check_WidgetNotice_size[sizeof(WidgetNotice) == 36 ? 1 : -1];
#endif
