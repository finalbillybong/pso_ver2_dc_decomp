typedef struct Actor {
    char unknown0[0x30a];
    short state;
    char unknown30c[0x84];
    int next_state;
    char unknown394[8];
    int previous_state;
    char unknown3a0[4];
    int flags;
    char unknown3a8[0x38];
    int argument;
} Actor;
extern Actor *lookup_object_by_id(short);
void interrupt_state_8c13be60(int argument)
{
    Actor *actor = lookup_object_by_id(*(short *)0x8c313128);
    if (actor) {
        int state = actor->state;
        if (state != 10) {
            if (!(actor->flags & 1) && state != 10) {
                actor->previous_state = state;
                actor->next_state = 10;
            }
            actor->argument = argument;
        }
    }
}
