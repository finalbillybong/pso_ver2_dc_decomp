#ifndef PSO_RESOURCE_FLAG_STATE_H
#define PSO_RESOURCE_FLAG_STATE_H
/* Provisional observed resource state prefix. No complete allocation size implied. */
typedef struct ResourceFlagState {
    void *buffer, *handle;
    int source, field_c, ready;
    void *dispatch;
    int state;
    unsigned int flags;
    int argument;
    void *output;
} ResourceFlagState;
typedef char check_ResourceFlagState_buffer[(unsigned long)&((ResourceFlagState *)0)->buffer == 0 ? 1 : -1];
typedef char check_ResourceFlagState_handle[(unsigned long)&((ResourceFlagState *)0)->handle == 4 ? 1 : -1];
typedef char check_ResourceFlagState_source[(unsigned long)&((ResourceFlagState *)0)->source == 8 ? 1 : -1];
typedef char check_ResourceFlagState_field_c[(unsigned long)&((ResourceFlagState *)0)->field_c == 12 ? 1 : -1];
typedef char check_ResourceFlagState_ready[(unsigned long)&((ResourceFlagState *)0)->ready == 16 ? 1 : -1];
typedef char check_ResourceFlagState_dispatch[(unsigned long)&((ResourceFlagState *)0)->dispatch == 20 ? 1 : -1];
typedef char check_ResourceFlagState_state[(unsigned long)&((ResourceFlagState *)0)->state == 24 ? 1 : -1];
typedef char check_ResourceFlagState_flags[(unsigned long)&((ResourceFlagState *)0)->flags == 28 ? 1 : -1];
typedef char check_ResourceFlagState_argument[(unsigned long)&((ResourceFlagState *)0)->argument == 32 ? 1 : -1];
typedef char check_ResourceFlagState_output[(unsigned long)&((ResourceFlagState *)0)->output == 36 ? 1 : -1];
typedef char check_ResourceFlagState_prefix[sizeof(ResourceFlagState) == 40 ? 1 : -1];
#endif
