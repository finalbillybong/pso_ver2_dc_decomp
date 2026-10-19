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
    char unknown0[0x20];
    short f20;
};
extern void call_8c18a4ac(short);
void operation_8c0e6e18(Object *o)
{
    if (((o->fec & 0x40)) == 0) {
        call_8c18a4ac(o->f13c->f20);
    }
}
