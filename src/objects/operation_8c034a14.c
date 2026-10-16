typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c418280 S_L8c418280;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
extern S_L8c418280 g_8c418280;
extern char gc_8c418280[];
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
void operation_8c034a14(Object *o)
{
    float t1;
    float t2;
    float t3;
    float t4;
    t1 = call_8c37eb0c((void *)(o->f20));
    *(float *)(gc_8c418280 + 0x4) = t1 * -1.0f;
    t2 = call_8c38c154((void *)(o->f20));
    t3 = call_8c37eb0c((void *)(o->f24));
    *(float *)(gc_8c418280 + 0x0) = t2 * t3;
    t4 = call_8c38c154((void *)(o->f24));
    *(float *)(gc_8c418280 + 0x8) = t2 * t4;
}
