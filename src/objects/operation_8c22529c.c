typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x80];
    char f80;
    char f81;
    char unknown82[0x4];
    short f86;
    char unknown88[0xc];
    Arg0_94 *f94;
    Arg0_98 *f98;
};
struct Arg0_94 {
    int f00;
};
extern int operation_8c225448(void *);
extern int call_8c21f468(void);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
void operation_8c22529c(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c225448((void *)o);
    if (o->f81 == 0 && !(t1 >= o->f86)) {
        t2 = call_8c21f468();
        if (!(2 > t2)) {
            goto L_8c2252da;
        }
    }
    call_8c05fbf8(0x50006, 0, 0, 0);
    return;
L_8c2252da:;
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f94->f00 = 1;
    o->f80 |= 1;
    operation_8c19a044((void *)(o->f98), 2);
}
