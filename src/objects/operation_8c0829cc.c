typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c24 S_g8c469c24;
typedef struct Object Object;
struct Object {
    char unknown0[0xec];
    float fec;
    char unknownf0[0xc];
    float ffc;
};
struct S_g8c469c24 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c469c24 *g_8c469c24;
void operation_8c0829cc(Object *o)
{
    o->fec += 1.5f;
    if (o->fec > (float)(unsigned int)(g_8c469c24->f04 + -1)) {
        o->fec = 0.0f;
    }
    o->ffc += 0.05f;
    if (o->ffc > 0.5f) {
        o->ffc = 0.5f;
    }
}
