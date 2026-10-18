typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c07327c S_c8c07327c;
typedef struct S_c8c07327c_s3c S_c8c07327c_s3c;
typedef struct Object Object;
typedef struct Arg0_s48 Arg0_s48;
struct S_c8c07327c {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xe];
    int f3c;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x1c];
    int f48;
};
struct S_c8c07327c_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s48 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int call_8c16b5d8(Object *);
extern S_c8c07327c *call_8c07327c(void *);
void operation_8c16bce0(Object *o)
{
    int t1;
    S_c8c07327c *t2;
    t1 = call_8c16b5d8(o);
    switch (t1) {
    case 0:
        return;
    case 1:
        t2 = call_8c07327c((void *)(((char *)o + 0x58)));
        *(Vector3 *)((char *)t2 + 0x3c) = *(Vector3 *)((char *)o + 0x48);
        t2->f2c = o->f28;
    case 2:
        break;
    }
    o->f04 |= 1;
}
