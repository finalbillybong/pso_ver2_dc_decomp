#ifndef PSO_STATE_OWNER_H
#define PSO_STATE_OWNER_H
/* Provisional observed prefixes; the unrecovered owner constructor is excluded. */
typedef struct Child { unsigned int tag; unsigned short flags; } Child;
typedef struct State { float value, total, normal, alternate; } State;
typedef struct StateOwner { int timer; Child *child; State states[5]; } StateOwner;
typedef struct List { int entries[4]; int field10, field14; } List;
typedef char check_Child_tag[(unsigned long)&((Child *)0)->tag == 0 ? 1 : -1];
typedef char check_Child_flags[(unsigned long)&((Child *)0)->flags == 4 ? 1 : -1];
typedef char check_Child_prefix[sizeof(Child) == 8 ? 1 : -1];
typedef char check_State_value[(unsigned long)&((State *)0)->value == 0 ? 1 : -1];
typedef char check_State_total[(unsigned long)&((State *)0)->total == 4 ? 1 : -1];
typedef char check_State_normal[(unsigned long)&((State *)0)->normal == 8 ? 1 : -1];
typedef char check_State_alternate[(unsigned long)&((State *)0)->alternate == 12 ? 1 : -1];
typedef char check_State_prefix[sizeof(State) == 16 ? 1 : -1];
typedef char check_StateOwner_timer[(unsigned long)&((StateOwner *)0)->timer == 0 ? 1 : -1];
typedef char check_StateOwner_child[(unsigned long)&((StateOwner *)0)->child == 4 ? 1 : -1];
typedef char check_StateOwner_states[(unsigned long)&((StateOwner *)0)->states == 8 ? 1 : -1];
typedef char check_StateOwner_prefix[sizeof(StateOwner) == 88 ? 1 : -1];
typedef char check_List_entries[(unsigned long)&((List *)0)->entries == 0 ? 1 : -1];
typedef char check_List_field10[(unsigned long)&((List *)0)->field10 == 16 ? 1 : -1];
typedef char check_List_field14[(unsigned long)&((List *)0)->field14 == 20 ? 1 : -1];
typedef char check_List_prefix[sizeof(List) == 24 ? 1 : -1];
#endif
