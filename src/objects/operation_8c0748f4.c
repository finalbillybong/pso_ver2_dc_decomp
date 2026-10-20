typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern void operation_8c053f54(void *);
extern void operation_8c192704(short);
extern void operation_8c05426c(void *, int, int);
void operation_8c0748f4(Object *o)
{
    unsigned short v21;
    v21 = (unsigned short)0xffff;
    if (o->f20 != v21) {
        operation_8c053f54((void *)o);
        operation_8c192704(o->f20);
        o->f20 = 0xffff;
        operation_8c05426c((void *)o, 0, 1);
    }
}
