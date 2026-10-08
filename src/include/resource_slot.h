#ifndef PSO_RESOURCE_SLOT_H
#define PSO_RESOURCE_SLOT_H
/* Observed destination stride; individual field roles remain unknown. */
typedef struct ResourceSlot { unsigned int fields[3]; } ResourceSlot;
typedef char check_resource_slot_fields[(unsigned long)&((ResourceSlot *)0)->fields == 0 ? 1 : -1];
typedef char check_resource_slot_stride[sizeof(ResourceSlot) == 12 ? 1 : -1];
#endif
