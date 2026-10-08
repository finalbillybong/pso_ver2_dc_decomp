#include "src/include/node_array.h"
#define release_at ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(void *))0x8c011ed8)
NodeArray *destroy_node_array(NodeArray *array,short release){if(array){release_at(array->indices);array->indices=0;release_at(array->pairs);array->pairs=0;if(release>0)free_at(array);}return array;}
