typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2f574c S_g8c2f574c;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x2c];
    int f60;
    Arg0_64 *f64;
    char unknown68[0xc];
    int f74;
};
extern int call_8c13fd44(Object *);
extern int call_8c34d43c(void *, int);
extern int call_8c34d9b8(void *);
extern int call_8c011e9c(int);
extern void call_8c34d6ae(void *, int, void *);
void operation_8c13fb5c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c13fd44(o);
    t2 = call_8c34d43c((void *)(*(S_g8c2f574c **)((char *)0x8c2f574c + (o->f74 << 4))), t1);
    o->f64 = (Arg0_64 *)t2;
    if (t2 != 0) {
        o->f24 = 0;
        o->f28 = 0;
        t3 = call_8c34d9b8((void *)(o->f64));
        t4 = call_8c011e9c((int)(t3 << 0xb));
        *(int *)((char *)((char *)o + 0x3c) + (o->f60 << 2)) = (int)(t4);
        if (t4 != 0) {
            call_8c34d6ae((void *)(o->f64), t3, (void *)(*(Arg0_3c **)((char *)((char *)o + 0x3c) + (o->f60 << 2))));
            o->f30 = 2;
        }
    }
}
