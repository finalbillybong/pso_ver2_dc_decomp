typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
};
struct Arg0_28 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_2c {
    char unknown0[0x4];
    short f04;
};
extern int operation_8c1571f4(void *);
extern void enable_pair_8c1cc4b4(void);
void operation_8c1f195c(Object *o)
{
    int t1;
    if (o->f28 != 0) {
        o->f28->f04 |= 1;
        o->f28 = (Arg0_28 *)0;
    }
    if (o->f2c != 0) {
        t1 = operation_8c1571f4((void *)o->f2c);
        o->f30 = t1;
        o->f2c->f04 |= 1;
        o->f2c = (Arg0_2c *)0;
    }
    enable_pair_8c1cc4b4();
}
