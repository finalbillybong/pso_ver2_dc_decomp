typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x220];
    short f30c;
    char unknown30e[0x11a];
    float f428;
};
extern int check_range_8c01cf68(void *, float);
void operation_8c1ed238(Object *o)
{
    int t1;
    if (o->f30c == 2) {
        t1 = check_range_8c01cf68((void *)o, o->f428);
        if (t1 != 0) {
            o->f30c = 3;
            o->fe8 |= 0x40;
        }
    }
}
