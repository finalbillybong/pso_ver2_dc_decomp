typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x328];
    float f328;
    char unknown32c[0x3c];
    float f368;
    char unknown36c[0x18];
    int f384;
    char unknown388[0x4];
    float f38c;
};
extern float call_8c12c714(float);
void operation_8c21bf48(Object *o)
{
    float v1;
    float t1;
    v1 = (float)(o->f38c - o->f328);
    if (v1 > 0.0f) {
        o->f368 += 0.05f;
    } else {
        o->f368 -= 0.05f;
    }
    t1 = call_8c12c714(v1);
    if (50.0f > t1) {
        o->f384 = 1;
    }
}
