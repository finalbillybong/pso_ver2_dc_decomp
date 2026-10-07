#ifndef PSO_RESOURCE_LIST_H
#define PSO_RESOURCE_LIST_H
/* Provisional descriptor and entry views inferred from the resource-copy loop. */
typedef struct ResourceEntryView { int field_00,field_04,field_08; } ResourceEntryView;
typedef struct ResourceListView { ResourceEntryView *entries; int count; } ResourceListView;
typedef char check_entry_size[sizeof(ResourceEntryView)==12?1:-1];
typedef char check_entry_4[((unsigned long)&((ResourceEntryView *)0)->field_04)==4?1:-1];
typedef char check_entry_8[((unsigned long)&((ResourceEntryView *)0)->field_08)==8?1:-1];
typedef char check_list_count[((unsigned long)&((ResourceListView *)0)->count)==4?1:-1];
typedef char check_list_size[sizeof(ResourceListView)==8?1:-1];
typedef char check_entry_0[((unsigned long)&((ResourceEntryView *)0)->field_00)==0?1:-1];
typedef char check_list_entries[((unsigned long)&((ResourceListView *)0)->entries)==0?1:-1];
#endif
