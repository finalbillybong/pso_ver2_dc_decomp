typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_x22608_sa8 S_x22608_sa8;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x4];
    char f20;
    char f21;
    char f22;
    char f23;
    char unknown24[0x8];
    int f2c;
    int f30;
    int f34;
    float f38;
    char unknown3c[0x18];
    int f54;
    int f58;
};
struct S_x22608_sa8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv13 {
    char unknown0[0x14];
    int f14;
};
extern void operation_8c16b398(void *, int, void *, void *, int);
extern int call_8c18e768(int, int);
extern int operation_8c01c25c(void);
extern int operation_8c02b2a4(void);
extern void call_8c16b280(int);
extern int call_8c181dec(void);
Object *operation_8c16b970(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    Object **home = &o;
    int v3;
    int v10;
    int v12;
    S_vv13 *v13;
    int v15;
    int v14;
    int v16;
    int t1;
    int v21;
    int t2;
    int t3;
    int t4;
    (void)home;
    operation_8c16b398((void *)o, a1, (void *)a3, (void *)a4, a5);
    o->dispatch = (void *)0x8c270150;
    o->f58 = a2;
    o->f21 = 1;
    o->f22 = 0;
    v21 = o->f21;
    if (v21 == 0) {
        o->f23 = 1;
    } else {
        o->f23 = v21 << 2;
    }
    {
        Object *base = o;
        t1 = call_8c18e768(0x10000, (int)(base->f23));
        base->f30 = (int)(t1);
    }
    o->f34 = (int)(o->f2c);
    o->f38 = (float)o->f21 * 6.0f;
    t2 = operation_8c01c25c();
    if (t2 != 0xf) {
        t3 = operation_8c02b2a4();
        if (t3 == 0) {
            if (*(int *)0x8c4dc800 != 1) {
                goto L_8c16ba1e;
            }
            v3 = (int)(*(int *)0x8c510ba0 != 0);
            if (v3 == 0) {
                goto L_8c16ba1e;
            }
        }
    }
    v10 = (int)0;
    goto L_8c16ba22;
L_8c16ba1e:;
    v10 = (int)*(int *)0x8c4dbb1c;
L_8c16ba22:;
    if (v10 != 0) {
        v12 = (int)((S_x22608_sa8 *)((char *)(int)o->f58 + o->f20 * 0x1c + 0xa8))->f04;
        v13 = (S_vv13 *)(*(int *)0x8c4db9e0 + 4);
        v14 = (int)0;
        while (0x1e > v14) {
            v15 = (int)v13->f14;
            if (v15 == v12) {
                v16 = (int)1;
                goto L_8c16ba62;
            }
            v13 = (S_vv13 *)((char *)v13 + 28);
            v14 = (int)(v14 + 1);
        }
        v16 = (int)0;
L_8c16ba62:;
        if (v16 != 0) {
            call_8c16b280(v12);
            t4 = call_8c181dec();
            if (t4 != 0) {
                o->f04 |= 1;
                return o;
            }
            o->f54 = 1;
        }
    }
    return o;
}
