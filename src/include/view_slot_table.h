#ifndef PSO_VIEW_SLOT_TABLE_H
#define PSO_VIEW_SLOT_TABLE_H
/* Provisional referenced records; original static data remains unresolved. */
typedef struct ViewSlotRecord {void *resource;unsigned int unknown;} ViewSlotRecord;
typedef struct ViewSlotTable {ViewSlotRecord *records;unsigned int count;} ViewSlotTable;
typedef char check_ViewSlotRecord_resource[(unsigned long)&((ViewSlotRecord *)0)->resource==0?1:-1];
typedef char check_ViewSlotRecord_size[sizeof(ViewSlotRecord)==8?1:-1];
typedef char check_ViewSlotTable_count[(unsigned long)&((ViewSlotTable *)0)->count==4?1:-1];
typedef char check_ViewSlotTable_size[sizeof(ViewSlotTable)==8?1:-1];
#endif
