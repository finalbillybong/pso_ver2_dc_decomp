typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_8 S_L8c4daae0_8;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
    Arg0_38 *f38;
    int f3c;
};
struct Arg0_38 {
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
void operation_8c2089ac(Object *o)
{
    int t1;
    int t2;
    if (o->f38 != 0 && ((o->f38->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)(o->f38));
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c208a06;
            }
        } else {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
            call_8c220c40(9, 1);
            o->f34 = 1;
            if ((int)((&g_8c4daae0)->f08) != -1) {
                t2 = create_loader_8c1735f8((int)((&g_8c4daae0)->f08));
                o->f3c = (int)(t2);
            }
            o->f24 = 0xc;
            goto L_8c208a20;
L_8c208a06:;
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
            call_8c220c40(0xa, 1);
            o->f34 = 0;
            o->f24 = 0xc;
        }
    }
L_8c208a20:;
    if (o->f38 != 0 && ((o->f38->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f38));
        o->f38 = (Arg0_38 *)0;
        call_8c220c40(0xa, 1);
        o->f34 = 0;
        o->f24 = 0xc;
    }
}
