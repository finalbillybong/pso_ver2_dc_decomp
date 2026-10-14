typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
    char unknownec[0x4];
    int ff0;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
int operation_8c1be1d4(Object *o)
{
    int t1;
    if (o->fe8 != 0 && ((o->fe8->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->fe8));
        o->ff0 = (int)(*(int *)((char *)0x8c288fb8 + (*(int *)((char *)((char *)o + 0xf8) + (t1 << 2)) << 2)));
        return 1;
    }
    return 0;
}
