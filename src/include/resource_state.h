#ifndef PSO_RESOURCE_STATE_H
#define PSO_RESOURCE_STATE_H
#include "src/include/resource_lifecycle.h"
/* Provisional stack-context and resource prefixes, with observed offsets only. */
typedef struct ResourceContext {char unknown00[24];void *dispatch;char unknown1c[4];void *buffer;int size;char unknown28[24];} ResourceContext;
typedef struct ResourceBuffer {void *buffer;int value;} ResourceBuffer;
typedef struct FlagResource {void *buffer,*handle;int source,field_c,ready;void *dispatch;int unknown18;unsigned int flags;} FlagResource;
typedef char check_ResourceContext_dispatch[(unsigned long)&((ResourceContext *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ResourceContext_buffer[(unsigned long)&((ResourceContext *)0)->buffer == 32 ? 1 : -1];
typedef char check_ResourceContext_size[(unsigned long)&((ResourceContext *)0)->size == 36 ? 1 : -1];
typedef char check_ResourceContext_prefix[sizeof(ResourceContext) == 64 ? 1 : -1];
typedef char check_ResourceBuffer_buffer[(unsigned long)&((ResourceBuffer *)0)->buffer == 0 ? 1 : -1];
typedef char check_ResourceBuffer_value[(unsigned long)&((ResourceBuffer *)0)->value == 4 ? 1 : -1];
typedef char check_ResourceBuffer_prefix[sizeof(ResourceBuffer) == 8 ? 1 : -1];
typedef char check_FlagResource_buffer[(unsigned long)&((FlagResource *)0)->buffer == 0 ? 1 : -1];
typedef char check_FlagResource_handle[(unsigned long)&((FlagResource *)0)->handle == 4 ? 1 : -1];
typedef char check_FlagResource_source[(unsigned long)&((FlagResource *)0)->source == 8 ? 1 : -1];
typedef char check_FlagResource_field_c[(unsigned long)&((FlagResource *)0)->field_c == 12 ? 1 : -1];
typedef char check_FlagResource_ready[(unsigned long)&((FlagResource *)0)->ready == 16 ? 1 : -1];
typedef char check_FlagResource_dispatch[(unsigned long)&((FlagResource *)0)->dispatch == 20 ? 1 : -1];
typedef char check_FlagResource_flags[(unsigned long)&((FlagResource *)0)->flags == 28 ? 1 : -1];
typedef char check_FlagResource_prefix[sizeof(FlagResource) == 32 ? 1 : -1];
#endif
