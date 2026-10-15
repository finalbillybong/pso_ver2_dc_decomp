typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3d4 Arg0_3d4;
struct Object {
    char unknown0[0x3a4];
    int f3a4;
    char unknown3a8[0x2c];
    Arg0_3d4 *f3d4;
    float f3d8;
};
extern float call_8c37eb0c(void *);
void operation_8c11df84(Object *o)
{
    float v1;
    float t1;
    if (((o->f3a4 & 0x20000)) != 0) {
        *(int *)((char *)o + 0x3d4) += 0x200;
        t1 = call_8c37eb0c((void *)(o->f3d4));
        o->f3d8 = t1 * 5.0f;
        return;
    }
    if ((o->f3d8 - 0.2f) > 0.0f) {
        v1 = (float)(o->f3d8 - 0.2f);
    } else {
        v1 = (float)0.0f;
    }
    o->f3d8 = v1;
}
