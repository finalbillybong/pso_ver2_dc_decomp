#ifndef PSO_DISPATCH_STATE_H
#define PSO_DISPATCH_STATE_H
/* Provisional observed prefixes. The 16-byte state record is shared by the
 * updater and the embedded state at offset 0x704; these are not full objects. */
typedef struct State { float value, total, normal, alternate; } State;
typedef struct Flags { char unknown00[52]; unsigned int flags; } Flags;
typedef struct Object {
    char unknown00[32]; unsigned short id;
    char unknown22[18]; unsigned int flags;
    char unknown38[720]; short mode;
    char unknown30a[1018]; State state;
} Object;
typedef struct Notice {
    unsigned char kind, size;
    unsigned short source, target, value;
} Notice;
typedef struct BoundedBytes { unsigned char fields[4]; } BoundedBytes;
typedef char check_State_value[(unsigned long)&((State *)0)->value == 0 ? 1 : -1];
typedef char check_State_total[(unsigned long)&((State *)0)->total == 4 ? 1 : -1];
typedef char check_State_normal[(unsigned long)&((State *)0)->normal == 8 ? 1 : -1];
typedef char check_State_alternate[(unsigned long)&((State *)0)->alternate == 12 ? 1 : -1];
typedef char check_State_prefix[sizeof(State) == 16 ? 1 : -1];
typedef char check_Flags_flags[(unsigned long)&((Flags *)0)->flags == 52 ? 1 : -1];
typedef char check_Flags_prefix[sizeof(Flags) == 56 ? 1 : -1];
typedef char check_Object_id[(unsigned long)&((Object *)0)->id == 32 ? 1 : -1];
typedef char check_Object_flags[(unsigned long)&((Object *)0)->flags == 52 ? 1 : -1];
typedef char check_Object_mode[(unsigned long)&((Object *)0)->mode == 776 ? 1 : -1];
typedef char check_Object_state[(unsigned long)&((Object *)0)->state == 1796 ? 1 : -1];
typedef char check_Object_prefix[sizeof(Object) == 1812 ? 1 : -1];
typedef char check_Notice_kind[(unsigned long)&((Notice *)0)->kind == 0 ? 1 : -1];
typedef char check_Notice_size[(unsigned long)&((Notice *)0)->size == 1 ? 1 : -1];
typedef char check_Notice_source[(unsigned long)&((Notice *)0)->source == 2 ? 1 : -1];
typedef char check_Notice_target[(unsigned long)&((Notice *)0)->target == 4 ? 1 : -1];
typedef char check_Notice_value[(unsigned long)&((Notice *)0)->value == 6 ? 1 : -1];
typedef char check_Notice_prefix[sizeof(Notice) == 8 ? 1 : -1];
typedef char check_BoundedBytes_fields[(unsigned long)&((BoundedBytes *)0)->fields == 0 ? 1 : -1];
typedef char check_BoundedBytes_prefix[sizeof(BoundedBytes) == 4 ? 1 : -1];
#endif
