typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_1bc Arg0_1bc;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x180];
    Arg0_1bc *f1bc;
    char unknown1c0[0x74];
    int f234;
};
extern int operation_8c076d7c(int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c0772f8(void *, int, int);
void operation_8c23c680(Object *o)
{
    int v1;
    int t1;
    int t2;
    if (o->f38 != 0 && o->f234 == 0 && o->f1bc != 0) {
        t2 = operation_8c076d7c((int)o);
        v1 = (int)(t2 & -0x70000001);
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t1 != 0) {
            operation_8c0772f8((void *)t1, (int)(o->f1bc), v1);
        }
        o->f234 = (int)(t1);
    }
}
