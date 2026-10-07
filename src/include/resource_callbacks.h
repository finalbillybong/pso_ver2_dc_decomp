#ifndef PSO_RESOURCE_CALLBACKS_H
#define PSO_RESOURCE_CALLBACKS_H
/* Provisional paired callbacks, traversed forward for start and backward for end. */
typedef struct ResourceCallbacks { void (*start)(void); void (*end)(void); } ResourceCallbacks;
typedef char check_callbacks_size[sizeof(ResourceCallbacks)==8?1:-1];
typedef char check_callbacks_end[((unsigned long)&((ResourceCallbacks *)0)->end)==4?1:-1];
typedef char check_callbacks_start[((unsigned long)&((ResourceCallbacks *)0)->start)==0?1:-1];
#endif
