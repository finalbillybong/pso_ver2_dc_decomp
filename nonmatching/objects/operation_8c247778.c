/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c247778
 * function: operation_8c247778
 * language: c
 * reference size: 160 bytes
 * compiled size: 162 bytes (+1.2%)
 * differing lines: 16 of 79 reference instruction lines
 * differing bytes: 77
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
};
void operation_8c247778(Object *o, int a1)
{
    int v6;
    int v2;
    int v3;
    char v5;
    int v7;
    int v11;
    int v12;
    char pm2;
    char v1;
    char pm1;
    int pm4;
    v1 = (char)-1;
    pm4 = 0;
    v2 = (int)pm4;
    for (; 0x13 > v2; ) {
        pm4 = (int)0;
        v3 = pm4;
        if ((short)v2 >= 0) {
            v3 = (int)0;
            if ((short)v2 < 0x13) {
                v3 = 1;
            }
        }
        if (v3 == 0) {
            v7 = (int)0;
        } else {
            int v8;
            v5 = (*(char *)((char *)((char *)o + 0x48) + ((short)v2)));
            v7 = (int)v5;
            v6 = (int)0;
            if ((char)v5 >= v1) {
                v6 = (int)0;
                if (0x1d >= (char)v5) {
                    v6 = (int)1;
                }
            }
            if (v6 == 0) {
                v7 = (int)0x1d;
            }
            pm2 = o->tag;
            v8 = (char)pm2;
            v3 = (int)v8;
            if ((char)v7 > (char)v8) {
                v7 = (int)v8;
            }
        }
        pm1 = (char)v7;
        v12 = (int)v7;
        if (pm1 != v1) {
            if ((char)(v7 + a1) < 0) {
                v12 = (int)-1;
            } else {
                v12 = (int)((a1 + v7));
                v11 = (char)o->tag;
                if ((char)(a1 + v7) > (char)v11) {
                    v12 = (int)v11;
                }
                v3 = (int)v11;
                if (0x1d < (char)v12) {
                    v12 = (int)0x1d;
                }
            }
            *((char *)((char *)o + 0x48) + ((short)v2)) = v12;
        }
        v2 += 1;
    }
}
