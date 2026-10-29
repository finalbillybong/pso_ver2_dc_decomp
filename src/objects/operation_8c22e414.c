typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
struct Object {
    char unknown0[0x54];
    int f54;
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x30];
    int f94;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x80];
    int f80;
};
extern S_g8c467180 *g_8c467180;
extern void word_operation_8c18490c(unsigned int);
extern int operation_8c010298(int, int, int, int);
extern void operation_8c22e8e4(void *, int, int);
void operation_8c22e414(Object *o)
{
    int t1;
    int pm2;
    int pm3;
    word_operation_8c18490c((unsigned int)(o->f54));
    pm3 = o->f60;
    pm2 = o->f54;
    t1 = operation_8c010298((pm2), (int)((0x75 + (char *)o)), (o->f58), (pm3));
    if (0 == t1) {
        o->f94 = 0xd;
        operation_8c22e8e4((void *)o, (int)(g_8c467180->f2c->f80), 1);
    }
}
