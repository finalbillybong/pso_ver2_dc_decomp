typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
    char unknown34[0x8];
    Arg0_3c *f3c;
};
extern int operation_8c1cdc80(void *);
extern void call_8c1d5eb8(void *, int);
void operation_8c191428(Object *o)
{
    int t1;
    t1 = operation_8c1cdc80(o->f30);
    if (t1 != o->f28) {
        o->f28 = t1;
        call_8c1d5eb8(o->f3c, t1);
    }
}
