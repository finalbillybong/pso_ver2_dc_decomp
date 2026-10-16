typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
    float f08;
};
extern float normalize_xz_checked(void *);
extern float call_8c38c154(int);
extern float call_8c37eb0c(int);
extern void normalize_vector_checked(void *);
float operation_8c0cbebc(Object *o, float f0, float f1)
{
    float v1;
    int v2;
    float v3;
    float t1;
    float t2;
    float t3;
    t1 = normalize_xz_checked((void *)o);
    if (t1 > f0) {
        v1 = (float)0.0f;
        o->tag = v1;
        o->f04 = 1.0f;
        o->f08 = v1;
    } else {
        v2 = (int)(int)(t1 / f0 * 32768.0f);
        t3 = call_8c38c154(v2);
        v3 = (float)(f1 * (t3 + 1.0f));
        t2 = call_8c37eb0c(v2);
        o->tag *= t2;
        o->f04 = 1.0f;
        o->f08 *= t2;
        normalize_vector_checked((void *)o);
        v1 = (float)v3;
    }
    return v1;
}
