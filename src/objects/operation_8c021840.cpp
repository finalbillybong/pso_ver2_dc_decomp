#include "src/include/classes/TObjPlayer.h"
extern "C" void call_8c391cc4(void);
extern "C" void call_8c013c58(TObjPlayer *);
extern "C" int operation_8c02b1c4(void *);
extern "C" void call_8c02ae70(TObjPlayer *);
extern "C" void call_8c0219c4(TObjPlayer *, int);
extern "C" void operation_8c03bdcc(void *);
extern "C" void operation_8c026e24(void *);
extern "C" void notify_children_8c021c4c(void *);
extern "C" void operation_8c03be04(void *);
extern "C" void operation_8c013e74(void);
extern "C" void TObjPlayer_render_8c021840(TObjPlayer *o)
{
    int v1;
    int v2;
    int v4;
    int v3;
    float v6;
    int v7;
    int t1;
    int t2;
    if (((o->f34 & 0x2000000)) == 0) {
        v1 = (int)(o->fbc4 == 0);
        if (v1 != 0) {
            v2 = (int)(o->f350 & 4);
            v3 = (int)(v2 != 0);
            if (v3 != 0) {
                v4 = (int)(v2 != 0);
                if (v4 == 0) {
                    goto L_8c021940;
                }
                if (o->f30c != 0) {
                    goto L_8c021940;
                }
                v2 = (int)o->f30c;
            }
            t2 = o->v12(150.0f, 400.0f, 20.0f);
            v6 = (float)(float)t2;
            if (v6 != 0.0f) {
                o->f34 &= -0x8000001;
                call_8c391cc4();
                call_8c013c58(o);
                t1 = operation_8c02b1c4((void *)o);
                if (t1 != 0) {
                    v7 = (int)(o->f308 == 2);
                    if (v7 != 0) {
                        call_8c02ae70(o);
                        goto L_8c0218e0;
                    }
                }
                call_8c0219c4(o, (int)((int)v6));
L_8c0218e0:;
                operation_8c03bdcc((void *)(((char *)o + 0x58c)));
                operation_8c026e24((void *)o);
                notify_children_8c021c4c((void *)o);
                operation_8c03be04((void *)(((char *)o + 0x58c)));
                operation_8c013e74();
                return;
            }
            o->f34 |= 0x8000000;
            call_8c02ae70(o);
            operation_8c03bdcc((void *)(((char *)o + 0x58c)));
            operation_8c026e24((void *)o);
            notify_children_8c021c4c((void *)o);
            operation_8c03be04((void *)(((char *)o + 0x58c)));
            return;
        }
    }
L_8c021940:;
    call_8c02ae70(o);
    operation_8c03bdcc((void *)(((char *)o + 0x58c)));
    operation_8c026e24((void *)o);
    notify_children_8c021c4c((void *)o);
    operation_8c03be04((void *)(((char *)o + 0x58c)));
}
