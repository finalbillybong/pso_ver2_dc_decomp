/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c196ec4
 * function: operation_8c196ec4
 * language: c
 * reference size: 384 bytes
 * compiled size: 380 bytes (-1.0%)
 * differing lines: 170 of 171 reference instruction lines
 * differing bytes: 297
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x650];
    int f650;
    char unknown654[0xc];
    int f660;
};
extern int rand(void);
void operation_8c196ec4(Object *o)
{
    int v1;
    int v7;
    int v3;
    int v4;
    int v2;
    int v19;
    int v20;
    int v5;
    int v22;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)0;
    while (0x16 > v1) {
        v2 = (int)0;
        while (9 > v2) {
            *(int *)((char *)((char *)((char *)(int *)((char *)o + 0x20) + o->f650 * 0x318 + v1 * 0x24) + 0x0) + (v2 << 2)) = 0;
            v2 = (int)(v2 + 1);
        }
        v1 = (int)(v1 + 1);
    }
    o->f660 = 0;
    v3 = (int)0;
    while (8 > v3) {
        t4 = rand();
        v4 = (int)(int)((float)t4 / 32768.0f * 10.0f + 1.0f);
        t5 = rand();
        v5 = (int)(int)((float)t5 / 32768.0f * 8.91f);
        t1 = rand();
        while (v4 > 0) {
            t3 = rand();
            v7 = (int)((short)v5 + (int)(((float)t3 / 32768.0f - 0.5f) * 6.0f));
            t2 = rand();
            v19 = (int)(int)(((float)t2 / 32768.0f - 0.5f) * 6.0f);
            v20 = (int)((short)(int)((float)t1 / 32768.0f * 21.78f) + v19);
            v22 = (int)(short)v20;
            if ((short)v7 >= 0 && !((short)v7 >= 9) && v22 >= 0 && !(v22 >= 0x16)) {
                *(int *)((char *)((char *)(o->f650 * 0x318 + ((char *)o + 0x20) + v22 * 0x24) + 0x0) + ((short)v7 << 2)) = 1;
                *(int *)((char *)o + 0x660) += 1;
            }
            v4 -= 1;
        }
        v3 = (int)(v3 + 1);
    }
}
