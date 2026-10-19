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
extern int operation_8c0eea7c(int, float);
extern void operation_8c05426c(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c24b2e4(Object *o)
{
    int v1;
    int t1;
    v1 = (int)o->f108;
    if ((v1 & 1) == 1) {
        t1 = operation_8c0eea7c((int)o, 4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    if (((v1 & 0x100000)) != 0) {
        o->f110 += 0.1f;
        if (1.0f > o->f110) {
            return;
        }
        o->f108 &= -0x100001;
        return;
    }
    o->f110 -= 0.1f;
    if (!(o->f110 > 0.0f)) {
        o->f108 |= 0x100000;
    }
}
