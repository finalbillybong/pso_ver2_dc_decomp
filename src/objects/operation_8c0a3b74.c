typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg3_0 Arg3_0;
typedef struct Arg3_4 Arg3_4;
struct S_L8c41cba0 {
    char unknown0[0x98];
    int f98;
    char unknown9c[0x10];
    short fac;
    short fae;
};
struct Arg3 {
    Arg3_0 *f00;
    Arg3_4 *f04;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
extern S_L8c41cba0 g_8c41cba0;
extern float call_8c38d7d8(Arg1 *, Arg2 *);
extern float call_8c38c154(void *);
extern float call_8c37eb0c(void *);
void operation_8c0a3b74(int a0, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    short v1;
    short v2;
    float v3;
    int v8;
    float v9;
    float v11;
    float v17;
    float v18;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    v1 = (short)(&g_8c41cba0)->fac;
    v2 = (short)(&g_8c41cba0)->fae;
    v3 = (float)1.0f;
    if ((((&g_8c41cba0)->f98 & 0x400)) != 0) {
        a3->f04 = (Arg3_4 *)((int)a3->f04 + (short)v1 * 3);
        a3->f00 = (Arg3_0 *)((int)a3->f00 + (short)v2 * 3);
    }
    v8 = (int)(&g_8c41cba0)->f98;
    v9 = (float)v3;
    if (((v8 & 0x10000)) != 0) {
        v9 = (float)1.05f;
    }
    v11 = (float)v9;
    if (((v8 & 0x20000)) != 0) {
        v11 = (float)0.95f;
    }
    if ((int)(a3->f00) > 0x3800) {
        a3->f00 = (Arg3_0 *)0x3800;
    }
    if (-0x3800 > (int)(a3->f00)) {
        a3->f00 = (Arg3_0 *)-0x3800;
    }
    t4 = call_8c38d7d8(a1, a2);
    v17 = (float)(v11 * t4);
    t5 = call_8c38c154((void *)(a3->f00));
    v18 = (float)(v17 * t5);
    t1 = call_8c37eb0c((void *)(a3->f04));
    a1->f00 = v18 * t1 + a2->f00;
    t2 = call_8c37eb0c((void *)(a3->f00));
    a1->f04 = a2->f04 - v17 * t2;
    t3 = call_8c38c154((void *)(a3->f04));
    a1->f08 = v18 * t3 + a2->f08;
}
