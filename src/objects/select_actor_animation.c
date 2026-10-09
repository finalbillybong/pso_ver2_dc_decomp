typedef struct Descriptor { unsigned int unknown0, index; char unknown8[8]; } Descriptor;
typedef struct Slot { int unknown0; void *animation; } Slot;
typedef char check_tables[sizeof(Descriptor)==16 && sizeof(Slot)==8 && (unsigned long)&((Descriptor *)0)->index==4 && (unsigned long)&((Slot *)0)->animation==4 ? 1:-1];
typedef struct View { char unknown0[232]; unsigned int control; char unknown236[4]; short state, previous_state; char unknown244[28]; Descriptor *descriptors; Slot *table; char unknown280[24]; void *animation; } View;
typedef char check_layout[(unsigned long)&((View *)0)->control == 232 && (unsigned long)&((View *)0)->state == 240 && (unsigned long)&((View *)0)->previous_state == 242 && (unsigned long)&((View *)0)->descriptors == 272 && (unsigned long)&((View *)0)->table == 276 && (unsigned long)&((View *)0)->animation == 304 ? 1 : -1];
void select_actor_animation(View *o, int state) {
    o->animation = *(void **)((char *)&o->table->animation + (*(unsigned int *)((char *)&o->descriptors->index + ((unsigned int)state << 4)) << 3));
}
