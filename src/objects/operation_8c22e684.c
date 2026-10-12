typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_80 S_g8c467180_2c_80;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    Arg0_58 *f58;
    char unknown5c[0x8];
    Arg0_64 *f64;
    char unknown68[0x2c];
    int f94;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x80];
    S_g8c467180_2c_80 *f80;
};
extern void word_operation_8c18490c(unsigned int);
extern int call_8c010298(void *, void *, void *, void *);
extern void call_8c22e8e4(Object *, void *, int);
void operation_8c22e684(Object *o)
{
    int t1;
    word_operation_8c18490c((unsigned int)o->f54);
    t1 = call_8c010298(o->f54, (void *)0x8c2e195b, o->f58, o->f64);
    if (t1 == 0) {
        o->f94 = 0x10;
        call_8c22e8e4(o, (*(S_g8c467180 **)0x8c467180)->f2c->f80, 1);
    }
}
