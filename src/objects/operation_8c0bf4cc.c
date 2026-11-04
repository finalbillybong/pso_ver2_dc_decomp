#include "src/include/classes/TObjEneSaver.h"
typedef struct TObjEneSaver_pdc TObjEneSaver_pdc;
struct TObjEneSaver_pdc {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
void TObjEneSaver_v71_8c0bf4cc(TObjEneSaver *o)
{
    float t1;
    if (o->f30a != 0xa) {
        o->f30a = 0xa;
        o->f30c = 0;
        t1 = object_random_fraction((void *)o);
        if (0.5f > t1) {
            o->ff0 = 9;
        } else {
            o->ff0 = 0xa;
        }
        o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
    }
}
