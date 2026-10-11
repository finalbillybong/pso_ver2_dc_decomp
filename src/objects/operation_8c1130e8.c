typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
struct Object {
    char unknown0[0x100];
    Arg0_100 *f100;
    char unknown104[0x4];
    int f108;
    int f10c;
};
extern void *operation_03d080(void *);
void operation_8c1130e8(Object *o)
{
    void *t1;
    if (o->f108 != 2) {
        t1 = operation_03d080(o->f100);
        if ((unsigned char)t1 == 0) {
            o->f10c = 0;
        }
        if ((unsigned char)t1 == 1) {
            o->f10c = 1;
        }
    }
}
