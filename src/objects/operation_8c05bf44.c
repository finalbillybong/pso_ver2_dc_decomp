typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x3aa];
    int f3cc;
    int f3d0;
};
extern int call_8c18e8a0(int);
void operation_8c05bf44(Object *o, int a1)
{
    int t1;
    t1 = call_8c18e8a0(o->f20);
    o->f3cc = t1;
    o->f3d0 = a1;
}
