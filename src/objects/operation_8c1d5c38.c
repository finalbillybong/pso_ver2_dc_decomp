typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    unsigned char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
};
extern int operation_192b4c(void *);
extern void call_8c1d5f4c(Object *);
extern void operation_192c08(void *);
extern void call_8c1d61e4(Object *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c1d5c38(Object *o)
{
    int v4;
    unsigned char v3;
    int t1;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    v3 = (unsigned char)o->f68;
    if (((v3 & 1)) != 0) {
        v4 = !(o->f34 & 1);
        if (v4 == 0 && ((o->f34 & 4)) == 0) {
            if (((v3 & 4)) == 0) {
                t1 = operation_192b4c((void *)(o->f6c));
                if (t1 == 0) {
                    goto L_8c1d5c9c;
                }
                call_8c1d5f4c(o);
            } else {
                operation_192c08((void *)(o->f6c));
            }
L_8c1d5c9c:;
            call_8c1d61e4(o);
        }
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
