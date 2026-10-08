#ifndef PSO_RESOURCE_ENTRY_LIST_H
#define PSO_RESOURCE_ENTRY_LIST_H
/* Provisional accessed fields; resource identity remains unconfirmed. */
typedef struct ResourceEntry {void *resource;unsigned int unknown4,unknown8;} ResourceEntry;
typedef struct ResourceEntryList {ResourceEntry *entries;unsigned int count;} ResourceEntryList;
typedef char check_entry_size[sizeof(ResourceEntry)==12?1:-1];
typedef char check_entry_resource[(unsigned long)&((ResourceEntry *)0)->resource==0?1:-1];
typedef char check_entry_list_count[(unsigned long)&((ResourceEntryList *)0)->count==4?1:-1];
typedef char check_entry_list_size[sizeof(ResourceEntryList)==8?1:-1];
#endif
