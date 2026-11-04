#include "src/include/classes/TObjParticle.h"
typedef struct TObjParticle_p94 TObjParticle_p94;
extern int get_current_area_8c032b10(void);
extern float squared_distance_xyz(void *, void *);
extern void call_8c0a7608(void *, void *);
extern void set_effect_words(void *, void *);
void TObjParticle_update_8c0806ec(TObjParticle *o)
{
    float v2;
    int t1;
    float t2;
    t1 = get_current_area_8c032b10();
    if (t1 == 0xe) {
        v2 = (float)2250000.0f;
    } else {
        v2 = (float)40000.0f;
    }
    t2 = squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(*(int *)0x8c46ee80 + 0x90));
    if (t2 > v2) {
        o->f04 |= 1;
        return;
    }
    if (o->f94 != 0) {
        call_8c0a7608((void *)(o->f94), (void *)(((char *)o + 0x3c)));
        set_effect_words((void *)(o->f94), (void *)(((char *)o + 0x60)));
    }
}
