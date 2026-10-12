typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x58];
    int f90;
};
extern int call_8c011ecc(int);
extern void call_8c199b20(int, int);
void operation_8c1cd38c(Object *o, int a1)
{
    int t1;
    if (o->f90 == 0) {
        t1 = call_8c011ecc(0x24);
        if (t1 != 0) {
            call_8c199b20(t1, a1);
        }
        o->f90 = t1;
        o->f34 |= 0x40;
    }
}
