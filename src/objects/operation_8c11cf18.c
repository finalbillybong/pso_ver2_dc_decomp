typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x3a4];
    int f3a4;
    char unknown3a8[0x4];
    Arg0_3ac *f3ac;
    char unknown3b0[0x48];
    int f3f8;
    char unknown3fc[0x4];
    Arg0_400 *f400;
    Arg0_404 *f404;
    char unknown408[0xc];
    int f414;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
struct S_vv1 {
    char unknown0[0x394];
    int f394;
};
struct S_vv6 {
    char unknown0[0x394];
    int f394;
};
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c15e880(void *);
void operation_8c11cf18(Object *o)
{
    S_vv1 *v1;
    int v3;
    S_vv6 *v6;
    int v8;
    o->f3ac->f18 = (unsigned int)o->f3ac->f18 >> 1 << 1;
    o->f3f8 = 0;
    o->f3a4 = 0x384;
    o->f414 = 1;
    call_8c05fbf8(0x3002e, (void *)(((char *)o + 0x3c)), 0, 0);
    v3 = (int)1;
    v1 = (S_vv1 *)o->f400;
    if (v1->f394 != 7 && v1->f394 != 8) {
        v3 = (int)0;
    }
    if (v3 == 0) {
        operation_8c15e880((void *)v1);
    }
    v6 = (S_vv6 *)o->f404;
    v8 = (int)1;
    if (v6->f394 != 7 && v6->f394 != 8) {
        v8 = (int)0;
    }
    if (v8 == 0) {
        operation_8c15e880((void *)v6);
    }
}
