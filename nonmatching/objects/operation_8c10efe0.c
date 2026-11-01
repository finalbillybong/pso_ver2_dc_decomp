/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10efe0
 * function: operation_8c10efe0
 * language: c
 * reference size: 648 bytes
 * compiled size: 620 bytes (-4.3%)
 * differing lines: 317 of 319 reference instruction lines
 * differing bytes: 553
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c10f268 S_c8c10f268;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x10];
    int f10;
    int f14;
};
extern int call_8c10f268(int, int, int, int);
extern void call_8c10efe0(int, int, int, int);
void operation_8c10efe0(int a0, int a1, int a2, int a3)
{
    Frame frame;
    int v1;
    int t1;
    int t11;
    int v10;
    int v20;
    int v72;
    int v32;
    int t2;
    int t10;
    int t14;
    int v11;
    int v24;
    int v29;
    int t5;
    int t4;
    int t7;
    int t6;
    int t13;
    int t15;
    int t9;
    int v5;
    int v14;
    int v28;
    int t3;
    int t8;
    int t12;
    if (a2 >= a3) {
        return;
    }
    t1 = call_8c10f268(a0, a1, a2, a3);
    v1 = (int)-1;
    if (a2 >= (t1 + v1)) {
    } else {
        t2 = call_8c10f268(a0, a1, a2, (int)(t1 + -1));
        if (!(a2 >= (t2 + -1))) {
            t3 = call_8c10f268(a0, a1, a2, (int)(t2 + -1));
            if (!(a2 >= (t3 + -1))) {
                S_c8c10f268 *self;
                S_c8c10f268 **home = &self;
                (void)home;
                t4 = call_8c10f268(a0, a1, a2, (int)(t3 + -1));
                self = (S_c8c10f268 *)t4;
                call_8c10efe0(a0, a1, a2, (int)(t4 + -1));
                call_8c10efe0(a0, a1, (int)((int)self + 1), (int)(t3 + -1));
            }
            v5 = (int)(t3 + 1);
            if (!(v5 >= (t2 + -1))) {
                t5 = call_8c10f268(a0, a1, v5, (int)(t2 + -1));
                call_8c10efe0(a0, a1, v5, (int)(t5 + -1));
                call_8c10efe0(a0, a1, (int)(t5 + 1), (int)(t2 + -1));
            }
        }
        v10 = (int)(t2 + 1);
        if (!(v10 >= (t1 + -1))) {
            t13 = call_8c10f268(a0, a1, v10, (int)(t1 + -1));
            v11 = (int)(t13 + -1);
            if (!(v10 >= v11)) {
                t6 = call_8c10f268(a0, a1, v10, v11);
                (&frame)->f10 = (int)(t6);
                call_8c10efe0(a0, a1, v10, (int)(t6 + -1));
                call_8c10efe0(a0, a1, (int)(++(&frame)->f10), v11);
            }
            v14 = (int)(t13 + 1);
            if (!(v14 >= (t1 + -1))) {
                t7 = call_8c10f268(a0, a1, v14, (int)(t1 + -1));
                call_8c10efe0(a0, a1, v14, (int)(t7 + -1));
                call_8c10efe0(a0, a1, (int)(t7 + 1), (int)(t1 + -1));
            }
        }
    }
    v72 = (int)(t1 + 1);
    if (v72 >= a3) {
        return;
    }
    t8 = call_8c10f268(a0, a1, v72, a3);
    if (!((t1 + 1) >= (t8 + -1))) {
        t14 = call_8c10f268(a0, a1, (int)(t1 + 1), (int)(t8 + -1));
        v20 = (int)(t14 + -1);
        if (!((t1 + 1) >= v20)) {
            t9 = call_8c10f268(a0, a1, (int)(t1 + 1), v20);
            (&frame)->f14 = (int)(t9);
            call_8c10efe0(a0, a1, (int)(t1 + 1), (int)(t9 + -1));
            call_8c10efe0(a0, a1, (int)(++(&frame)->f14), v20);
        }
        v24 = (int)(t14 + 1);
        if (!(v24 >= (t8 + -1))) {
            t10 = call_8c10f268(a0, a1, v24, (int)(t8 + -1));
            call_8c10efe0(a0, a1, v24, (int)(t10 + -1));
            call_8c10efe0(a0, a1, (int)(t10 + 1), (int)(t8 + -1));
        }
    }
    v28 = (int)(t8 + 1);
    if (!(v28 >= a3)) {
        t15 = call_8c10f268(a0, a1, v28, a3);
        v29 = (int)(t15 + -1);
        if (!(v28 >= v29)) {
            t11 = call_8c10f268(a0, a1, v28, v29);
            call_8c10efe0(a0, a1, v28, (int)(t11 + -1));
            call_8c10efe0(a0, a1, (int)(t11 + 1), v29);
        }
        v32 = (int)(t15 + 1);
        if (!(v32 >= a3)) {
            t12 = call_8c10f268(a0, a1, v32, a3);
            call_8c10efe0(a0, a1, v32, (int)(t12 + -1));
            call_8c10efe0(a0, a1, (int)(t12 + 1), a3);
        }
    }
}
