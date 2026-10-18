typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4b8 S_g8c467180_2c_4b8;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x22a0];
    int f22c8;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4b8];
    S_g8c467180_2c_4b8 *f4b8;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c506060;
extern int g_8c506064;
extern int operation_8c03ed64(void);
extern int operation_8c03ed10(int);
extern void operation_8c220be8(int, int);
void operation_8c22232c(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c03ed64();
    if (t1 != 0) {
        t2 = operation_8c03ed10((int)((void *)0x8c2e198b));
        o->f22c8 = (int)(t2);
        g_8c506060 = o->f22c8;
        g_8c506064 = 0x40000;
        o->f24 = 2;
        operation_8c220be8((int)(g_8c467180->f2c->f4b8), 1);
    }
}
