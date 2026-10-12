typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
void operation_8c21d780(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c03ed64();
    if (t1 != 0) {
        t2 = call_8c03ed10((void *)0x8c2e1840);
        *(int *)0x8c505964 = t2;
        o->f28 = 6;
    }
}
