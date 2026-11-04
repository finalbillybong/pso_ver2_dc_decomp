/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01669c
 * function: operation_8c01669c
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 18 of 157 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c604 S_g8c41c604;
typedef struct S_g8c41c608 S_g8c41c608;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct S_vv1 S_vv1;
typedef struct S_x38544 S_x38544;
typedef struct S_x98032 S_x98032;
struct S_vv1 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct Frame {
    Block8 f00;
    char unknown8[0x14];
    Block8 f1c;
    char unknown24[0x14];
};
struct S_x98032 {
    Block8 f00;
};
struct S_g8c41cba0 {
    char unknown0[0x10];
    int f10;
};
struct S_x38544 {
    Block8 f00;
};
extern int g_8c418a00;
extern int g_8c41bcf4;
extern S_g8c41c604 *g_8c41c604;
extern S_g8c41c608 *g_8c41c608;
extern S_g8c41c60c *g_8c41c60c;
extern S_g8c41cba0 *g_8c41cba0;
extern char g_8c2e3014[];
extern int operation_8c1cdc80(void *);
extern void request_resource_release(void *);
extern void operation_8c02ea04(void *, void *, int, int);
extern void operation_8c016950(void);
extern void operation_8c119764(int, int, int);
extern void call_8c119c78(void *);
extern void operation_8c02ed00(void *, void *);
extern void operation_8c017334(void);
void operation_8c01669c(void)
{
    Frame frame;
    S_vv1 *v1;
    int v33;
    int v13;
    int v34;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)g_8c41c60c;
    if (v1 == 0) {
        return;
    }
    if (((v1->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1cdc80((void *)v1);
        request_resource_release(g_8c41c60c);
        g_8c41c60c = (S_g8c41c60c *)0;
        v33 = (int)g_8c418a00;
        v13 = v33 + 0x1dd4 + t1 * 0x98;
        (&frame)->f1c.words[0] = ((int *)v13)[0];
        (&frame)->f1c.words[1] = ((int *)v13)[1];
        operation_8c02ea04((void *)v33, (void *)(&(&frame)->f1c), (int)(g_8c2e3014 + 0x57), (int)(g_8c2e3014 + 0x57));
        if (g_8c41c604 != 0) {
            request_resource_release(g_8c41c604);
            g_8c41c604 = (S_g8c41c604 *)0;
        }
        operation_8c016950();
        return;
    }
    if (g_8c41c608 != 0) {
        t2 = operation_8c1cdc80((void *)v1);
        if (t2 != g_8c41bcf4) {
            operation_8c119764((int)g_8c41c608, (int)(g_8c418a00 + t2 * 0x98 + 0x1dfc), 3);
            call_8c119c78(g_8c41c608);
            if (g_8c41c604 != 0) {
                request_resource_release(g_8c41c604);
                g_8c41c604 = (S_g8c41c604 *)0;
            }
            g_8c41bcf4 = (int)(t2);
            return;
        }
    }
    v13 = (int)g_8c41cba0->f10;
    if (((v13 & 0x400)) != 0) {
        t3 = operation_8c1cdc80(g_8c41c60c);
        v34 = (int)g_8c418a00;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&((S_x38544 *)(v34 + 0x1dd4 + t3 * 0x98))->f00;
        operation_8c02ed00((void *)v34, (void *)(&frame));
        return;
    }
    if (((v13 & 2)) != 0) {
        if (g_8c41c604 != 0) {
            request_resource_release(g_8c41c604);
            g_8c41c604 = (S_g8c41c604 *)0;
            return;
        }
        operation_8c017334();
    }
}
