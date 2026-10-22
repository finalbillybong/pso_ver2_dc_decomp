typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_2c0 S_c8c021ef8_2c0;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg2_0 Arg2_0;
typedef struct S_vv22 S_vv22;
typedef struct S_vv22_0 S_vv22_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
struct Object {
    char unknown0[0x34];
    int f34;
};
struct S_vv5 {
    S_vv5_0 *f00;
};
struct Frame {
    int f04;
    char unknown8[0xc];
    int f14[4];
};
struct Arg2 {
    Arg2_0 *f00;
};
struct S_vv22 {
    S_vv22_0 *f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_low_id(int);
extern void request_resource_release(void *);
extern int operation_8c168164(void *, int);
extern int call_8c21e3b8(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c21e148(int, Object *, int, int, int);
extern void operation_8c0dc610(void *, float);
extern void operation_8c21e2c0(void *, int);
extern void operation_8c21e304(void *, int);
extern int call_8c21e328(void *);
void operation_8c0e30c8(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    int v2;
    int t6;
    int v8;
    int v9;
    int v10;
    int v23;
    int t3;
    S_vv5 *v5;
    int t1;
    int t2;
    S_vv22 *v22;
    int v4;
    int t4;
    int t5;
    int m1;
    int k;
    int v11;
    S_c8c021ef8 *self;
    S_c8c021ef8 **home = &self;
    (void)home;
    t1 = lookup_low_id(a3);
    self = (S_c8c021ef8 *)t1;
    if (t1 != 0) {
        v2 = !(o->f34 & 1);
        if (v2 == 0) {
            goto L_8c0e311a;
        }
    }
    v4 = (int)0;
    v5 = (S_vv5 *)a2;
    while (5 > v4) {
        if (v5->f00 != 0) {
            request_resource_release((void *)(v5->f00));
            v5->f00 = (S_vv5_0 *)0;
        }
        v4 = (int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 4);
    }
    return;
L_8c0e311a:;
    v8 = (int)0;
    t2 = operation_8c168164((void *)(&(&frame)->f04), a3);
    if ((unsigned int)1 >= (unsigned int)(t2 + -1)) {
        v9 = (int)0;
        m1 = -1;
        goto L_test;
L_body:;
        v10 = (int)*(int *)((char *)frame.f14 + k);
        if (v10 == a3) {
            goto L_8c0e3152;
        }
        v9 = (int)(v9 + 1);
L_test:;
        k = v9 << 2;
        v11 = *(int *)((char *)&(&frame)->f04 + k);
        if (v11 != m1) {
            goto L_body;
        }
L_8c0e3152:;
        t4 = call_8c21e3b8(v9);
        if (a2->f00 == 0) {
            t3 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
            if (t3 != 0) {
                call_8c21e148(t3, o, a1, 0, t4);
            }
            a2->f00 = (Arg2_0 *)t3;
            operation_8c0dc610((void *)(a2->f00), 200.0f);
        } else {
            operation_8c21e2c0((void *)(a2->f00), 0);
            operation_8c21e304((void *)(a2->f00), t4);
        }
        v8 = (int)(v8 + 1);
    } else {
        if (a2->f00 != 0) {
            request_resource_release((void *)(a2->f00));
            a2->f00 = (Arg2_0 *)0;
        }
    }
    v22 = (S_vv22 *)((char *)a2 + 0x4);
    v23 = (int)0;
    while (4 > v23) {
        if (*(int *)((char *)((char *)self + 0x2c0) + (v23 * 0xc)) == 0) {
            if (v22->f00 == 0) {
                goto L_8c0e3238;
            }
            request_resource_release((void *)(v22->f00));
            v22->f00 = (S_vv22_0 *)0;
        } else {
            t6 = call_8c21e328((void *)(*(S_c8c021ef8_2c0 **)((char *)((char *)self + 0x2c0) + (v23 * 0xc))));
            if (v22->f00 == 0) {
                t5 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
                if (t5 != 0) {
                    call_8c21e148(t5, o, a1, v8, t6);
                }
                v22->f00 = (S_vv22_0 *)t5;
                operation_8c0dc610((void *)(v22->f00), (float)v23 * 10.0f + 210.0f);
            } else {
                operation_8c21e2c0((void *)(v22->f00), v8);
                operation_8c21e304((void *)(v22->f00), t6);
            }
            v8 = (int)(v8 + 1);
        }
L_8c0e3238:;
        v23 = (int)(v23 + 1);
        v22 = (S_vv22 *)((char *)v22 + 4);
    }
}
