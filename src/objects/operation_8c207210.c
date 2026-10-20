typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_9c Arg0_9c;
typedef struct S_vv78 S_vv78;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x56];
    short f8a;
    char unknown8c[0x10];
    Arg0_9c *f9c;
};
struct Arg0_9c {
    char f00;
};
struct S_vv78 {
    int f00;
};
extern int g_8c418244;
extern void call_8c0dc1a4(int, S_vv78 *, int);
void operation_8c207210(Object *o, int a1)
{
    int v79;
    int v80;
    S_vv78 *v78;
    short d;
    if ((g_8c418244 & 0x10) == 0) {
        d = (short)(o->f8a - o->f9c->f00 * 7);
        if (d >= 0 && !(d >= 7)) {
            v78 = (S_vv78 *)*(Arg0_30_0 **)((char *)o->f30 + (d << 2));
            if ((v78->f00 & 1) != 0) {
                call_8c0dc1a4(a1, v78, 1);
            }
        }
    }
}
