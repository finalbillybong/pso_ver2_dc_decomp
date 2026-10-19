typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2a8];
    int f310;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1ee098(Object *o)
{
    S_c8c021ef8 *t1;
    int v1;
    int t2;
    Object *self = o;
    t1 = lookup_low_id((int)(self->f02));
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        v1 = (int)(((t1->f310 & 0x8200)) != 0);
        if (v1 == 0) {
            t1->f64 = (int)(self->f04);
            operation_8c1e8e60((int)t1, 0xc, 0);
        }
    }
}
