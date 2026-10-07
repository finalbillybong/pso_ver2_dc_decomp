#include "src/include/effect_controller.h"
#include "src/include/controller_flags.h"

#define allocate_at ((void *(*)(void *, unsigned int))0x8c122700)
extern void *construct_b_at(void *, EffectController *, void *, int);
extern void display_at(char *, int);

void update_effect_controller_one(EffectController *object) {
    switch (object->ticks) {
    case 0: {
        void *child = allocate_at(*(void **)0x8c4d97e0, 52);
        if (child) construct_b_at(child, object, (void *)0x8c2e1fe0, 1);
        {
            char *text = (char *)0x8c33f688;
            display_at(text + 26, 150);
        }
        break;
    }
    case 30: ((ControllerFlags *)object)->flags |= 1; break;
    }
}
