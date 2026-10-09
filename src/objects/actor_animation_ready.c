typedef struct View { char unknown0[232]; unsigned int control; char unknown236[4]; short state, previous_state; char unknown244[28]; void *descriptors, *table; char unknown280[24]; void *animation; } View;
typedef char check_layout[(unsigned long)&((View *)0)->control == 232 && (unsigned long)&((View *)0)->state == 240 && (unsigned long)&((View *)0)->previous_state == 242 && (unsigned long)&((View *)0)->descriptors == 272 && (unsigned long)&((View *)0)->table == 276 && (unsigned long)&((View *)0)->animation == 304 ? 1 : -1];
int actor_animation_ready(View *o) {
    if (((o->control & 4) == 0 || (o->control & 1) != 0) && o->state == o->previous_state)
        return 1;
    return 0;
}
