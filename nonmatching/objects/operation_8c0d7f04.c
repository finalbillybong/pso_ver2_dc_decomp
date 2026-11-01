/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7f04
 * function: operation_8c0d7f04
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 4 of 64 reference instruction lines
 * differing bytes: 2
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
typedef struct S_c8c0d852c S_c8c0d852c;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
};
struct S_c8c0d852c {
    char unknown0[0x20];
    short f20;
};
extern S_c8c0d852c *operation_8c0d852c(int, short, int);
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0d89e0(int);
void operation_8c0d7f04(Object *o)
{
    int v4;
    int v3;
    int v1;
    int v2;
    int v6;
    S_c8c0d852c *t1;
    int t2;
    v1 = (int)0x448;
    v3 = (int)0;
    v2 = (int)0xffff;
    while (4 > v3) {
        unsigned int w;
        v4 = (int)(v3 << 1);
        w = *(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v4));
        if ((unsigned short)w == (unsigned short)v2) {
            t1 = operation_8c0d852c((int)o, (short)(o->f20 + v3 + 1), (int)(o->f30 + v3 + 1));
            v6 = (int)t1;
            if (t1 == 0) {
                goto L_8c0d7f68;
            }
            *(short *)((char *)((char *)((int)o + v1) + 0x0) + (v4)) = t1->f20;
        } else {
            t2 = lookup_object_by_id((unsigned short)w);
            v6 = (int)t2;
        }
L_8c0d7f68:;
        operation_8c0d89e0(v6);
        v3 = (int)(v3 + 1);
    }
}
