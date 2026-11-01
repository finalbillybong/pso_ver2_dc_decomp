#include "src/include/effect_controller.h"
#include "src/include/controller_flags.h"

#define heap_alloc_8c122700 ((void *(*)(void *, unsigned int))0x8c122700)
extern void *construct_b_at(void *, EffectController *, void *, int);
extern void *construct_a_at(void *, EffectController *, void *, int);
extern int play_se_8c05fbf8(unsigned int, void *, int, unsigned int);
extern void notice_at(void *, int, int);
#define game_ADXT_StartFname_wrapper_8c1005bc ((void (*)(char *))0x8c1005bc)

void update_effect_controller_zero(EffectController *object) {
    switch (object->ticks) {
    case 0: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_a_at(child, object, (void *)0x8c2e1fd8, 5);
        play_se_8c05fbf8(0x40010, 0, 0, 0);
        break;
    }
    case 30: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_a_at(child, object, (void *)0x8c2e1fd8, 4);
        play_se_8c05fbf8(0x40010, 0, 0, 0);
        break;
    }
    case 60: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_a_at(child, object, (void *)0x8c2e1fd8, 3);
        play_se_8c05fbf8(0x40010, 0, 0, 0);
        break;
    }
    case 90: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_a_at(child, object, (void *)0x8c2e1fd8, 2);
        play_se_8c05fbf8(0x40010, 0, 0, 0);
        break;
    }
    case 120: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_a_at(child, object, (void *)0x8c2e1fd8, 1);
        play_se_8c05fbf8(0x40010, 0, 0, 0);
        break;
    }
    case 150: {
        void *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 52);
        if (child) construct_b_at(child, object, (void *)0x8c2e1fd8, 0);
        break;
    }
    case 160: {
        notice_at((void *)0x8c33f67c, 497, 192);
        {
            char *text = (char *)0x8c33f688;
            game_ADXT_StartFname_wrapper_8c1005bc(text + 16);
        }
        break;
    }
    case 180: ((ControllerFlags *)object)->flags |= 1; break;
    }
}
