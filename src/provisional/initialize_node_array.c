#include "src/include/node_array.h"
#define count_at ((void (*)(NodeArray *,void *,void *))0x8c0cd7b4)
#define allocate_at ((void *(*)(unsigned int))0x8c18de4c)
#define fill_at ((void (*)(NodeArray *,void *,void *))0x8c0cd920)
NodeArray *initialize_node_array(NodeArray *array,void *first,void *second){
 array->pair_count=0;array->index_count=0;*(int *)0x8c46fa88=0;
 count_at(array,first,second);
 array->pairs=allocate_at((unsigned int)array->pair_count<<3);
 array->indices=allocate_at((unsigned int)array->index_count<<2);
 *(void **)0x8c46fa80=array->pairs;*(void **)0x8c46fa84=array->indices;*(int *)0x8c46fa88=0;
 fill_at(array,first,second);return array;
}
