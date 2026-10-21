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
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
    char unknown88[0x5c];
    int fe4;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_g8c46ed0c_0 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern int lookup_low_id(int);
extern int angle_between_xz(void *, void *);
extern void operation_8c022034(void *, int, int);
extern void call_8c05406c(Object *, Frame *);
void operation_8c0f1e04(Object *o, int a1)
{
    Frame frame;
    int v4;
    int t1;
    int t2;
    switch (o->fe4) {
    case 1:
        t1 = lookup_low_id((int)((unsigned short)a1));
        if (t1 != 0) {
            o->fe4 = 2;
            t2 = angle_between_xz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
            operation_8c022034((void *)t1, 0xc, t2);
            if (o->f84 == 0) {
                v4 = (int)0;
            } else {
                if (o->f84->f04 >= 0) {
                    if (!(o->f84->f04 > 0xb9f)) {
                        goto L_8c0f1e60;
                    }
                }
                v4 = (int)0;
                goto L_8c0f1e74;
L_8c0f1e60:;
                *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2))))->f00;
                v4 = (int)1;
            }
L_8c0f1e74:;
            if (v4 != 0) {
                *(short *)&(&frame)->f00 = o->fe4;
                if (o->f84 != 0) {
                    if (o->f84->f04 >= 0) {
                        if (!(o->f84->f04 > 0xb9f)) {
                            *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
                        }
                    }
                }
                call_8c05406c(o, (Frame *)((&frame)));
            }
        }
    }
}
