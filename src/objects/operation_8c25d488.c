#include "src/include/classes/TItemReverseTechPart2.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemReverseTechPart2_p154 TItemReverseTechPart2_p154;
extern int call_8c18e8a0(void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c25d634(int, TItemReverseTechPart2 *, void *);
void TItemReverseTechPart2_update_8c25d488(TItemReverseTechPart2 *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = call_8c18e8a0((void *)(o->f154), 0x168);
    if (t1 == 0) {
        t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t2 != 0) {
            call_8c25d634(t2, o, (void *)(((char *)o + 0x78)));
        }
        t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t3 != 0) {
            call_8c25d634(t3, o, (void *)(((char *)o + 0xa4)));
        }
    }
    if (0xc > o->f158) {
        if ((int)(o->f154) >= 0x78) {
            t4 = call_8c18e8a0((void *)((int)o->f154 + -0x78), 0x2d0);
            if (t4 == 0) {
                o->f2c = 0xc;
                t5 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t5 != 0) {
                    call_8c25d634(t5, o, (void *)(((char *)o + 0x20)));
                }
                t6 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t6 != 0) {
                    call_8c25d634(t6, o, (void *)(((char *)o + 0x4c)));
                }
                o->fdc = (int)(o->f158);
                t7 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t7 != 0) {
                    call_8c25d634(t7, o, (void *)(((char *)o + 0xd0)));
                }
                o->f158 += 1;
            }
        }
        if (!((int)(o->f154) >= 0x1e0)) {
            goto L_8c25d5e6;
        }
        t8 = call_8c18e8a0((void *)((int)o->f154 + -0x1e0), 0x2d0);
        if (t8 != 0) {
            goto L_8c25d5e6;
        }
        o->f2c = 0xd;
        t9 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t9 != 0) {
            call_8c25d634(t9, o, (void *)(((char *)o + 0x20)));
        }
        t10 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t10 != 0) {
            call_8c25d634(t10, o, (void *)(((char *)o + 0x4c)));
        }
        o->f108 = (int)(o->f158);
        t11 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t11 != 0) {
            call_8c25d634(t11, o, (void *)(((char *)o + 0xfc)));
        }
        o->f158 += 1;
    } else {
        if (o->f14 == 0) {
            o->f04 |= 1;
            return;
        }
    }
L_8c25d5e6:;
    o->f154 = (TItemReverseTechPart2_p154 *)((int)o->f154 + 1);
}
