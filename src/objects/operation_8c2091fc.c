typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_8 S_L8c4daae0_8;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
    int f38;
    Arg0_3c *f3c;
};
struct Arg0_3c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_L8c4daae0 {
    char unknown0[0x8];
    S_L8c4daae0_8 *f08;
};
extern S_L8c4daae0 g_8c4daae0;
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void call_8c220c40(int, int);
extern int create_loader_8c1735f8(int);
void operation_8c2091fc(Object *o)
{
    int t1;
    int t2;
    if (o->f3c != 0 && ((o->f3c->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f3c));
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c209256;
            }
        } else {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
            call_8c220c40(9, 1);
            o->f34 = 1;
            if ((int)((&g_8c4daae0)->f08) != -1) {
                t2 = create_loader_8c1735f8((int)((&g_8c4daae0)->f08));
                o->f38 = (int)(t2);
            }
            o->f24 = 0xc;
            goto L_8c209270;
L_8c209256:;
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
            call_8c220c40(0xa, 1);
            o->f34 = 0;
            o->f24 = 0xc;
        }
    }
L_8c209270:;
    if (o->f3c != 0 && ((o->f3c->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f3c));
        o->f3c = (Arg0_3c *)0;
        call_8c220c40(0xa, 1);
        o->f34 = 0;
        o->f24 = 0xc;
    }
}
