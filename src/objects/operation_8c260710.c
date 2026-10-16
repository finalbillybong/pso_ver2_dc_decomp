typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c051d18 S_c8c051d18;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct S_c8c051d18 {
    char f00;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c41cba0[];
extern S_c8c051d18 *operation_8c051d18(void *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c05fbf8(int, int, int, int);
extern void request_resource_release(void *);
extern void call_8c18de08(S_c8c051d18 *);
void operation_8c260710(Object *o)
{
    char v1;
    S_vv9 *v9;
    int t1;
    S_c8c051d18 *t2;
    t2 = operation_8c051d18((void *)(o->f30));
    v1 = (char)t2->f00;
    if ((char)v1 == 0 && ((*(int *)(g_8c41cba0 + 0x28) & 2)) != 0) {
        goto L_8c260748;
    }
    if ((char)v1 == 0) {
        t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t1 != 0) {
L_8c260748:;
            call_8c05fbf8(0x50016, 0, 0, 0);
            if (o->f28 != 0) {
                request_resource_release((void *)(o->f28));
                o->f28 = (Arg0_28 *)0;
            }
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
            }
            if (o->f30 != 0) {
                v9 = (S_vv9 *)o->f30;
                v9->f04 |= 1;
                o->f30 = (Arg0_30 *)0;
            }
            o->f20 = 3;
        }
    }
    call_8c18de08(t2);
}
