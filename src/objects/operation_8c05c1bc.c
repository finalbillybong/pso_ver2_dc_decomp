typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3d8 Arg0_3d8;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x3b2];
    int f3d4;
    Arg0_3d8 *f3d8;
};
extern int call_8c18e8a0(int, void *);
void operation_8c05c1bc(Object *o, int a1)
{
    int t1;
    o->f3d8 = (Arg0_3d8 *)a1;
    t1 = call_8c18e8a0(o->f20 + 3, o->f3d8);
    o->f3d4 = t1;
}
