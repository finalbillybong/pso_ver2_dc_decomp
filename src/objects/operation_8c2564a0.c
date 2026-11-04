#include "src/include/classes/TOSymbolchatColli.h"
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern int operation_8c03d338(void);
extern float signed_sqrt_8c37f6c0(float);
extern void operation_8c0c5478(void *, Frame *, float);
void TOSymbolchatColli_render_8c2564a0(TOSymbolchatColli *o)
{
    Frame frame;
    int t1;
    float t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        (&frame)->f00 = 0.3f;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.3f;
        (&frame)->f0c = 0.3f;
        t2 = signed_sqrt_8c37f6c0(o->f350);
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (Frame *)((&frame)), t2);
    }
}
