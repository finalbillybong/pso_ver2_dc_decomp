typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_x32560 S_x32560;
typedef struct S_x73904 S_x73904;
typedef struct S_x74128 S_x74128;
struct Object {
    char unknown0[0x6bc];
    int f6bc;
};
struct S_x73904 {
    float f00;
};
struct S_x32560 {
    float f00;
};
struct S_x74128 {
    float f00;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern float object_random_fraction(void *);
extern float call_8c12b570(float);
extern float operation_8c05b8e8(int, float, float);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
int operation_8c066fb8(Object *o, Arg1 *a1)
{
    int v3;
    int v2;
    int v10;
    float v9;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    t1 = object_random_fraction((void *)o);
    t3 = call_8c12b570(t1 * 12.0f);
    v2 = (int)t3;
    if (0xc > o->f6bc) {
        o->f6bc += 1;
        while (((S_x73904 *)((char *)(int *)((char *)o + 0x6c4) + (v3 = v2 << 2)))->f00 != 0.0f) {
            v2 = v2 + 1;
            if (v2 >= 0xc) {
                v2 = 0;
            }
        }
        t2 = operation_8c05b8e8((int)o, 100.0f, 220.0f);
        ((S_x32560 *)((char *)(int *)((char *)o + 0x6c4) + v3))->f00 = t2;
        v9 = (float)t2;
    } else {
        v9 = (float)((S_x74128 *)((char *)(int *)((char *)o + 0x6c4) + (v2 << 2)))->f00;
    }
    v10 = (int)(v2 * 0x1555);
    t4 = call_8c37eb0c(v10);
    a1->f00 = v9 * t4;
    a1->f04 = 0.0f;
    t5 = call_8c38c154(v10);
    a1->f08 = v9 * t5;
    return 1;
}
