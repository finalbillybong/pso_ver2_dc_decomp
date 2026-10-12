typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
struct Arg0_28 {
    char unknown0[0x68];
    int f68;
};
extern void call_8c0dc79c(void *);
void operation_8c051e60(Object *o)
{
    if (((o->f20 & 4)) == 0) {
        o->f20 |= 4;
        if (o->f28 != 0) {
            o->f28->f68 |= 0x200;
        }
        if (o->f2c != 0) {
            call_8c0dc79c(o->f2c);
        }
    }
}
