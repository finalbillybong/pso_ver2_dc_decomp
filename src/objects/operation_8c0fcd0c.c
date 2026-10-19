typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    float f24;
    float f28;
    float f2c;
};
extern float call_8c12c714(float);
void operation_8c0fcd0c(Object *o, int a1, float f0)
{
    float v1;
    float v2;
    float t1;
    v2 = (float)/* ? fr15 */ 0;
    if (o->f28 != (float)a1) {
        o->f28 = (float)a1;
        v1 = (float)o->f28;
        v1 = (float)(v1 - o->f24);
        v1 = (float)(v1 / f0);
        t1 = call_8c12c714(v1);
        v2 = (float)v1;
        if (1.0f > t1) {
            if (v1 > 0.0f) {
                v2 = (float)1.0f;
            } else {
                v2 = (float)-1.0f;
            }
        }
        o->f2c = v2;
    }
}
