#ifndef PSO_WIDGET_CONFIRMATION_H
#define PSO_WIDGET_CONFIRMATION_H
/* Provisional compact-packet actor and confirmation views. */
typedef struct WidgetPacketActor {
    char unknown00[8];short argument;char unknown0a[2];float x;
    char unknown10[4];float y;char unknown18[20];float field2c;
} WidgetPacketActor;
typedef struct WidgetConfirmOwner {char unknown00[2];short field02;unsigned int field04;short field08;} WidgetConfirmOwner;
typedef struct WidgetConfirmPacket {unsigned char opcode,length;short field02;unsigned short field04;short field06;unsigned int field08;} WidgetConfirmPacket;
typedef struct WidgetForwardOwner {unsigned int field00,value;int index;} WidgetForwardOwner;
typedef char check_WidgetPacketActor_argument[(unsigned long)&((WidgetPacketActor *)0)->argument == 8 ? 1 : -1];
typedef char check_WidgetPacketActor_x[(unsigned long)&((WidgetPacketActor *)0)->x == 12 ? 1 : -1];
typedef char check_WidgetPacketActor_y[(unsigned long)&((WidgetPacketActor *)0)->y == 20 ? 1 : -1];
typedef char check_WidgetPacketActor_field2c[(unsigned long)&((WidgetPacketActor *)0)->field2c == 44 ? 1 : -1];
typedef char check_WidgetPacketActor_size[sizeof(WidgetPacketActor) == 48 ? 1 : -1];
typedef char check_WidgetConfirmOwner_field02[(unsigned long)&((WidgetConfirmOwner *)0)->field02 == 2 ? 1 : -1];
typedef char check_WidgetConfirmOwner_field04[(unsigned long)&((WidgetConfirmOwner *)0)->field04 == 4 ? 1 : -1];
typedef char check_WidgetConfirmOwner_field08[(unsigned long)&((WidgetConfirmOwner *)0)->field08 == 8 ? 1 : -1];
typedef char check_WidgetConfirmOwner_size[sizeof(WidgetConfirmOwner) == 12 ? 1 : -1];
typedef char check_WidgetConfirmPacket_opcode[(unsigned long)&((WidgetConfirmPacket *)0)->opcode == 0 ? 1 : -1];
typedef char check_WidgetConfirmPacket_length[(unsigned long)&((WidgetConfirmPacket *)0)->length == 1 ? 1 : -1];
typedef char check_WidgetConfirmPacket_field02[(unsigned long)&((WidgetConfirmPacket *)0)->field02 == 2 ? 1 : -1];
typedef char check_WidgetConfirmPacket_field04[(unsigned long)&((WidgetConfirmPacket *)0)->field04 == 4 ? 1 : -1];
typedef char check_WidgetConfirmPacket_field06[(unsigned long)&((WidgetConfirmPacket *)0)->field06 == 6 ? 1 : -1];
typedef char check_WidgetConfirmPacket_field08[(unsigned long)&((WidgetConfirmPacket *)0)->field08 == 8 ? 1 : -1];
typedef char check_WidgetConfirmPacket_size[sizeof(WidgetConfirmPacket) == 12 ? 1 : -1];
typedef char check_WidgetForwardOwner_value[(unsigned long)&((WidgetForwardOwner *)0)->value == 4 ? 1 : -1];
typedef char check_WidgetForwardOwner_index[(unsigned long)&((WidgetForwardOwner *)0)->index == 8 ? 1 : -1];
typedef char check_WidgetForwardOwner_size[sizeof(WidgetForwardOwner) == 12 ? 1 : -1];
#endif
