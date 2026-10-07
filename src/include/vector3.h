#ifndef PSO_VECTOR3_H
#define PSO_VECTOR3_H
/* Provisional three-component vector layout from scalar SH4 accesses. */
typedef struct Vector3 { float x, y, z; } Vector3;
typedef char check_vector3_size[sizeof(Vector3)==12?1:-1];
typedef char check_vector3_x[((unsigned long)&((Vector3 *)0)->x)==0?1:-1];
typedef char check_vector3_y[((unsigned long)&((Vector3 *)0)->y)==4?1:-1];
typedef char check_vector3_z[((unsigned long)&((Vector3 *)0)->z)==8?1:-1];
#endif
