typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3032d8 S_L8c3032d8;
typedef struct S_L8c3032d8_8 S_L8c3032d8_8;
typedef struct S_L8c3032d8_8_98 S_L8c3032d8_8_98;
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_b4 S_g8c46ee80_b4;
typedef struct S_vv11 S_vv11;
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0xc];
    S_g8c46ee80_b4 *fb4;
};
struct S_L8c46ee84 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_L8c3032d8 {
    char unknown0[0x8];
    S_L8c3032d8_8 *f08;
};
struct S_L8c3032d8_8 {
    char unknown0[0x98];
    S_L8c3032d8_8_98 *f98;
};
struct S_vv11 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
extern S_g8c46ee80 *g_8c46ee80;
extern float g_8c57555c;
extern float g_8c575560;
extern S_L8c3032d8 g_8c3032d8;
extern S_L8c46ee84 g_8c46ee84;
extern S_L8c46efc8 g_8c46efc8;
extern char g_8c46efd4[];
extern void call_8c382a24(void *, float, float, float);
extern void call_8c38abb8(void *, float, float, float);
extern void call_8c0a4dd4(Frame *, void *, void *);
extern void call_8c37e76c(void *, void *);
extern void call_8c37e990(void *);
extern void call_8c37e4c0(void *);
extern void call_8c380c5a(int, void *);
void operation_8c0a550c(void)
{
    Frame frame;
    S_vv11 *v11;
    int v4;
    int v6;
    call_8c382a24((void *)((void *)&g_8c46ee84), g_8c46ee80->f90 - (&g_8c46ee84)->f00, g_8c46ee80->f94 - (&g_8c46ee84)->f04, g_8c46ee80->f98 - (&g_8c46ee84)->f08);
    if ((&g_8c3032d8)->f08 != 0) {
        v11 = (S_vv11 *)(&g_8c3032d8)->f08->f98;
        if (v11 == 0) {
            v6 = (int)1;
            goto L_8c0a5572;
        }
        if (((v11->f04 & 4)) == 0 && ((v11->f04 & 0x40)) == 0) {
            goto L_8c0a5570;
        }
        v4 = (int)0;
    } else {
L_8c0a5570:;
        v4 = (int)1;
    }
    v6 = (int)v4;
L_8c0a5572:;
    if (v6 != 0) {
        call_8c38abb8((void *)((void *)&g_8c46ee84), g_8c46ee80->f9c, g_8c46ee80->fa0, g_8c46ee80->fa4);
    }
    (&frame)->f00 = (&g_8c46ee84)->f0c;
    (&frame)->f04 = (&g_8c46ee84)->f10;
    (&frame)->f08 = (&g_8c46ee84)->f14;
    call_8c0a4dd4((Frame *)((&frame)), (void *)(((char *)g_8c46ee80 + 0xa8)), (void *)(((char *)g_8c46ee80 + 0xac)));
    if ((((&g_8c46efc8)->f08 & 0x40)) != 0) {
        call_8c37e76c((void *)((void *)&g_8c46ee84), (void *)(g_8c46ee80->fb4));
    }
    if ((((&g_8c46efc8)->f08 & 0x200)) != 0) {
        call_8c37e990((void *)((void *)g_8c46efd4));
        g_8c57555c = 1.0f;
        g_8c575560 = 1.0f;
        call_8c37e4c0((void *)((void *)&g_8c46ee84));
        g_8c57555c = *(float *)(g_8c46efd4 + 0x24);
        g_8c575560 = *(float *)(g_8c46efd4 + 0x28);
        call_8c380c5a(2, (void *)((g_8c46efd4 + 0x14)));
        return;
    }
    call_8c37e4c0((void *)((void *)&g_8c46ee84));
}
