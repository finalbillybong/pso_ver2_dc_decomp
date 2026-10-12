typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_418 S_g8c467180_2c_418;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x418];
    S_g8c467180_2c_418 *f418;
};
extern int call_8c156bd8(void *, int, void *);
extern void operation_8c1d1b78(int, void *);
int operation_8c1d1b34(int a0)
{
    int t1;
    t1 = call_8c156bd8((void *)0x8c329974, 6, (*(S_g8c467180 **)0x8c467180)->f2c->f418);
    operation_8c1d1b78(a0, (void *)t1);
    return t1;
}
