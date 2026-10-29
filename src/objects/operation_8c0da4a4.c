typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct Arg2 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_L8c46f5a0 {
    float f00;
    float f04;
    float f08;
};
extern S_L8c46f5a0 g_8c46f5a0;
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void normalize_vector_checked(void *);
extern float call_8c3845f0(void *, Frame *);
int operation_8c0da4a4(Object *o, Arg1 *a1, Arg2 *a2, int a3, float f0, float f1)
{
    Frame frame;
    float v1;
    float v2;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    if (f0 > -1.0f && 1.0f > f0) {
        t1 = call_8c37eb0c(a3);
        (&frame)->f0c = t1;
        (&frame)->f10 = 0.0f;
        t2 = call_8c38c154(a3);
        (&frame)->f14 = t2;
        if (f1 == 0.0f) {
            (&frame)->f00 = a1->f00 - o->tag;
            (&frame)->f04 = 0.0f;
            (&frame)->f08 = a1->f08 - o->f08;
            normalize_vector_checked((void *)(&frame));
            t3 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
            if (f0 > t3) {
                return 0;
            }
            goto L_8c0da5c2;
        }
        t7 = call_8c37eb0c((int)(a3 + 0x8000));
        v1 = (float)(f1 * t7 + o->tag);
        t4 = call_8c38c154((int)(a3 + 0x8000));
        v2 = f1 * t4 + o->f08;
        (&frame)->f00 = a1->f00 - v1;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = a1->f08 - v2;
        normalize_vector_checked((void *)(&frame));
        t5 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
        if (f0 > t5) {
            return 0;
        }
        (&g_8c46f5a0)->f00 = a1->f00 - a2->f00;
        (&g_8c46f5a0)->f04 = 0.0f;
        (&g_8c46f5a0)->f08 = a1->f08 - a2->f08;
        normalize_vector_checked((void *)((void *)&g_8c46f5a0));
        t6 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((void *)&g_8c46f5a0));
        if (0.0f > t6) {
            return 0;
        }
    }
L_8c0da5c2:;
    return 1;
}
