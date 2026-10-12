typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x228c];
    int f22b4;
    char unknown22b8[0x10];
    int f22c8;
};
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
void operation_8c2229e0(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c03ed64();
    if (t1 != 0) {
        t2 = call_8c03ed10((void *)0x8c2e198b);
        o->f22c8 = t2;
        o->f24 = o->f22b4;
    }
}
