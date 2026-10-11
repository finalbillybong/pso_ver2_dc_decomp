typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x54];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x3b0];
    int f3b0;
};
void flag_owner_8c074ddc(Object *o)
{
    if ((o->fe6 & 0xffff) == *(int *)0x8c418248) {
        o->f13c->f3b0 |= 0x10;
    }
}
