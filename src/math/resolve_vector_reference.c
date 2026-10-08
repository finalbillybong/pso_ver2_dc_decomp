#include "src/include/vector_array.h"
extern VectorLookup *lookup_at(void *,int);
int resolve_vector_reference(void *unused,Vector3 *position) {
 VectorLookup *entry=lookup_at(position,0x16ef);
 if(!entry)return 0;
 *position=*entry->position;
 return 1;
}
