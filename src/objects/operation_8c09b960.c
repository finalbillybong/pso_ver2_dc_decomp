typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46eb3c S_L8c46eb3c;
typedef struct S_L8c46eb8c S_L8c46eb8c;
typedef struct S_L8c46ebdc S_L8c46ebdc;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_g8c46b064 S_g8c46b064;
typedef struct S_g8c46eb2c S_g8c46eb2c;
typedef struct S_g8c46ebe0 S_g8c46ebe0;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
struct Object {
    char unknown0[0x118];
    int f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
};
struct Arg0_130 {
    char unknown0[0xa];
    short f0a;
};
struct S_L8c46eb3c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c46eb2c {
    char unknown0[0xa];
    short f0a;
    short f0c;
};
struct S_L8c46eb8c {
    char unknown0[0x4];
    int f04;
};
struct S_L8c46ebdc {
    char unknown0[0x4];
    S_g8c46ebe0 *f04;
};
extern S_g8c460900 *g_8c460900;
extern S_g8c46b064 *g_8c46b064;
extern S_g8c46eb2c *g_8c46eb2c;
extern S_L8c46eb3c g_8c46eb3c;
extern S_L8c46eb8c g_8c46eb8c;
extern S_L8c46ebdc g_8c46ebdc;
extern int call_8c09bac4(void);
extern void call_8c38ae68(void);
extern void call_8c382a58(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void operation_8c01ce18(void *);
extern void call_8c38ade4(int);
extern void operation_8c0351e4(int, void *);
extern void call_8c38ad10(void);
extern void operation_8c02a998(int);
void operation_8c09b960(Object *o)
{
    int v1;
    int v4;
    int t1;
    t1 = call_8c09bac4();
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a58(0, (void *)(((char *)o + 0x3c)));
        call_8c37df90(0, g_8c46b064);
        call_8c3827d8((void *)(((char *)g_8c46eb2c + 0x3a0)));
        o->f130->f0a |= 0x80;
        operation_8c01ce18((void *)o);
        v1 = (int)*(int *)((char *)&g_8c46eb3c.f04 + (g_8c46eb2c->f0c << 3));
        if (v1 != 0) {
            call_8c38ade4((int)((int)o->f118 + 0xec0));
            call_8c3827d8((void *)(((char *)g_8c46eb2c + 0x138)));
            operation_8c0351e4(v1, g_8c460900);
            call_8c38ad10();
        }
        v4 = (int)*(int *)((char *)&g_8c46eb8c.f04 + (g_8c46eb2c->f0c << 3));
        if (v4 != 0) {
            call_8c38ade4((int)((int)o->f118 + 0xec0));
            call_8c3827d8((void *)(((char *)g_8c46eb2c + 0x138)));
            operation_8c02a998(v4);
            call_8c38ad10();
        }
        call_8c38ade4((int)((int)o->f118 + 0xe80));
        call_8c3827d8((void *)(((char *)g_8c46eb2c + 0x26c)));
        operation_8c02a998((int)(*(S_g8c46ebe0 **)((char *)&g_8c46ebdc.f04 + (g_8c46eb2c->f0a << 3))));
        call_8c38ad10();
        call_8c38ad10();
    }
}
