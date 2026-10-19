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
    char unknown10c[0xc];
    float f118;
};
extern int call_8c0eea7c(Object *, float);
extern void operation_8c05426c(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c132b58(Object *o)
{
    int m;
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 == 1) {
            o->fe4 = 1;
            operation_8c05426c((void *)o, 0, 0x10);
            call_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
    m = 0x100000;
    if (((o->f108 & m)) != 0) {
        o->f118 += 0.1f;
        if (1.0f > o->f118) {
            return;
        }
        o->f108 &= -0x100001;
        return;
    }
    o->f118 -= 0.1f;
    if (!(o->f118 > 0.0f)) {
        o->f108 |= m;
    }
}
