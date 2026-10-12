typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x26c];
    int f578;
    short f57c;
};
extern void call_8c1e8e60(Object *, short, int);
extern void operation_021f88(void *, int, short);
void operation_8c1eff40(Object *o)
{
    call_8c1e8e60(o, o->f30a, 6);
    o->ff0 = o->f57c;
    o->f64 = o->f578;
    operation_021f88((void *)o, 0x10, (short)0);
}
