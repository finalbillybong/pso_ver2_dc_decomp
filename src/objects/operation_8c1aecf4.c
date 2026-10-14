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
    char unknown10c[0x4];
    float f110;
};
extern int call_8c0eea7c(Object *, float);
extern void operation_8c05426c(void *, int, int);
void operation_8c1aecf4(Object *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        return;
    }
    if (((o->f108 & 0x10000)) != 0) {
        o->f110 += 0.1f;
        if (1.0f > o->f110) {
            return;
        }
        o->f108 &= -0x10001;
        return;
    }
    o->f110 -= 0.1f;
    if (!(o->f110 > 0.0f)) {
        o->f108 |= 0x10000;
    }
}
