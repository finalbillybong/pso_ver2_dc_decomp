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
    char unknown30e[0x9e];
    int f3ac;
};
extern void operation_8c05426c(void *, int, int);
void operation_8c0e3c4c(Object *o)
{
    switch (o->f30a) {
    case 1:
        if (o->f3ac != 0) {
            o->f30a = 0;
            o->f30c = 0;
        }
        break;
    case 0:
        switch (o->f30c) {
        case 2:
            if (o->f3ac != 0) {
                o->f30c = 0;
            }
        }
        break;
    default:
        if (o->f3ac != 0) {
            o->f30a = 0;
        } else {
            o->f30a = 1;
        }
        o->f30c = 0;
        o->ff0 = 0;
        o->f34 |= 0x4040000;
        operation_8c05426c((void *)o, 0, 0x14000000);
    }
}
