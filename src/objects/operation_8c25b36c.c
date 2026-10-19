typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    short f06;
    unsigned char f08;
};
extern void operation_03cf64(unsigned short, short);
extern void operation_03cff8(unsigned short, short);
void operation_8c25b36c(Object *o)
{
    if (o->f08 == 1) {
        operation_03cf64((unsigned short)(o->f06), o->f04);
        return;
    }
    operation_03cff8((unsigned short)(o->f06), o->f04);
}
