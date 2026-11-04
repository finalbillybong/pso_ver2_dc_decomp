#include "src/include/classes/TBoss3Volopt.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern "C" int get_game_mode_8c01c25c(void);
extern "C" int call_8c0c349c(void);
extern "C" void call_8c138b48(TBoss3Volopt *);
extern "C" int operation_8c139d9c(TBoss3Volopt *);
extern "C" void call_8c13a424(void);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c206e2c(void *);
extern "C" void call_8c05fd7c(int, TBoss3Volopt *, int, int, int);
extern "C" void operation_8c1399fc(TBoss3Volopt *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    switch (o->f398) {
    case -1:
    case 2:
        break;
    case 0:
        o->f398 = 1;
    case 1:
        t1 = get_game_mode_8c01c25c();
        if (t1 == 0x10) {
            t2 = call_8c0c349c();
            if (t2 == 0) {
                goto L_8c139a46;
            }
            call_8c138b48(o);
        } else {
            call_8c138b48(o);
        }
L_8c139a46:;
        t3 = operation_8c139d9c(o);
        if (t3 != 0) {
            call_8c13a424();
            o->f34 |= 0x800;
            o->v81(0);
            o->f390 = 5;
            t4 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
            if (t4 != 0) {
                operation_8c206e2c((void *)t4);
            }
        }
        call_8c05fd7c(0x30001, o, 0, 0, 0);
    }
}
