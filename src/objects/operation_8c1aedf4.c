typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
extern int call_8c0eea7c(float);
extern void operation_8c05428c(void *, int, int);
void operation_8c1aedf4(Object *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(10000.0f);
        if (t1 == 1) {
            return;
        }
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        return;
    }
    o->fe4 = 3;
    operation_8c05428c((void *)o, 0, 0x10);
}
