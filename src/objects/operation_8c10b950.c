typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7cc4 S_g8c4d7cc4;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xb8];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
struct S_g8c4d7cc4 {
    int f00;
};
extern void call_8c0eeb58(void);
extern void operation_8c10b9d0(int);
extern void operation_8c05428c(void *, int, int);
void operation_8c10b950(Object *o)
{
    call_8c0eeb58();
    operation_8c10b9d0((int)o);
    if ((o->f108 & 1) != 1) {
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        o->f28 = (int)((*(S_g8c4d7cc4 **)0x8c4d7cc4)->f00);
    }
}
