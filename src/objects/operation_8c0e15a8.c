typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x10];
    float f14;
    char unknown18[0x4];
    float f1c;
    float f20;
    float f24;
};
extern float call_8c12c714(float);
void operation_8c0e15a8(Object *o)
{
    float v3;
    float v4;
    float v7;
    float v8;
    float t1;
    o->tag &= -9;
    if (o->f20 <= 0.0f || o->f24 <= 0.0f) {
        v3 = (float)0.0f;
        v7 = (float)v3;
        goto L_8c0e15de;
    }
    v4 = (float)(o->f24 * o->f14 / o->f20);
    v7 = (float)v4;
L_8c0e15de:;
    v8 = (float)(v7 - o->f1c);
    t1 = call_8c12c714(v8);
    if (2.0f > t1) {
        o->f1c = v7;
        o->tag |= 8;
        return;
    }
    if (v8 > 0.0f) {
        o->f1c += 2.0f;
        return;
    }
    o->f1c -= 2.0f;
}
