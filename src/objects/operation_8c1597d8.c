typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_8 S_L8c4daae0_8;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
    char unknown34[0x4];
    int f38;
    int f3c;
};
struct Arg0_30 {
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
void operation_8c1597d8(Object *o)
{
    int t1;
    int t2;
    if (o->f30 != 0) {
        if (((o->f30->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f30));
            if (t1 == 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
                call_8c220c40(9, 1);
                o->f3c = 1;
                if ((int)((&g_8c4daae0)->f08) != -1) {
                    t2 = create_loader_8c1735f8((int)((&g_8c4daae0)->f08));
                    o->f38 = (int)(t2);
                }
                o->f24 = 5;
                return;
            }
            if (t1 == 1) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
                call_8c220c40(0xa, 1);
                o->f3c = 0;
                o->f24 = 5;
                return;
            }
        }
        if (((o->f30->f80 & 0xffff & 4)) != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
            call_8c220c40(0xa, 1);
            o->f3c = 0;
            o->f24 = 5;
        }
    }
}
