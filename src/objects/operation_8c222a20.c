typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22cc Arg0_22cc;
typedef struct Arg0_e0 Arg0_e0;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2290];
    Arg0_22b8 *f22b8;
    char unknown22bc[0x10];
    Arg0_22cc *f22cc;
};
extern int operation_8c1cdc80(void *);
extern int call_8c372d98(void *);
extern int operation_8c010240(int, int, int);
extern void call_8c220c40(int, int);
extern void operation_8c223228(void *);
void operation_8c222a20(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    if (o->f22b8 != 0 && o->f22cc != 0) {
        t3 = operation_8c1cdc80((void *)(o->f22b8));
        v1 = (int)(t3 * 0xb8);
        t1 = call_8c372d98((void *)(*(Arg0_e0 **)((char *)((char *)o + 0xe0) + (v1))));
        if (t1 == 0) {
            t2 = operation_8c010240((int)(*(Arg0_e0 **)((char *)((char *)o + 0xe0) + (v1))), (int)((int)o + v1 + 0x2c), (int)(o->f22cc));
            if (t2 == 0) {
                o->f24 = 9;
                return;
            }
            call_8c220c40(0x19, 1);
            operation_8c223228((void *)o);
            o->f24 = 5;
        }
    }
}
