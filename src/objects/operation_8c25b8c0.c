typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x1c];
    int f50;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
void operation_8c25b8c0(Object *o)
{
    int t1;
    if (o->f30 != 0) {
        if (((o->f30->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f30));
            if (t1 != 0) {
                if (t1 == 1) {
                    goto L_8c25b91e;
                }
                return;
            }
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
            }
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
            }
            o->f24 = 0;
            o->f50 = 1;
            o->f20 = 9;
            return;
L_8c25b91e:;
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
            }
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
            }
            o->f24 = 0;
            o->f50 = 1;
            o->f20 = 0xa;
            return;
        }
        if (((o->f30->f80 & 0xffff & 4)) == 0) {
            return;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        o->f24 = 0;
        o->f50 = 1;
        o->f20 = 0xa;
        return;
    }
    if (o->f2c != 0) {
        request_resource_release((void *)(o->f2c));
        o->f2c = (Arg0_2c *)0;
    }
    if (o->f30 != 0) {
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
    }
    o->f24 = 0;
    o->f50 = 1;
    o->f20 = 0xa;
}
