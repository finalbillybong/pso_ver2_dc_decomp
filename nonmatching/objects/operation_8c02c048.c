/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02c048
 * function: operation_8c02c048
 * language: c
 * reference size: 124 bytes
 * compiled size: 120 bytes (-3.2%)
 * differing lines: 6 of 50 reference instruction lines
 * differing bytes: 52
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x702];
    float f724;
};
extern int operation_2392a8(void *);
extern int operation_2391f4(void *);
void operation_8c02c048(Object *o, int a1)
{
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0) {
        t1 = operation_2392a8((void *)((void *)0x8c41ce5c));
        if ((unsigned char)t1 == 2) {
            v2 = (int)0;
            if (*(int *)0x8c2e2ad8 != 0) {
                t2 = operation_2391f4((void *)((void *)0x8c41ce5c));
                if ((char)t2 == 1) {
                    v2 = (int)1;
                }
            }
            if (v2 != 0) {
                o->f724 = (float)a1;
            } else {
                return;
            }
        }
    }
}
