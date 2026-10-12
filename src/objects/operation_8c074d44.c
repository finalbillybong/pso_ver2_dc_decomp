typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x350];
    int f350;
};
extern int object_blocked(void *);
void operation_8c074d44(Object *o)
{
    int v1;
    int t1;
    if (o->f13c != 0) {
        t1 = object_blocked((void *)o->f13c);
        if (t1 == 0) {
            v1 = (int)(((o->f13c->f350 & 0x200000)) != 0);
            if (v1 == 0) {
                o->fec &= -0x41;
                return;
            }
        }
        o->fec |= 0x40;
        return;
    }
    o->fec |= 0x40;
}
