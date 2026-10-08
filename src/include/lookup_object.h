#ifndef PSO_LOOKUP_OBJECT_H
#define PSO_LOOKUP_OBJECT_H
/* Provisional ID view; this prefix does not establish complete object size. */
typedef struct LookupObject { char unknown00[32]; unsigned short id; } LookupObject;
typedef char check_lookup_object_id[(unsigned long)&((LookupObject *)0)->id == 32 ? 1 : -1];
typedef char check_lookup_object_prefix[sizeof(LookupObject) == 34 ? 1 : -1];
#endif
