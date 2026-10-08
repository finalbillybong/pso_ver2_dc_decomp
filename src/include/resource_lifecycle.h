#ifndef PSO_RESOURCE_LIFECYCLE_H
#define PSO_RESOURCE_LIFECYCLE_H
/* Provisional observed prefix: root operations use only the first24 bytes;
 * derived operations additionally use the extra buffer and original size. */
typedef struct ResourceLifecycle {
    void *buffer, *handle; int source, field_c, ready;
    void *dispatch, *extra; int extra_size;
} ResourceLifecycle;
typedef char check_ResourceLifecycle_buffer[(unsigned long)&((ResourceLifecycle *)0)->buffer == 0 ? 1 : -1];
typedef char check_ResourceLifecycle_handle[(unsigned long)&((ResourceLifecycle *)0)->handle == 4 ? 1 : -1];
typedef char check_ResourceLifecycle_source[(unsigned long)&((ResourceLifecycle *)0)->source == 8 ? 1 : -1];
typedef char check_ResourceLifecycle_field_c[(unsigned long)&((ResourceLifecycle *)0)->field_c == 12 ? 1 : -1];
typedef char check_ResourceLifecycle_ready[(unsigned long)&((ResourceLifecycle *)0)->ready == 16 ? 1 : -1];
typedef char check_ResourceLifecycle_dispatch[(unsigned long)&((ResourceLifecycle *)0)->dispatch == 20 ? 1 : -1];
typedef char check_ResourceLifecycle_extra[(unsigned long)&((ResourceLifecycle *)0)->extra == 24 ? 1 : -1];
typedef char check_ResourceLifecycle_extra_size[(unsigned long)&((ResourceLifecycle *)0)->extra_size == 28 ? 1 : -1];
typedef char check_ResourceLifecycle_prefix[sizeof(ResourceLifecycle) == 32 ? 1 : -1];
#endif
