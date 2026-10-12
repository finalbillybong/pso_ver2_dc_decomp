typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
};
extern int call_8c01018c(void *);
void operation_8c03f700(Object *o)
{
    int t1;
    t1 = call_8c01018c((void *)0x8c319870);
    if (t1 != -1) {
        *(char *)0x8c466dc2 = 1;
        o->f30 = 1;
        return;
    }
    o->f30 = 0;
}
