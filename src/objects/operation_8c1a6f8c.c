typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv41 S_vv41;
typedef struct S_vv41_90 S_vv41_90;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
};
struct S_vv41 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv41_90 *f90;
};
extern void operation_8c19a044(void *, int);
void operation_8c1a6f8c(Object *o)
{
    S_vv41 *v41;
    v41 = (S_vv41 *)o->f2c;
    if (v41 != 0) {
        v41->f80 = (v41->f80 & 0xffff) & -3;
        if (v41->f90 != 0) {
            operation_8c19a044((void *)(v41->f90), 1);
        }
    }
    o->f24 = 1;
}
