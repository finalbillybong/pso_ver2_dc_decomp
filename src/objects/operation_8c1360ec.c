typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg1 Arg1;
typedef struct S_vv38 S_vv38;
struct Frame {
    char f00;
    char unknown1[0x3];
    char f04;
    char f05;
    short f06;
    int f08;
    int f0c;
};
struct Arg1 {
    char f00;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x62];
    Arg0_84 *f84;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c46ed0c_0 {
    char f00;
};
struct S_vv38 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern void operation_8c0368a8(void *);
void operation_8c1360ec(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv38 *v38;
    if (a1 != 0) {
        *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&a1->f00;
    } else {
        if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
            *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2))))->f00;
        }
    }
    v38 = (S_vv38 *)o->f84;
    if (v38 != 0) {
        (&frame)->f04 = 0xb;
        (&frame)->f05 = 3;
        (&frame)->f06 = o->f20;
        (&frame)->f08 = *(short *)&(&frame)->f00;
        (&frame)->f0c = v38->f04;
        operation_8c0368a8((void *)(&(&frame)->f04));
    }
}
