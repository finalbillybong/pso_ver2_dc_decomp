typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fdac S_g8c46fdac;
typedef struct S_g8c46fdac_42c S_g8c46fdac_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    void *f28;
    char unknown2c[0x348];
    float f374;
    char unknown378[0x64];
    int f3dc;
};
struct S_g8c46fdac {
    char unknown0[0x42c];
    S_g8c46fdac_42c *f42c;
};
struct S_g8c46fdac_42c {
    char unknown0[0xc];
    int f0c;
};
extern int call_8c05a0a8(void);
extern void call_8c05b92c(Object *, int);
void operation_8c0d7794(Object *o)
{
    int v1;
    int t1;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        v1 = (int)(1.0f <= o->f374);
        if (v1 != 0) {
            o->f28 = (void *)0x8c46fdb0;
            call_8c05b92c(o, 0x1b);
            o->f3dc = 1;
            return;
        }
        o->f28 = (void *)(*(S_g8c46fdac **)0x8c46fdac)->f42c->f0c;
        call_8c05b92c(o, 0x1a);
        o->f3dc = 0;
    }
}
