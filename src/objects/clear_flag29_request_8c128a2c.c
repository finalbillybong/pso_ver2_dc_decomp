typedef struct Actor { char unknown0[0x3a4]; int flags; } Actor;
extern void request_actor_mode_zero_8c128b44(Actor *);
void clear_flag29_request_8c128a2c(Actor *o)
{
    o->flags &= ~0x20000000;
    request_actor_mode_zero_8c128b44(o);
}
