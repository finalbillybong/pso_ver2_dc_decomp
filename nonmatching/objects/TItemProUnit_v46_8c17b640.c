/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17b640
 * function: TItemProUnit_v46_8c17b640
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 40 of 88 reference instruction lines
 * differing bytes: 32
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
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x9c];
    short f1dc;
};
extern int call_8c16337c(void *, int);
extern int call_8c247730(int, int);
void TItemProUnit_v46_8c17b640(Object *o)
{
    int v5;
    int v2;
    int v3;
    short v6;
    int v4;
    int v1;
    short v7;
    int v39;
    short v9;
    int t2;
    int t1;
    if (o->f1dc != 0) {
        t1 = call_8c16337c((void *)(o->f13c), 0xfc);
        if (t1 == 1) {
            v1 = (int)0x1d;
        } else {
            v1 = (int)0xe;
        }
        v2 = (int)0x13c;
        v39 = (short)v1;
        v3 = (int)0x3bc;
        v4 = (int)0x1dc;
        for (v5 = 0; v5 != 0x13; v5++) {
            if (v5 != 0xe && v5 != 0x11) {
                t2 = call_8c247730((int)((int)*(int *)((char *)o + v2) + v3), v5);
                v6 = (short)-1;
                if ((short)(char)t2 != v6) {
                    v7 = *(short *)((char *)o + v4) + (char)t2;
                    v9 = v7 - v39;
                    if ((short)v9 > 0) {
                        v7 = v1;
                    } else {
                        v9 = 0;
                    }
                    *(char *)((char *)((char *)((int)*(int *)((char *)o + v2) + v3) + 0x48) + ((short)v5)) = v7;
                    *(short *)((char *)((char *)o + 0x1de) + (v5 << 1)) = *(short *)((char *)o + v4) - v9;
                }
            }
        }
    }
}
