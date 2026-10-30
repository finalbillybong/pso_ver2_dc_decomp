typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_34_0 Arg0_34_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv1 S_vv1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv14 S_vv14;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    char unknown40[0x4];
    Arg0_44 *f44;
    Arg0_48 *f48;
};
struct S_vv1 {
    char f00;
    char unknown1[0x3];
    float f04;
};
struct S_vv3 {
    float f00;
};
struct S_vv12 {
    char f00;
    char unknown1[0x3];
    int f04;
};
struct S_vv14 {
    int f00;
};
struct Arg0_34 {
    char unknown0[0x64];
    int f64;
};
extern void call_8c38ae68(void);
extern void call_8c384610(int);
extern void call_8c38a714(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38ad10(void);
extern void operation_8c0bbc90(void *, int);
void operation_8c0bc414(Object *o)
{
    S_vv1 *v1;
    S_vv3 *v3;
    int v2;
    S_vv12 *v12;
    S_vv14 *v14;
    int v13;
    if (o->f48 != 0) {
        int v2;
        call_8c38ae68();
        call_8c384610(0);
        v1 = (S_vv1 *)o->f3c;
        v3 = (S_vv3 *)o->f48;
        v2 = (int)0x118;
        while (v1->f00 >= 0) {
            v3->f00 = v1->f04;
            call_8c38ae68();
            call_8c38a714(0, (void *)(& *(int *)((char *)((char *)*(Arg0_34_0 **)((char *)((char *)o->f34 + 0x0) + (v2)) + 0x0) + (v1->f00 << 6))));
            call_8c3be280(0, (void *)((int)v1 + 8), (void *)((int)v3 + 4));
            call_8c38ad10();
            v1 = (S_vv1 *)((char *)v1 + 20);
            v3 = (S_vv3 *)((char *)v3 + 16);
        }
        call_8c38ad10();
    }
    call_8c38ae68();
    call_8c384610(0);
    v12 = (S_vv12 *)o->f38;
    v14 = (S_vv14 *)o->f44;
    v13 = (int)0x118;
    while (v12->f00 >= 0) {
        v14->f00 = o->f34->f64 + v12->f04;
        call_8c38ae68();
        call_8c38a714(0, (void *)(& *(int *)((char *)((char *)*(Arg0_34_0 **)((char *)((char *)o->f34 + 0x0) + (v13)) + 0x0) + (v12->f00 << 6))));
        call_8c3be280(0, (void *)((int)v12 + 8), (void *)((int)v14 + 4));
        call_8c38ad10();
        v12 = (S_vv12 *)((char *)v12 + 24);
        v14 = (S_vv14 *)((char *)v14 + 16);
    }
    call_8c38ad10();
    operation_8c0bbc90((void *)o, (int)((void *)0x8c305980));
}
