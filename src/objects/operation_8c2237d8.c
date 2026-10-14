typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
struct Arg0_2c {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x72];
    int f37c;
};
extern void adjust_330(void *, short);
void operation_8c2237d8(Object *o)
{
    int v1;
    if (o->f2c->f37c > 0 && 0xf > o->f2c->f37c) {
        v1 = (int)(o->f2c->f308 == 3);
        if (v1 == 0 && ((o->f2c->f34 & 0x800)) == 0) {
            adjust_330((void *)(o->f2c), (short)1);
        }
    }
}
