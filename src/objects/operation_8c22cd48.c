typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    int f00;
};
extern int call_8c22c06c(void *);
void operation_8c22cd48(Object *o)
{
    int t1;
    o->f30->f00->f00 |= 2;
    t1 = call_8c22c06c(o->f6c);
    if (t1 != 0) {
        o->f68 = 1;
        return;
    }
    o->f68 = 2;
}
