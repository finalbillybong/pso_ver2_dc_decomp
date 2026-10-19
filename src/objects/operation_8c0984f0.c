typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0xc];
    int f30;
    char unknown34[0x4];
    int f38;
};
struct S_vv3 {
    char unknown0[0x30];
    char f30;
};
struct Arg0_20 {
    char unknown0[0x30];
    char f30;
};
extern int g_8c469e48;
extern int g_8c46b064;
extern int call_8c0353ec(Arg0_20 *);
extern void call_8c05fbf8(int, int, int, int);
extern int call_8c03530c(S_vv3 *);
extern void operation_8c09857c(void);
void operation_8c0984f0(Object *o)
{
    S_vv3 *v3;
    int t1;
    int t2;
    t1 = call_8c0353ec((Arg0_20 *)(o->f20));
    if (t1 == 0) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    call_8c05fbf8(0x50001, 0, 0, 0);
    v3 = (S_vv3 *)o->f20;
    if (v3->f30 == -1) {
        t2 = call_8c03530c(v3);
        o->f20->f30 = t2;
    } else {
        operation_8c09857c();
    }
    g_8c469e48 = 1;
    g_8c46b064 = 0;
    o->f38 = 0x3c;
    o->f30 = 2;
}
