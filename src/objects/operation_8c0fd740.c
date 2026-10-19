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
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x62];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_vv2 {
    char f00;
};
extern void call_8c05406c(Object *, Frame *);
float operation_8c0fd740(Object *o)
{
    Frame frame;
    int v6;
    if ((unsigned int)o->f20 >= (unsigned int)0x4000 && o->f84 != 0) {
        if (o->f84 == 0) {
            v6 = (int)0;
        } else {
            if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                v6 = (int)0;
                goto L_8c0fd788;
            }
            *(SBlock4 *)&frame = *(SBlock4 *)((char *)*(S_g8c46ed0c **)0x8c46ed0c + (o->f84->f04 << 2));
            v6 = (int)1;
        }
L_8c0fd788:;
        if (v6 != 0) {
            o->f30a = 5;
            *(short *)&(&frame)->f00 = o->f30a;
            call_8c05406c(o, (Frame *)((&frame)));
        }
    }
    return 0.0f;
}
