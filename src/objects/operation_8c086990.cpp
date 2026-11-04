#include "src/include/classes/TButterfly.h"
typedef struct S_g8c469cc0 S_g8c469cc0;
typedef struct S_g8c469cc0_0 S_g8c469cc0_0;
struct S_g8c469cc0 {
    S_g8c469cc0_0 *f00;
};
typedef struct ObjectData {

} ObjectData;
extern S_g8c469cc0 *g_8c469cc0;
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c086a7c(void *);
extern "C" void TButterfly_render_8c086990(TButterfly *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        call_8c3827d8((void *)(g_8c469cc0->f00));
        operation_8c086a7c((void *)o);
    }
}
