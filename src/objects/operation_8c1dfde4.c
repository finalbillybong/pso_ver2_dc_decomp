typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    int f70;
    char unknown74[0x8];
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0xbc];
    int fbc;
};
extern int call_8c1e0e4c(void);
extern void operation_8c1e220c(void *);
extern void call_8c1e0174(Object *, unsigned char);
extern void call_8c1e0324(Object *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
void operation_8c1dfde4(Object *o)
{
    int t1;
    if (((o->f68 & 0x200)) == 0) {
        t1 = call_8c1e0e4c();
        if (t1 != 0) {
            if (*(int *)0x8c467188 == 0) {
                o->f70 = 0x3c;
            }
            o->f68 &= -0x101;
            o->f7c->fbc &= -0x41;
            if (((o->f68 & 0x40)) == 0) {
                operation_8c1e220c((void *)(o->f7c));
            }
        }
        call_8c1e0174(o, *(unsigned char *)0x8c41ccec);
        call_8c1e0324(o);
    }
    if (o->f70 > 0) {
        o->f70 -= 1;
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
}
