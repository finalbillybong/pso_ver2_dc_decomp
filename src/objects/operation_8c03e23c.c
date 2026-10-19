typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_4 Arg0_4;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
};
struct Arg0_0 {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_4 {
    int f00;
};
extern void operation_8c03e264(void *);
void operation_8c03e23c(Object *o)
{
    o->tag->f0c += 1;
    operation_8c03e264((void *)(o->tag));
    o->f04->f00 |= 1;
}
