typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a60 S_g8c469a60;
typedef struct S_g8c469a60_42c S_g8c469a60_42c;
typedef struct S_g8c469a60_42c_8 S_g8c469a60_42c_8;
typedef struct S_g8c469a64 S_g8c469a64;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    Arg0_3c *f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0xc];
    int f54;
};
struct S_g8c469a60 {
    char unknown0[0x42c];
    S_g8c469a60_42c *f42c;
};
extern S_g8c469a60 *g_8c469a60;
extern S_g8c469a64 *g_8c469a64;
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
extern void call_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
extern void call_8c3a944a(void *);
void operation_8c07cb70(Object *o)
{
    int v1;
    int v2;
    if (1.0f > o->f44) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x810;
        v1 = (int)0xff00;
        v2 = (int)0x800;
        call_8c38c0e6(v1, v2);
        call_8c38c0f0((void *)(&o->f44));
        call_8c38ae68();
        call_8c3827d8(g_8c469a64);
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37df90(0, (void *)(o->f38));
        call_8c37dd28(0, (void *)(o->f3c));
        call_8c3aa716((void *)(*(S_g8c469a60_42c_8 **)((char *)((char *)g_8c469a60->f42c + 0x8) + (o->f54 << 4))));
        call_8c38ad10();
        call_8c38c0e6(0xff00, 0);
        g_8c575570 = (int)(g_8c46f560);
        return;
    }
    call_8c38ae68();
    call_8c3827d8(g_8c469a64);
    call_8c382a40((void *)(((char *)o + 0x20)));
    call_8c37df90(0, (void *)(o->f38));
    call_8c37dd28(0, (void *)(o->f3c));
    call_8c3a944a((void *)(*(S_g8c469a60_42c_8 **)((char *)((char *)g_8c469a60->f42c + 0x8) + (o->f54 << 4))));
    call_8c38ad10();
}
