typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv1 S_vv1;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x4];
    int f08;
};
struct Arg0_0 {
    S_vv1 *f00;
    int f04;
};
struct S_vv1 {
    int f00;
    int f04;
};
extern int call_8c36cd16(int);
extern void call_8c12b880(Arg0_0 *, int, int);
Object *operation_8c122688(Object *o, int a1, int a2)
{
    S_vv1 *v1;
    int t1;
    o->f08 = a2;
    t1 = call_8c36cd16(a1);
    o->tag = (Arg0_0 *)t1;
    if (o->tag != 0) {
        call_8c12b880((Arg0_0 *)(o->tag), 0, a1);
        v1 = (S_vv1 *)((char *)o->tag + 0x8);
        o->tag->f00 = v1;
        o->tag->f04 = 0;
        v1->f00 = 0;
        v1->f04 = a1 + -8;
    }
    return o;
}
