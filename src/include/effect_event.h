#ifndef PSO_EFFECT_EVENT_H
#define PSO_EFFECT_EVENT_H
#include "src/include/vector3.h"
/* Provisional event and packet layouts; preserve untouched fields. */
typedef struct EffectEvent {unsigned short owner;short index;unsigned int value;Vector3 position;unsigned int token;} EffectEvent;
typedef struct EventOwner {char unknown00[100];unsigned int token;} EventOwner;
typedef struct EffectEventPacket {unsigned char command,size;unsigned short unknown02;unsigned short owner;short index;unsigned int value;Vector3 position;unsigned int token;} EffectEventPacket;
typedef char check_EffectEvent_owner[(unsigned long)&((EffectEvent *)0)->owner == 0 ? 1 : -1];
typedef char check_EffectEvent_index[(unsigned long)&((EffectEvent *)0)->index == 2 ? 1 : -1];
typedef char check_EffectEvent_value[(unsigned long)&((EffectEvent *)0)->value == 4 ? 1 : -1];
typedef char check_EffectEvent_position[(unsigned long)&((EffectEvent *)0)->position == 8 ? 1 : -1];
typedef char check_EffectEvent_token[(unsigned long)&((EffectEvent *)0)->token == 20 ? 1 : -1];
typedef char check_EffectEvent_size[sizeof(EffectEvent)==24?1:-1];
typedef char check_EventOwner_token[(unsigned long)&((EventOwner *)0)->token == 100 ? 1 : -1];
typedef char check_EventOwner_size[sizeof(EventOwner)==104?1:-1];
typedef char check_EffectEventPacket_command[(unsigned long)&((EffectEventPacket *)0)->command == 0 ? 1 : -1];
typedef char check_EffectEventPacket_size[(unsigned long)&((EffectEventPacket *)0)->size == 1 ? 1 : -1];
typedef char check_EffectEventPacket_unknown02[(unsigned long)&((EffectEventPacket *)0)->unknown02 == 2 ? 1 : -1];
typedef char check_EffectEventPacket_owner[(unsigned long)&((EffectEventPacket *)0)->owner == 4 ? 1 : -1];
typedef char check_EffectEventPacket_index[(unsigned long)&((EffectEventPacket *)0)->index == 6 ? 1 : -1];
typedef char check_EffectEventPacket_value[(unsigned long)&((EffectEventPacket *)0)->value == 8 ? 1 : -1];
typedef char check_EffectEventPacket_position[(unsigned long)&((EffectEventPacket *)0)->position == 12 ? 1 : -1];
typedef char check_EffectEventPacket_token[(unsigned long)&((EffectEventPacket *)0)->token == 24 ? 1 : -1];
typedef char check_EffectEventPacket_size[sizeof(EffectEventPacket)==28?1:-1];
#endif
