#ifndef PSO_NOTICE_DISPATCH_H
#define PSO_NOTICE_DISPATCH_H
/* Provisional observed prefixes and eight-byte notice, not complete object types. */
typedef struct GuardObject {
    char unknown00[52]; unsigned int flags;
    char unknown38[720]; short mode;
} GuardObject;
typedef struct Source { char unknown00[32]; unsigned short id; } Source;
typedef struct Notice {
    unsigned char kind, size;
    unsigned short source_id, target_id;
    unsigned char mode, value;
} Notice;
typedef char check_GuardObject_flags[(unsigned long)&((GuardObject *)0)->flags == 52 ? 1 : -1];
typedef char check_GuardObject_mode[(unsigned long)&((GuardObject *)0)->mode == 776 ? 1 : -1];
typedef char check_GuardObject_prefix[sizeof(GuardObject) == 780 ? 1 : -1];
typedef char check_Source_id[(unsigned long)&((Source *)0)->id == 32 ? 1 : -1];
typedef char check_Source_prefix[sizeof(Source) == 34 ? 1 : -1];
typedef char check_Notice_kind[(unsigned long)&((Notice *)0)->kind == 0 ? 1 : -1];
typedef char check_Notice_size[(unsigned long)&((Notice *)0)->size == 1 ? 1 : -1];
typedef char check_Notice_source_id[(unsigned long)&((Notice *)0)->source_id == 2 ? 1 : -1];
typedef char check_Notice_target_id[(unsigned long)&((Notice *)0)->target_id == 4 ? 1 : -1];
typedef char check_Notice_mode[(unsigned long)&((Notice *)0)->mode == 6 ? 1 : -1];
typedef char check_Notice_value[(unsigned long)&((Notice *)0)->value == 7 ? 1 : -1];
typedef char check_Notice_prefix[sizeof(Notice) == 8 ? 1 : -1];
#endif
