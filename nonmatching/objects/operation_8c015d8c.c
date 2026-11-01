/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c015d8c
 * function: operation_8c015d8c
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 12 of 60 reference instruction lines
 * differing bytes: 21
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
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c60c S_g8c41c60c;
struct S_g8c41c60c {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41c60c *g_8c41c60c;
extern char g_8c2e3014[];
extern int operation_8c1cdc80(void *);
extern void request_resource_release(void *);
extern void operation_8c02ea04(void *, int, void *, void *);
extern void operation_8c017694(void);
extern void operation_8c016950(void);
void operation_8c015d8c(void)
{
    int t1;
    S_g8c418a00 *v1;
    if (g_8c41c60c != 0) {
        if (((g_8c41c60c->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1cdc80((void *)g_8c41c60c);
            request_resource_release((void *)g_8c41c60c);
            v1 = g_8c418a00;
            g_8c41c60c = (S_g8c41c60c *)0;
            operation_8c02ea04(v1, (int)((int)v1 + t1 * 0x1c + 0xf14), (void *)((g_8c2e3014 + 0x57)), (void *)((g_8c2e3014 + 0x57)));
            operation_8c017694();
            return;
        }
        if (((g_8c41c60c->f80 & 0xffff & 4)) != 0) {
            request_resource_release((void *)g_8c41c60c);
            g_8c41c60c = (S_g8c41c60c *)0;
            operation_8c016950();
        }
    }
}
