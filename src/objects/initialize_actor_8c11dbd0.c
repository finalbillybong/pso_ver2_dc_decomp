typedef struct Actor {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[2];
    short size;
    char unknown20[0x14];
    int flags;
    char unknown38[0x284];
    int mode_flags;
    char unknown2c0[0xe4];
    unsigned int status;
    char unknown3a8[4];
    char state[0x28];
    int counter;
    float speed;
} Actor;
extern void initialize_actor_mode_state(Actor *);
extern void initialize_state_8c0fbf7c(void *);
Actor *initialize_actor_8c11dbd0(Actor *o)
{
    Actor **self = &o;
    (void)self;
    initialize_actor_mode_state(o);
    o->dispatch = (void *)0x8c26a220;
    initialize_state_8c0fbf7c(o->state);
    o->tag = *(int *)0x8c3114ec;
    o->size = 0x3e0;
    o->mode_flags |= 8;
    o->flags |= 0x40000;
    o->counter = 0;
    o->speed = 0.0f;
    {
        unsigned int *bits = &o->status;
        *bits &= ~0x10000;
    }
    o->status |= 0x20000;
    return o;
}
