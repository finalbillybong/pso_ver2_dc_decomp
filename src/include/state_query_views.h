#ifndef PSO_STATE_QUERY_VIEWS_H
#define PSO_STATE_QUERY_VIEWS_H
/* Provisional observed prefixes; names do not establish gameplay semantics. */
typedef struct StateRecord {
    char unknown00[52]; unsigned int flags;
    char unknown38[44]; int angle;
    char unknown68[680]; unsigned int mask;
    char unknown314[608]; short state, mode;
    int saved_angle; short value;
} StateRecord;
typedef struct IndexObject { char unknown00[900]; short index; } IndexObject;
typedef struct FlaggedObject { char unknown00[52]; unsigned int flags; } FlaggedObject;
typedef struct ModeObject { char unknown00[776]; short mode; } ModeObject;
typedef char check_StateRecord_flags[(unsigned long)&((StateRecord *)0)->flags == 52 ? 1 : -1];
typedef char check_StateRecord_angle[(unsigned long)&((StateRecord *)0)->angle == 100 ? 1 : -1];
typedef char check_StateRecord_mask[(unsigned long)&((StateRecord *)0)->mask == 784 ? 1 : -1];
typedef char check_StateRecord_state[(unsigned long)&((StateRecord *)0)->state == 1396 ? 1 : -1];
typedef char check_StateRecord_mode[(unsigned long)&((StateRecord *)0)->mode == 1398 ? 1 : -1];
typedef char check_StateRecord_saved_angle[(unsigned long)&((StateRecord *)0)->saved_angle == 1400 ? 1 : -1];
typedef char check_StateRecord_value[(unsigned long)&((StateRecord *)0)->value == 1404 ? 1 : -1];
typedef char check_StateRecord_prefix[sizeof(StateRecord) == 1408 ? 1 : -1];
typedef char check_IndexObject_index[(unsigned long)&((IndexObject *)0)->index == 900 ? 1 : -1];
typedef char check_IndexObject_prefix[sizeof(IndexObject) == 902 ? 1 : -1];
typedef char check_FlaggedObject_flags[(unsigned long)&((FlaggedObject *)0)->flags == 52 ? 1 : -1];
typedef char check_FlaggedObject_prefix[sizeof(FlaggedObject) == 56 ? 1 : -1];
typedef char check_ModeObject_mode[(unsigned long)&((ModeObject *)0)->mode == 776 ? 1 : -1];
typedef char check_ModeObject_prefix[sizeof(ModeObject) == 778 ? 1 : -1];
#endif
