#include "src/include/classes/TItemWpnMagicBook.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct TItemWpnMagicBook_p13c TItemWpnMagicBook_p13c;
struct TItemWpnMagicBook_p13c {
    char unknown0[0x310];
    int f310;
};
extern "C" void operation_8c1c577c(int, int, int, int);
extern "C" int call_8c1aaabc(void *);
extern "C" void TTecJelin_create_8c0b3b80(void *, void *, void *, void *);
extern "C" void TTecZarua_create_8c0bada4(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnMagicBook_v49_8c23e1b4(TItemWpnMagicBook *o)
{
    int v1;
    void *v7;
    void *v8;
    int t1;
    int t2;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        operation_8c1c577c((int)(*(S_g8c44be9c **)0x8c44be9c), (int)o, 2, 1);
    }
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        if (o->f214 == 0) {
            v7 = (void *)((char *)o->f13c + 0x3c);
            TTecJelin_create_8c0b3b80((void *)(o->f13c), (void *)v7, (void *)v7, (void *)4);
        } else {
            v8 = (void *)((char *)o->f13c + 0x3c);
            TTecZarua_create_8c0bada4((void *)(o->f13c), (void *)v8, (void *)v8, (void *)4);
        }
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
