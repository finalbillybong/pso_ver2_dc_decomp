#include "src/include/vector3.h"
typedef struct Quad { float a,b,c,d; } Quad;
typedef struct Entry { Vector3 position; Quad values; char unknown28[12]; void *object; } Entry;
typedef struct Input { char unknown0[232]; Vector3 position; Quad values; } Input;
typedef char check_quad[sizeof(Quad)==16?1:-1];
typedef char check_entry[sizeof(Entry)==44?1:-1];
typedef char check_values[(unsigned long)&((Entry *)0)->values==12?1:-1];
typedef char check_object[(unsigned long)&((Entry *)0)->object==40?1:-1];
typedef char check_input_position[(unsigned long)&((Input *)0)->position==232?1:-1];
typedef char check_input_values[(unsigned long)&((Input *)0)->values==244?1:-1];
extern Entry entries[32];extern int count;
void capture_vector_entry(void *object,const Vector3 *position,const Quad *values) {
 if(count<32) {
  entries[count].object=object;
  entries[count].position=*position;
  entries[count].values=*values;
  ++count;
 }
}
