typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct S_vv28 S_vv28;
typedef struct S_vv28_20 S_vv28_20;
typedef struct S_vv28_20_0 S_vv28_20_0;
typedef struct S_vv28_24 S_vv28_24;
typedef struct S_vv28_24_0 S_vv28_24_0;
typedef struct S_vv28_28 S_vv28_28;
struct Arg3 {
    char unknown0[0x1c];
    char f1c;
    char unknown1d[0x14];
    char f31;
    char f32;
    char f33;
    char unknown34[0xa];
    short f3e;
    short f40;
};
struct Object {
    int tag;
};
struct S_vv28 {
    char unknown0[0x20];
    S_vv28_20 *f20;
    S_vv28_24 *f24;
    S_vv28_28 *f28;
};
struct Arg1 {
    int f00;
};
struct Arg2 {
    int f00;
};
extern char g_8c2f5b38[];
extern int operation_8c01c25c(void);
extern void call_8c034b20(Object *, Arg3 *, S_vv28 *, void *);
void operation_8c034d28(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    int v5;
    S_vv28 *v28;
    int t1;
    if (((a3->f32 & 0xa)) == 0) {
        v5 = (int)a3->f31;
    } else {
        if (a3->f33 <= 0 || a3->f1c < 0 || a3->f1c >= 5) {
            v5 = (int)a3->f31;
            goto L_8c034d9a;
        }
        t1 = operation_8c01c25c();
        if (t1 != 0x10) {
            v5 = (int)a3->f31;
        } else {
            v5 = (int)(a3->f1c + 9);
        }
    }
L_8c034d9a:;
    v28 = (S_vv28 *)(v5 * 0x2c + g_8c2f5b38);
    o->tag = 0;
    if (v28->f20 != 0 && *(int *)((char *)((char *)v28->f20 + 0x0) + (a3->f40 << 2)) != 0) {
        call_8c034b20(o, a3, v28, (void *)(*(S_vv28_20_0 **)((char *)((char *)v28->f20 + 0x0) + (a3->f40 << 2))));
        o->tag = 1;
    }
    a1->f00 = 0;
    if (v28->f24 != 0 && *(int *)((char *)((char *)v28->f24 + 0x0) + (a3->f3e << 2)) != 0) {
        call_8c034b20((Object *)a1, a3, v28, (void *)(*(S_vv28_24_0 **)((char *)((char *)v28->f24 + 0x0) + (a3->f3e << 2))));
        a1->f00 = 1;
    }
    call_8c034b20((Object *)a2, a3, v28, (void *)(v28->f28));
    a2->f00 = 1;
}
