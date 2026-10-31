typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x13504 S_x13504;
typedef struct S_x53568 S_x53568;
typedef struct S_x72048 S_x72048;
typedef struct S_x85728 S_x85728;
typedef struct S_x90336 S_x90336;
typedef struct S_x91296 S_x91296;
typedef struct Block_frame_24 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_24;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    float f18;
    float f1c;
    float f20;
    Block_frame_24 f24;
    float f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    int f4c;
    char unknown50[0x28];
};
struct S_x13504 {
    float f00;
};
struct S_x72048 {
    float f00;
};
struct S_x85728 {
    float f00;
};
struct S_x90336 {
    float f00;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
struct S_x91296 {
    float f00;
};
struct S_x53568 {
    float f00;
};
extern Vector3 g_8c326e68;
extern Vector3 g_8c326e74;
extern S_g8c46ee80 *g_8c46ee80;
extern char g_8c326d64[];
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c382a58(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c38ad10(void);
extern float call_8c37e480(void *);
extern void forward_effect_view(void *, void *);
void operation_8c1b4e40(Object *o)
{
    Frame frame;
    int v5;
    int v3;
    int v7;
    float v1;
    int v2;
    int v6;
    float v9;
    float v8;
    float v11;
    float t1;
    float fz;
    v1 = (float)0.0f;
    call_8c38ae68();
    call_8c37b5c4(0);
    call_8c382a58(0, (void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    v3 = (int)0;
    v2 = (int)0x3d8;
    while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
        v5 = (int)(v3 << 3);
        (&frame)->f3c = ((S_x13504 *)(v5 + g_8c326d64))->f00;
        (&frame)->f40 = 0.0f;
        (&frame)->f44 = *(float *)((char *)(float *)(g_8c326d64 + 4) + v5);
        ((void (*)(int, void *, void *))0x8c3be280)(0, (void *)(&(&frame)->f3c), (void *)(&(&frame)->f30));
        ((S_x85728 *)(v5 + (char *)&(&frame)->f48))->f00 = (&frame)->f30;
        ((S_x90336 *)(v5 + (char *)&(&frame)->f4c))->f00 = (&frame)->f38;
        v3 = (int)(v3 + 1);
    }
    call_8c38ad10();
    v2 = (int)0x3d8;
    *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&g_8c46ee80->f90;
    v7 = (int)0;
    v8 = (float)v1;
    fz = (&frame)->f24.f08;
    while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v7) {
        v6 = (int)(v7 << 3);
        v9 = (float)(*(float *)((char *)0x8c326d4c + (v7 << 2)) + 50.0f);
        (&frame)->f18 = (&frame)->f24.f00 - ((S_x91296 *)(v6 + (char *)&(&frame)->f48))->f00;
        (&frame)->f20 = fz - ((S_x53568 *)(v6 + (char *)&(&frame)->f4c))->f00;
        (&frame)->f1c = 0.0f;
        t1 = call_8c37e480((void *)(&(&frame)->f18));
        if (v9 > t1 && (v9 - t1) > v8) {
            v8 = (float)(v9 - t1);
        }
        v7 = (int)(v7 + 1);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c326e68;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c326e74;
    if (v8 > 40.42f) {
        v11 = (float)40.42f;
        v8 = (float)v11;
    }
    if ((v8 / 40.42f) > 0.0f) {
        (&frame)->f0c.f04 = v8 / 40.42f * -6.86999893f + 19.8f;
        (&frame)->f0c.f08 = -5.0f;
        (&frame)->f00.f04 = 12.93f;
        (&frame)->f00.f08 = v8 / 40.42f * -40.42f + 55.42f;
    }
    forward_effect_view((void *)(&(&frame)->f0c), (void *)(&frame));
}
