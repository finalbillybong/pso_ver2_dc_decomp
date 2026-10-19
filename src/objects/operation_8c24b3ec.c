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
extern int operation_8c0eea7c(int, float);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c24b3ec(Object *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = operation_8c0eea7c((int)o, 10000.0f);
        if (t1 != 0) {
            return;
        }
        o->fe4 = 3;
        call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    o->fe4 = 3;
    call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
}
