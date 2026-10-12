typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    char unknown14[0x8];
    int f1c;
    int f20;
};
struct Arg1 {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x1c];
    int f2c;
};
extern int call_8c103b98(int);
extern void call_8c0e1f40(Object *);
void operation_8c103ac8(Object *o, Arg1 *a1, int a2, int a3)
{
    int t1;
    if ((unsigned short)a2 != 4) {
        o->tag |= 2;
        return;
    }
    t1 = call_8c103b98(a3);
    if (!(t1 > 0)) {
        o->tag |= 2;
        return;
    }
    o->tag &= -3;
    o->f1c = a1->f2c;
    o->f20 = t1;
    call_8c0e1f40(o);
    o->f08 = a1->f08 - -25.0f + o->f10 * 0.5f;
    o->f0c = a1->f0c - -28.0f;
}
