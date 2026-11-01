/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207470
 * function: operation_8c207470
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 6 of 78 reference instruction lines
 * differing bytes: 8
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
struct Object {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
};
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
void operation_8c207470(Object *o, int a1)
{
    int t1;
    int t2;
    int t4;
    int v1;
    int t5;
    int t3;
    v1 = (int)o->f04;
    t1 = call_8c18e8a0(v1, 0x64);
    if ((short)a1 > 0 || ((short)a1 < 0 && -(short)a1 < (short)t1)) {
        t5 = call_8c18e768((int)(o->f08), 0x64);
        t4 = call_8c18e768((int)(o->f0a), 0x64);
        t2 = call_8c18e768(v1, 0x64);
        t3 = call_8c18e768((int)(o->f06), 0x64);
        t2 = t2 + t3 + t4 + t5;
        if (0xc8 > (short)t2) {
            o->f04 += a1;
        } else if ((short)t2 == 0xc8) {
            if ((short)(0x63 - t1) < (short)a1) {
                a1 = 0x63 - t1;
            }
            o->f04 += a1;
        }
    }
}
