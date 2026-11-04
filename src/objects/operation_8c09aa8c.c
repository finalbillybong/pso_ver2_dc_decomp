#include "src/include/classes/TObjCMHexTile.h"
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern void operation_1959b0(int, void *, void *, float, float);
void TObjCMHexTile_render_8c09aa8c(TObjCMHexTile *o)
{
    Frame frame;
    float v1;
    v1 = o->f50 * 0.2f;
    (&frame)->f08 = (&frame)->f0c = o->f4c * 0.5f;
    (&frame)->f00 = o->f40 + o->f38;
    (&frame)->f04 = o->f44 + o->f3c;
    operation_1959b0(0x19, (void *)(&frame), (void *)(&(&frame)->f08), -1.09f, v1);
}
