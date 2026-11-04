#include "src/include/classes/TTecPlayerInfluence.h"
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c305294;
extern void interpolate_effect_vector(void *, void *, float);
extern void operation_8c0c5478(void *, void *, float);
void TTecPlayerInfluence_render_8c0b6d30(TTecPlayerInfluence *o)
{
    Frame frame;
    {
        Vector3 *p_ = (Vector3 *)&g_8c305294;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    interpolate_effect_vector((void *)(&o->f40), (void *)(&frame), 2.7f);
    operation_8c0c5478((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x30)), o->f40);
}
