/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0315d8
 * function: operation_8c0315d8
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 2 of 75 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
};
struct Arg1 {
    unsigned short f00;
    char unknown2[0x2];
    short f04;
    char unknown6[0x2];
    int f08;
    short f0c;
};
struct S_vv10 {
    short f00;
};
extern int g_8c44be30;
extern int call_8c18e768(int, int);
int operation_8c0315d8(int a0, Arg1 *a1)
{
    int v3;
    S_vv4 *v4;
    unsigned short v5;
    int v1;
    int t1;
    v1 = (int)-1;
    v4 = (S_vv4 *)g_8c44be30;
    while ((v3 = ((S_vv10 *)v4)->f00) != v1) {
        if (((v3 & 1)) != 0) {
            t1 = call_8c18e768((int)(v4->f02), 2);
            v4 = (S_vv4 *)((char *)v4 + (t1 + 2 << 1));
        } else if (((v3 & 2)) != 0) {
            v5 = (unsigned short)a1->f00;
            if (v5 == v4->f04) {
                if (a1->f0c >= v4->f06) {
                    a1->f0c = 0;
                }
                v4 = (S_vv4 *)((char *)v4 + ((a1->f0c << 1) + 4 << 1));
                a1->f04 = *(short *)v4;
                v4 = (S_vv4 *)((char *)v4 + 2);
                a1->f08 = *(short *)v4;
                return 1;
            }
            t1 = call_8c18e768((int)(v4->f02), 2);
            v4 = (S_vv4 *)((char *)v4 + (t1 + 2 << 1));
        } else {
            return 0;
        }
    }
    return 0;
}
