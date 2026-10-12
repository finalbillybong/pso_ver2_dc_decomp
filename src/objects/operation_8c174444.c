typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
int operation_8c174444(Object *o)
{
    int t1;
    if (o->f20 != 0 && ((o->f20->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)o->f20);
        return t1;
    }
    return -1;
}
