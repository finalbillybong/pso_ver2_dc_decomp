typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a60 S_g8c469a60;
typedef struct S_g8c469a60_42c S_g8c469a60_42c;
typedef struct S_g8c469a60_42c_48 S_g8c469a60_42c_48;
typedef struct S_g8c469a64 S_g8c469a64;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    char unknown3c[0x10];
    int f4c;
};
struct S_g8c469a60 {
    char unknown0[0x42c];
    S_g8c469a60_42c *f42c;
};
struct S_g8c469a60_42c {
    char unknown0[0x48];
    S_g8c469a60_42c_48 *f48;
};
extern S_g8c469a60 *g_8c469a60;
extern S_g8c469a64 *g_8c469a64;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c3827d8(void *);
extern void call_8c0cc8bc(void *);
extern void call_8c38ae68(void);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c38c0e6(int, int);
extern void call_8c3aa716(void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c0cd488(Object *o)
{
    call_8c3827d8(g_8c469a64);
    call_8c0cc8bc((void *)(&o->f2c));
    call_8c38ae68();
    call_8c3829bc(0, o->f2c, o->f38, o->f34);
    if (o->f4c != 0) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        g_8c575570 |= 0x800;
        call_8c38c0e6(0xff00, 0x100);
        call_8c3aa716((void *)(g_8c469a60->f42c->f48));
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        g_8c575570 = (int)(g_8c46f560);
    } else {
        call_8c3a944a((void *)(g_8c469a60->f42c->f48));
    }
    call_8c38ad10();
}
