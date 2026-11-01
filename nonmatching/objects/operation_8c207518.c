/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207518
 * function: operation_8c207518
 * language: c
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 54 of 78 reference instruction lines
 * differing bytes: 155
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
void operation_8c207518(Object *o, short d)
{
    int v;
    short m;
    int a;
    int b;
    int c;
    short sum;
    v = o->f06;
    m = call_8c18e8a0(v, 0x64);
    if (d > 0 || (d < 0 && -d < m)) {
        a = call_8c18e768(o->f08, 0x64);
        b = call_8c18e768(o->f0a, 0x64);
        c = call_8c18e768(o->f04, 0x64);
        sum = c + call_8c18e768(v, 0x64) + b + a;
        if (sum < 0xc8) {
            o->f06 += d;
        } else if (sum == 0xc8) {
            if ((short)(0x63 - m) < d) {
                d = 0x63 - m;
            }
            o->f06 += d;
        }
    }
}
