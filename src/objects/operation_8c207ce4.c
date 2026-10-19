typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c504964 S_g8c504964;
typedef struct S_g8c5049ec S_g8c5049ec;
typedef struct S_g8c505960 S_g8c505960;
typedef struct S_g8c505960_s4 S_g8c505960_s4;
typedef struct S_vv3 S_vv3;
struct S_g8c505960_s4 {
    char unknown0[0x24];
    int f24;
};
struct S_vv3 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c335d68;
extern Block8 g_8c335d70;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c504964 *g_8c504964;
extern S_g8c5049ec *g_8c5049ec;
extern S_g8c505960 *g_8c505960;
extern void call_8c12b77c(void *, int, int);
extern int call_8c2509e4(void);
extern void request_resource_release(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
void operation_8c207ce4(int a0)
{
    Frame frame;
    S_vv3 *v3;
    int t1;
    int t2;
    if (g_8c504964 != 0) {
        call_8c12b77c(g_8c504964, a0, 0x124);
        if (g_8c505960 != 0) {
            ((S_g8c505960_s4 *)((char *)g_8c505960 + 0x4))->f24 = 2;
        }
        t1 = call_8c2509e4();
        if (t1 != 0) {
            v3 = (S_vv3 *)g_8c46fe20;
            if (v3 != 0) {
                v3->f20 |= 1;
                if (g_8c4d59d8 != 0) {
                    g_8c4d59d8->f04 |= 0x10;
                }
            }
            if (g_8c5049ec != 0) {
                request_resource_release(g_8c5049ec);
                g_8c5049ec = (S_g8c5049ec *)0;
            }
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c335d68;
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c335d70;
            t2 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
            g_8c5049ec = (S_g8c5049ec *)(int)(t2);
            operation_8c0dc610((void *)t2, -13000.0f);
            operation_8c119764((int)g_8c5049ec, (int)((int)g_8c504964 + 4), 0x80);
        }
    }
}
