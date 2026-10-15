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
    char unknown30e[0xba];
    int f3c8;
};
extern int operation_456a4(void *);
int operation_8c04d324(Object *o)
{
    int t1;
    t1 = operation_456a4((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
            o->f3c8 = 0;
            o->f30c = 2;
            o->ff0 = 1;
            o->f34 &= -0x4040001;
        }
        return 1;
    }
    return 0;
}
