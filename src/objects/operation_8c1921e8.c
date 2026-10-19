typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char f01;
    short f02;
    float f04;
    float f08;
    short f0c;
    short f0e;
};
extern void operation_1c7dd4(void *);
Object *operation_8c1921e8(Object *o)
{
    o->f01 = 0;
    o->tag = -1;
    o->f02 = -1;
    o->f04 = 0.0f;
    o->f08 = 0.0f;
    o->f0c = -1;
    o->f0e = 0;
    operation_1c7dd4((void *)(((char *)o + 0x10)));
    return o;
}
