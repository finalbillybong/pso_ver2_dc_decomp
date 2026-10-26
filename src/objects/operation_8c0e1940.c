typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x14];
    float f14;
    char unknown18[0x4];
    float f1c;
    float f20;
    float f24;
};
void operation_8c0e1940(Object *o)
{
    float v1;
    float v6;
    if (o->f20 > 0.0f) {
        v1 = (float)o->f24;
        if (v1 > 0.0f) {
            goto L_8c0e195a;
        }
    }
    v6 = (float)0.0f;
    goto L_8c0e1964;
L_8c0e195a:;
    v6 = (float)(v1 * o->f14 / o->f20);
L_8c0e1964:;
    o->f1c = v6;
}
