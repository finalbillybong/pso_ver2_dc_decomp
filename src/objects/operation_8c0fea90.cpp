#include "src/include/classes/TOMineTrap.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
};
extern int g_8c30ab10;
extern "C" void call_8c0feb08(TOMineTrap *, int);
extern "C" float TOMineTrap_v24_8c0fea90(TOMineTrap *o, Arg1 *a1)
{
    int v1;
    char *v2;
    switch (o->f30a) {
    case 0:
    case 1:
    case 2:
        if (a1 != 0) {
            v1 = (int)(a1->f00 == g_8c30ab10);
            if (v1 != 0) {
                o->v97();
                v2 = (char *)o->f8c;
                if (!((int)(v2) > 0xf)) {
                    goto L_8c0feaec;
                }
                o->f8c = 0xf;
                goto L_8c0feaec;
            }
        }
    case 3:
        o->f30a = 4;
        call_8c0feb08(o, 2);
    }
L_8c0feaec:;
    return 0.0f;
}
