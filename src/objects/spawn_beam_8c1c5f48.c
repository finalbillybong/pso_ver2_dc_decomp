typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Owner {
    char unknown0[0xe8];
    int team;
} Owner;
typedef struct Beam {
    int tag;
    unsigned short flags;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[2];
    short size;
    Vector3 start;
    Vector3 end;
    int team;
    int state;
} Beam;
extern void *allocate_block(void *, int);
extern void initialize_hierarchy_node(Beam *, void *);
extern void attach_task_8c1ab01c(void *, Beam *, void *, int);
void spawn_beam_8c1c5f48(void *parent, Owner *owner, Vector3 *start, Vector3 *end, int priority)
{
    Beam *beam;
    void *task;
    if (parent != 0 && start != 0 && end != 0 && owner != 0) {
        beam = allocate_block(*(void **)0x8c4d97e0, 0x40);
        if (beam) {
            initialize_hierarchy_node(beam, parent);
            beam->dispatch = (void *)0x8c2766a0;
            beam->tag = *(int *)0x8c328cb0;
            beam->size = 0x40;
            beam->end = *end;
            beam->start = *start;
            beam->team = owner->team;
            beam->state = 0;
            beam->flags |= 0x10;
        }
        if (beam) {
            task = allocate_block(*(void **)0x8c4d97e0, 0x2c);
            if (task) {
                attach_task_8c1ab01c(task, beam, (void *)0x8c1c6010, priority);
            }
        }
    }
}
