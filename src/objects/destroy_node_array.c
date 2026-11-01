#include "src/include/node_array.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(void *))0x8c011ed8)
NodeArray *destroy_node_array(NodeArray *array,short release){if(array){operator_delete_8c18de08(array->indices);array->indices=0;operator_delete_8c18de08(array->pairs);array->pairs=0;if(release>0)free_at(array);}return array;}
