typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467220 S_g8c467220;
typedef struct S_g8c467220_42c S_g8c467220_42c;
struct S_g8c467220 {
    char unknown0[0x42c];
    S_g8c467220_42c *f42c;
};
struct S_g8c467220_42c {
    char unknown0[0x8];
    int f08;
};
extern S_g8c467220 *g_8c467220;
extern int g_8c467224;
extern int g_8c467228;
extern int g_8c4703c0;
extern char g_8c2f2f78[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
extern int call_8c03ef88(int, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c04ff30(void)
{
    int v1;
    char *v65;
    char *v66;
    int v63;
    int v64;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (int)(g_8c4703c0 == 3);
    if (v1 != 0) {
        t1 = call_8c011ecc(0x440);
        if (t1 != 0) {
            call_8c03d610(t1, 1, (void *)((void *)0x8c2f2e48), 0, 0, 0);
        }
        g_8c467220 = (S_g8c467220 *)(int)(t1);
        t2 = call_8c118528((void *)((g_8c2f2f78 + 0x138)));
        g_8c467228 = (int)(t2);
        v65 = (char *)g_8c467220->f42c->f08;
        t3 = call_8c03ef88((int)(v65), 0x12);
        g_8c467224 = (int)(t3);
    } else {
        t4 = call_8c011ecc(0x440);
        if (t4 != 0) {
            call_8c03d610(t4, 1, (void *)((void *)0x8c2f2e04), 0, 0, 0);
        }
        g_8c467220 = (S_g8c467220 *)(int)(t4);
        t5 = call_8c118528((void *)((g_8c2f2f78 + 0x152)));
        g_8c467228 = (int)(t5);
        v66 = (char *)g_8c467220->f42c->f08;
        t6 = call_8c03ef88((int)(v66), 0x12);
        g_8c467224 = (int)(t6);
    }
    v63 = (int)0;
    while (2 > v63) {
        t7 = record24_8c17948c((int)(v63 + 0x18));
        v64 = (int)(v63 << 2);
        *(int *)((char *)((char *)v64 + 0x0) + ((int)((void *)0x8c467200))) = (int)(t7);
        t8 = record30_8c1794a0((int)(v63 + 0x18));
        *(int *)((char *)((char *)v64 + 0x0) + ((int)((void *)0x8c467208))) = (int)(t8);
        t9 = block32_8c1794b4((int)(v63 + 0x18));
        *(int *)((char *)((char *)v64 + 0x0) + ((int)((void *)0x8c467210))) = (int)(t9);
        t10 = record30_8c1794c8((int)(v63 + 0x18));
        *(int *)((char *)((char *)v64 + 0x0) + ((int)((void *)0x8c467218))) = (int)(t10);
        v63 = (int)(v63 + 1);
    }
}
