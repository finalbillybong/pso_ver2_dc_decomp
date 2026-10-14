typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x28];
    int f28;
    Arg0_2c *f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
};
extern int operation_8c1cdc80(void *);
extern void call_8c1d5eb8(void *, int);
void operation_8c1d4cb0(Object *o)
{
    int t1;
    t1 = operation_8c1cdc80((void *)(o->f34));
    if (t1 != o->f28) {
        o->f28 = (int)(t1);
        call_8c1d5eb8((void *)(o->f2c), t1);
    }
}
