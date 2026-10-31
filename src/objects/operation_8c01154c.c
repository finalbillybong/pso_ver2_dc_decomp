typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv10 S_vv10;
typedef struct S_vv18 S_vv18;
typedef struct S_vv8 S_vv8;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv18 {
    char unknown0[0x14];
    int f14;
};
struct S_vv10 {
    char unknown0[0x10];
    float f10;
};
struct S_vv8 {
    S_vv10 *f00;
};
extern int g_8c417b80;
extern int g_8c4dc5e0;
extern void subtract_vector_components(void *, void *, void *);
extern float call_8c37f6c0(float);
extern float call_8c37e494(void *);
extern int call_8c011e10(void *, int, int, Frame *, float, float, float);
extern void operation_8c011e88(void *);
int operation_8c01154c(int a0, int a1)
{
    Frame frame;
    float t3;
    float v3;
    int v7;
    S_vv18 *v18;
    S_vv10 *v10;
    float v11;
    S_vv8 *v8;
    S_vv18 **v9;
    int v6;
    float t1;
    int t2;
    float v5;
    v8 = (S_vv8 *)&g_8c417b80;
    v7 = 0;
    v9 = (S_vv18 **)(g_8c4dc5e0 + 0x20);
    subtract_vector_components((void *)a0, (void *)a1, (void *)(&frame));
    v3 = (&frame)->f00 * (&frame)->f00 + (&frame)->f08 * (&frame)->f08;
    if (v3 == 0.0f) {
        v3 = 1e-07f;
    }
    v5 = 1.0f / v3;
    t3 = call_8c37f6c0(v3);
    v6 = 0x100;
    while ((v18 = *v9++) != 0) {
        if (((v18->f14 & 0x40000000)) != 0) {
            v10 = (S_vv10 *)v18;
            subtract_vector_components((void *)a0, (void *)((int)v10 + 4), (void *)((void *)0x8c46f5a0));
            t1 = call_8c37e494((void *)((void *)0x8c46f5a0));
            v11 = (float)(t3 + v10->f10);
            if (!(t1 > (v11 * v11))) {
                t2 = call_8c011e10((void *)((int)v10 + 4), a0, a1, (Frame *)((&frame)), v10->f10, v3, v5);
                if (t2 != 0) {
                    v7 = v7 + 1;
                    if (!(v6 > v7)) {
                        break;
                    }
                    v8->f00 = v10;
                    v8 = (S_vv8 *)((char *)v8 + 4);
                }
            }
        }
    }
    v8->f00 = (S_vv10 *)0;
    operation_8c011e88((void *)((void *)&g_8c417b80));
    return (int)(g_8c417b80);
}
