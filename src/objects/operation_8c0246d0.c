typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x50c];
    short f574;
    short f576;
    int f578;
    short f57c;
};
extern int operation_1e9610(Object *);
void operation_8c0246d0(Object *o)
{
    int t1;
    o->f34 |= 0x10000;
    o->f576 = 0x10;
    t1 = operation_1e9610(o);
    o->f57c = t1;
    o->f574 = 0;
    o->f578 = o->f64;
}
