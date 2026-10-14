typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
extern int operation_8c1571f4(void *);
extern void operation_8c1a643c(int, int);
void operation_8c1c0018(Object *o)
{
    int t1;
    t1 = operation_8c1571f4((void *)(o->f20));
    operation_8c1a643c((int)(o->f24), t1);
}
