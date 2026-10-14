typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0de534 S_c8c0de534;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x24];
    float f5c;
    char unknown60[0x4];
    int f64;
};
struct S_c8c0de534 {
    char unknown0[0x28];
    float f28;
    float f2c;
    int f30;
};
extern S_c8c0de534 *operation_8c0de534(int, int, float);
extern void adjust_rectangle_top(void *);
extern void adjust_rectangle_right(void *);
extern void set_rectangle_clip(void *, float, float, float, float);
S_c8c0de534 *operation_8c0dc63c(Object *o)
{
    S_c8c0de534 *t1;
    t1 = operation_8c0de534((int)(((char *)o + 0x48)), (int)(((char *)o + 0x50)), o->f5c);
    if (((o->f34 & 0x40)) != 0) {
        adjust_rectangle_top((void *)t1);
    }
    if (((o->f34 & 0x80)) != 0) {
        adjust_rectangle_right((void *)t1);
    }
    if (((o->f34 & 8)) != 0) {
        set_rectangle_clip((void *)t1, 0.0f, 0.0f, 640.0f, 480.0f);
    }
    if (o->f24 != 0) {
        t1->f28 = (float)o->f24 * 0.222222224f * 2.3f + 1.0f;
        t1->f2c = 1.0f - (float)o->f24 * 0.222222224f;
    }
    t1->f30 = (int)(o->f64);
    if (o->f28 != 0) {
        t1->f30 = (int)((float)t1->f30 - 7.5f);
    }
    return t1;
}
