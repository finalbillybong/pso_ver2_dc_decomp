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
    int f88;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
    char f04;
    char f05;
    short f06;
    int f08;
    int f0c;
    int f10;
};
struct S_vv2 {
    char f00;
};
extern int g_8c418248;
extern int g_8c44be04;
extern S_g8c46ed0c *g_8c46ed0c;
extern void call_8c05406c(Object *, Frame *);
extern void operation_8c0368a8(void *);
float operation_8c1e4b64(Object *o)
{
    Frame frame;
    int v6;
    S_vv2 *v2;
    if ((unsigned int)o->f20 >= (unsigned int)0x1000 && o->f84 != 0) {
        if (o->f84 == 0) {
            v6 = (int)0;
        } else {
            if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                v6 = (int)0;
                goto L_8c1e4bb0;
            }
            *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2));
            v6 = (int)1;
        }
L_8c1e4bb0:;
        if (v6 != 0) {
            *(short *)&(&frame)->f00 = 1;
            if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
                *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
            }
            call_8c05406c(o, (Frame *)((&frame)));
            (&frame)->f04 = 0x67;
            (&frame)->f05 = 4;
            (&frame)->f06 = o->f20;
            (&frame)->f08 = (int)(g_8c44be04);
            (&frame)->f0c = (int)(o->f88);
            (&frame)->f10 = (int)(g_8c418248);
            operation_8c0368a8((void *)(&(&frame)->f04));
        }
    }
    return 0.0f;
}
