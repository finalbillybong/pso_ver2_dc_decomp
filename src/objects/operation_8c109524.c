#include "src/include/classes/TObjEneGyaranzo.h"
typedef struct TObjEnemyCustom_p38c TObjEnemyCustom_p38c;
extern void operation_8c109bd0(void *);
extern int call_8c18e768(int, int);
extern void operation_8c109da0(void *);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEneGyaranzo_v70_8c109524(TObjEneGyaranzo *o)
{
    int v4;
    int t1;
    int t2;
    int t3;
    if (o->f30a != 4) {
        operation_8c109bd0((void *)o);
        v4 = 0;
        switch (o->f3c4) {
        case 0:
            t2 = call_8c18e768((int)(o->f198), 3);
            v4 = (int)(t2 >= o->f330);
            break;
        case 1:
            t3 = call_8c18e768((int)(o->f198), 4);
            v4 = (int)(t3 >= o->f330);
            break;
        }
        if (v4 != 0) {
            operation_8c109da0((void *)o);
        }
        o->f35a = o->f330;
        t1 = call_8c24e644(0x3000f, (void *)(o->f38c));
        play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        if (((o->f3a4 & 0x40000)) == 0) {
            if (o->f30a != 4) {
                o->f39c = o->f30a;
                o->f390 = 4;
            }
            o->f3a4 |= 1;
            return;
        }
        o->f34 &= -0x200201;
    }
}
