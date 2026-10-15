typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_2c S_g8c4e2b80_430_2c;
typedef struct Object Object;
struct S_g8c4e2b80 {
    char unknown0[0x430];
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x2c];
    S_g8c4e2b80_430_2c *f2c;
};
struct S_g8c4e2b80_430_2c {
    char unknown0[0x4];
    int f04;
};
struct Object {
    char unknown0[0xf4];
    float ff4;
};
extern void call_8c08914c(Object *);
void operation_8c1be230(Object *o)
{
    float v3;
    v3 = (float)(float)(unsigned int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f430->f2c->f04 + -1);
    o->ff4 += 4.0f;
    if (!(v3 > o->ff4)) {
        o->ff4 -= v3;
    }
    call_8c08914c(o);
}
