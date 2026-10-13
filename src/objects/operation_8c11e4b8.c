typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8464 S_g8c4d8464;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xb8];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
struct S_g8c4d8464 {
    int f00;
    int f04;
};
extern int call_8c0eea7c(float);
extern void operation_8c05426c(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c11e4b8(Object *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        o->f28 = (int)((*(S_g8c4d8464 **)0x8c4d8464)->f04);
        t1 = call_8c0eea7c(4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        call_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    o->f28 = (int)((*(S_g8c4d8464 **)0x8c4d8464)->f00);
}
