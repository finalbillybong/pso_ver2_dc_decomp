typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x88];
    int f88;
    Arg0_8c *f8c;
    Arg0_90 *f90;
    char unknown94[0x6c];
    int f100;
    char unknown104[0x4];
    int f108;
};
extern void set_nonnegative_8c0f14e0(void *, int);
extern void call_8c0f14f0(Object *, void *);
int operation_8c0f1470(Object *o)
{
    o->f108 = (int)(o->f88);
    if (o->f108 > 0xff) {
        o->f100 = 0;
    } else {
        if (!(o->f108 >= 0)) {
            o->f100 = 1;
        } else {
            o->f100 = 2;
        }
    }
    set_nonnegative_8c0f14e0((void *)o, (int)(o->f8c));
    call_8c0f14f0(o, (void *)(o->f90));
    return (int)(o->f108);
}
