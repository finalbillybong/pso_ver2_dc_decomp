typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_118 Arg0_118;
struct Object {
    char unknown0[0xf4];
    float ff4;
    float ff8;
    char unknownfc[0x18];
    Arg0_114 *f114;
    Arg0_118 *f118;
};
struct Arg0_114 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_118 {
    char unknown0[0x4];
    int f04;
};
extern void operation_8c08914c(void *);
void operation_8c157d3c(Object *o)
{
    int v1;
    float v4;
    float v8;
    o->ff4 += 4.0f;
    v1 = (int)-1;
    v4 = (float)(float)(unsigned int)(o->f114->f04 + v1);
    if (o->ff4 > v4) {
        o->ff4 = 0.0f;
    }
    o->ff8 += 0.25f;
    v8 = (float)(float)(unsigned int)(o->f118->f04 + -1);
    if (o->ff8 > v8) {
        o->ff8 = 0.0f;
    }
    operation_8c08914c((void *)o);
}
