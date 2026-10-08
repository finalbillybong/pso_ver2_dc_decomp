#ifndef PSO_RESOURCE_TASK_OWNER_H
#define PSO_RESOURCE_TASK_OWNER_H
/* Provisional views containing only fields observed in the resource task paths. */
typedef struct ResourceTaskOwner {
    char unknown00[24]; void *dispatch; int unknown1c;
    int index,state,argument1,argument2;
    void *models[4],*textures,*motion;
} ResourceTaskOwner;
typedef struct ResourceTaskState {
    char unknown00[24]; int state; unsigned int flags; int argument;
    void *output,*textures,*models[4],*motion;
} ResourceTaskState;
typedef struct ResourceResidentEntry {void *entries;int count;void *resident;} ResourceResidentEntry;
typedef struct ResourceResidentView {ResourceResidentEntry *data;} ResourceResidentView;
typedef char check_ResourceTaskOwner_dispatch[(unsigned long)&((ResourceTaskOwner *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ResourceTaskOwner_unknown1c[(unsigned long)&((ResourceTaskOwner *)0)->unknown1c == 28 ? 1 : -1];
typedef char check_ResourceTaskOwner_index[(unsigned long)&((ResourceTaskOwner *)0)->index == 32 ? 1 : -1];
typedef char check_ResourceTaskOwner_state[(unsigned long)&((ResourceTaskOwner *)0)->state == 36 ? 1 : -1];
typedef char check_ResourceTaskOwner_argument1[(unsigned long)&((ResourceTaskOwner *)0)->argument1 == 40 ? 1 : -1];
typedef char check_ResourceTaskOwner_argument2[(unsigned long)&((ResourceTaskOwner *)0)->argument2 == 44 ? 1 : -1];
typedef char check_ResourceTaskOwner_models[(unsigned long)&((ResourceTaskOwner *)0)->models == 48 ? 1 : -1];
typedef char check_ResourceTaskOwner_textures[(unsigned long)&((ResourceTaskOwner *)0)->textures == 64 ? 1 : -1];
typedef char check_ResourceTaskOwner_motion[(unsigned long)&((ResourceTaskOwner *)0)->motion == 68 ? 1 : -1];
typedef char check_ResourceTaskOwner_prefix[sizeof(ResourceTaskOwner) == 72 ? 1 : -1];
typedef char check_ResourceTaskState_state[(unsigned long)&((ResourceTaskState *)0)->state == 24 ? 1 : -1];
typedef char check_ResourceTaskState_flags[(unsigned long)&((ResourceTaskState *)0)->flags == 28 ? 1 : -1];
typedef char check_ResourceTaskState_argument[(unsigned long)&((ResourceTaskState *)0)->argument == 32 ? 1 : -1];
typedef char check_ResourceTaskState_output[(unsigned long)&((ResourceTaskState *)0)->output == 36 ? 1 : -1];
typedef char check_ResourceTaskState_textures[(unsigned long)&((ResourceTaskState *)0)->textures == 40 ? 1 : -1];
typedef char check_ResourceTaskState_models[(unsigned long)&((ResourceTaskState *)0)->models == 44 ? 1 : -1];
typedef char check_ResourceTaskState_motion[(unsigned long)&((ResourceTaskState *)0)->motion == 60 ? 1 : -1];
typedef char check_ResourceTaskState_prefix[sizeof(ResourceTaskState) == 64 ? 1 : -1];
typedef char check_ResourceResidentEntry_entries[(unsigned long)&((ResourceResidentEntry *)0)->entries == 0 ? 1 : -1];
typedef char check_ResourceResidentEntry_count[(unsigned long)&((ResourceResidentEntry *)0)->count == 4 ? 1 : -1];
typedef char check_ResourceResidentEntry_resident[(unsigned long)&((ResourceResidentEntry *)0)->resident == 8 ? 1 : -1];
typedef char check_ResourceResidentEntry_prefix[sizeof(ResourceResidentEntry) == 12 ? 1 : -1];
typedef char check_ResourceResidentView_data[(unsigned long)&((ResourceResidentView *)0)->data == 0 ? 1 : -1];
typedef char check_ResourceResidentView_prefix[sizeof(ResourceResidentView) == 4 ? 1 : -1];
#endif
