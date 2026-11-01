/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c016108
 * function: operation_8c016108
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 10 of 68 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_g8c41cba0 {
    char unknown0[0x10];
    int f10;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41c60c *g_8c41c60c;
extern S_g8c41cba0 *g_8c41cba0;
extern char g_8c2e3014[];
extern int operation_8c1cdc80(void *);
extern void request_resource_release(void *);
extern void operation_8c02ea04(void *, void *, int, int);
extern void operation_8c017694(void);
extern void operation_8c02ed00(void *, void *);
void operation_8c016108(void)
{
    S_vv1 *v1;
    int t1;
    int t2;
    v1 = (S_vv1 *)g_8c41c60c;
    if (v1 != 0) {
        if (((v1->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1cdc80((void *)v1);
            request_resource_release(g_8c41c60c);
            g_8c41c60c = (S_g8c41c60c *)0;
            operation_8c02ea04(g_8c418a00, (void *)((int)g_8c418a00 + t1 * 0x1c + 0xf14), (int)(g_8c2e3014 + 0x58), (int)(g_8c2e3014 + 0x57));
            operation_8c017694();
            return;
        }
        if (((g_8c41cba0->f10 & 0x400)) != 0) {
            t2 = operation_8c1cdc80((void *)v1);
            operation_8c02ed00(g_8c418a00, (void *)((int)g_8c418a00 + t2 * 0x1c + 0xf14));
        }
    }
}
