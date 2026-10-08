#include "src/include/resource_entry_list.h"
/* Keep both list-field reloads: they may alias the entries being initialized. */
void initialize_resource_entry_pointers(ResourceEntryList *list){unsigned int i;for(i=0;i<list->count;i++)list->entries[i].resource=(void *)0x8c466d98;}
