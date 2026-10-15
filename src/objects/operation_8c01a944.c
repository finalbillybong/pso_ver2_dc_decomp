typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c608 S_g8c41c608;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_vv4 S_vv4;
typedef struct S_vv9 S_vv9;
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c2e2fe4;
extern Block8 g_8c2e2fec;
extern int g_8c41bce4;
extern int g_8c41bcf4;
extern S_g8c41c608 *g_8c41c608;
extern S_g8c41c60c *g_8c41c60c;
extern void *g_8c41c970;
extern char g_8c41c974;
extern char g_8c2e3014[];
extern int operation_8c19fb18(int);
extern void call_8c19fbe0(void *, int, int, int);
extern void call_8c1cdc30(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
void operation_8c01a944(int a0, int a1)
{
    Frame frame;
    S_vv4 *v4;
    int v8;
    S_vv9 *v9;
    int t1;
    int t2;
    if (g_8c41c974 == 0) {
        g_8c41c970 = (g_8c2e3014 + 0x1b3);
        g_8c41c974 = 1;
    }
    if (g_8c41c60c != 0) {
        v4 = (S_vv4 *)g_8c41c60c;
        v4->f04 |= 1;
        g_8c41c60c = (S_g8c41c60c *)0;
    }
    t1 = operation_8c19fb18((int)g_8c41c970);
    g_8c41c60c = (S_g8c41c60c *)(int)(t1);
    v8 = (int)0;
    while (a0 > v8) {
        call_8c19fbe0(g_8c41c60c, 0x2c, (int)(a1 + v8 * 0x98 + 0xc), v8);
        v8 = (int)(v8 + 1);
    }
    call_8c1cdc30(g_8c41c60c);
    if (g_8c41c608 != 0) {
        v9 = (S_vv9 *)g_8c41c608;
        v9->f04 |= 1;
        g_8c41c608 = (S_g8c41c608 *)0;
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2fe4;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fec;
    t2 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
    g_8c41c608 = (S_g8c41c608 *)(int)(t2);
    operation_8c119764(t2, (int)(a1 + 0x2c), 3);
    g_8c41bcf4 = 0;
    g_8c41bce4 = 0x11;
}
