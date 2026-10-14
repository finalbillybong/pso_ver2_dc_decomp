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
extern void operation_8c05426c(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c24ba8c(Object *o)
{
    int t1;
    if (((o->f108 & 1)) != 0) {
        t1 = call_8c0eea7c(4900.0f);
        if (t1 != 0) {
            o->fe4 = 1;
            operation_8c05426c((void *)o, 0, 0x10);
            call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
}
