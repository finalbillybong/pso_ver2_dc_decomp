typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct S_g8c4e2288 S_g8c4e2288;
typedef struct S_g8c4e228c S_g8c4e228c;
typedef struct Object Object;
typedef struct S_vv21 S_vv21;
typedef struct S_vv25 S_vv25;
typedef struct S_vv29 S_vv29;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x37c];
    int f398;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct S_vv25 {
    char unknown0[0x4];
    short f04;
};
struct S_vv29 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c09e6d0(void *);
extern void operation_8c1ada78(Object *);
extern void call_8c0a21a4(void);
extern int call_8c01c25c(void);
extern void clear_global_render_resources(void);
extern void operation_8c0120f4(void *, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c1ad790(Object *o, int a1)
{
    S_vv21 *v21;
    S_vv25 *v25;
    S_vv29 *v29;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2748f4;
        switch (o->f398) {
        case 10:
        case 14:
        case 15:
            operation_8c09e6d0((void *)o);
        }
        operation_8c1ada78(o);
        call_8c0a21a4();
        t1 = call_8c01c25c();
        if (t1 != 0x10) {
            clear_global_render_resources();
        }
        if (*(int *)0x8c4e2284 != 0) {
            v21 = (S_vv21 *)*(S_g8c4e2284 **)0x8c4e2284;
            v21->f04 |= 1;
            *(int *)0x8c4e2284 = 0;
        }
        if (*(int *)0x8c4e2288 != 0) {
            v25 = (S_vv25 *)*(S_g8c4e2288 **)0x8c4e2288;
            v25->f04 |= 1;
            *(int *)0x8c4e2288 = 0;
        }
        if (*(int *)0x8c4e228c != 0) {
            v29 = (S_vv29 *)*(S_g8c4e228c **)0x8c4e228c;
            v29->f04 |= 1;
            *(int *)0x8c4e228c = 0;
        }
        *(int *)0x8c4e22dc = 0;
        operation_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
