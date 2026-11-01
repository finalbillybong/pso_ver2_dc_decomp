/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2265cc
 * function: operation_8c2265cc
 * language: c
 * reference size: 304 bytes
 * compiled size: 308 bytes (+1.3%)
 * differing lines: 80 of 126 reference instruction lines
 * differing bytes: 162
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
    char unknown0[0x1970];
    float f1970;
    float f1974;
    float f1978;
    float f197c;
    float f1980;
    float f1984;
    float f1988;
    float f198c;
};
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
void operation_8c2265cc(Object *o, unsigned char a1, float f0, float f1)
{
    int v1;
    float v2;
    float v3;
    int t1;
    int t2;
    o->f1970 = f0;
    o->f1974 = f1;
    if (a1 == 0x24) {
        o->f1978 = o->f1970 + *(float *)((char *)0x8c337614 + (a1 << 2));
        o->f197c = o->f1974 + 20.0f;
        o->f1980 = 0.0f;
        o->f1984 = 0.0f;
        o->f1988 = 0.0f;
        o->f198c = 0.0f;
        return;
    }
    v1 = a1;
    t2 = call_8c18e8a0(v1, 6);
    v2 = (float)((float)t2 * 20.0f);
    t1 = call_8c18e768(v1, 6);
    o->f1978 = o->f1970 + *(float *)((char *)0x8c337614 + (a1 << 2));
    o->f197c = o->f1974 + 20.0f;
    o->f1980 = v2 / 128.0f;
    v3 = (float)((float)t1 * 20.0f);
    o->f1984 = v3 / 128.0f;
    o->f1988 = (v2 + *(float *)((char *)0x8c337614 + (a1 << 2))) / 128.0f;
    o->f198c = (v3 + 20.0f) / 128.0f;
}
