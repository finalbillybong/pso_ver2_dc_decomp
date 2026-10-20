typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg1 Arg1;
typedef struct S_vv29 S_vv29;
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
    char unknown30c[0x4c];
    int f358;
};
struct Arg1 {
    short f00;
};
struct Frame {
    short f00;
    short f02;
};
struct S_vv29 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c46ed0c;
extern void operation_8c05428c(void *, int, int);
void operation_8c257a50(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    S_vv29 *v29;
    int v28;
    if (a1 != 0) {
        o->f30a = a1->f00;
    }
    if (o->f30a != 0) {
        if (o->f30a != 1) {
            o->f30a = 0;
        } else {
            o->f358 = 0;
            if (a2 != 0) {
                operation_8c05428c((void *)o, 0, 1);
            }
        }
    }
    (&frame)->f00 = o->f30a;
    v29 = (S_vv29 *)o->f84;
    if (v29 != 0) {
        v28 = v29->f04;
        if (v28 >= 0 && !(v28 > 0xb9f)) {
            *(Frame *)((char *)g_8c46ed0c + (v28 << 2)) = frame;
        }
    }
}
