typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x5a];
    int f368;
};
extern void operation_8c05428c(void *, int, int);
void operation_8c0e42e8(Object *o)
{
    if (((o->f34 & 0x1000)) != 0) {
        o->f30a = 4;
    }
    switch (o->f30a) {
    case 2:
    case 3:
        break;
    case 1:
        o->f30c = 0;
        if (o->f368 == 0) {
            o->f30a = 3;
            o->ff0 = 7;
        } else {
            o->f30a = 2;
            o->ff0 = 0xa;
        }
        o->f34 &= -0x4040001;
        operation_8c05428c((void *)o, 0, 0x14000000);
        return;
    case 4:
        o->ff0 = 5;
        return;
    default:
        o->f30a = 3;
        o->f30c = 1;
        o->ff0 = 2;
        o->f34 &= -0x4040001;
        operation_8c05428c((void *)o, 0, 0x14000000);
        return;
    }
}
