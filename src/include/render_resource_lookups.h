#ifndef PSO_RENDER_RESOURCE_LOOKUPS_H
#define PSO_RENDER_RESOURCE_LOOKUPS_H
/* Provisional accessed prefixes; original class names and table contents unresolved. */
typedef struct RenderLookupTable {char unknown00[12];void *value12;char unknown16[8];void *value24;} RenderLookupTable;
typedef struct RenderLookupOwner {char unknown00[1068];RenderLookupTable *table;} RenderLookupOwner;
typedef char check_RenderLookupTable_value12[(unsigned long)&((RenderLookupTable *)0)->value12==12?1:-1];
typedef char check_RenderLookupTable_value24[(unsigned long)&((RenderLookupTable *)0)->value24==24?1:-1];
typedef char check_RenderLookupTable_size[sizeof(RenderLookupTable)==28?1:-1];
typedef char check_RenderLookupOwner_table[(unsigned long)&((RenderLookupOwner *)0)->table==1068?1:-1];
typedef char check_RenderLookupOwner_size[sizeof(RenderLookupOwner)==1072?1:-1];
#endif
