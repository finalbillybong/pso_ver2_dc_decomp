/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7de4
 * function: operation_8c0d7de4
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 18 of 49 reference instruction lines
 * differing bytes: 65
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
extern S_c8c0d852c *operation_8c0d852c(int, int, int);
extern int lookup_object_by_id(unsigned short);
int operation_8c0d7de4(Object *o, int a1)
{
    unsigned short id;
    int v1;
    int v3;
    S_c8c0d852c *t1;
    int t2;
    v1 = (int)(a1 << 1);
    id = *(unsigned short *)((char *)((char *)o + 0x448) + (v1));
    if ((id & 0xffff) == 0xffff) {
        t1 = operation_8c0d852c((int)o, (int)(o->f20 + a1 + 1), (int)(o->f30 + a1 + 1));
        v3 = (int)t1;
        if (t1 == 0) {
            goto L_8c0d7e3c;
        }
        *(short *)((char *)((char *)o + 0x448) + (v1)) = t1->f20;
    } else {
        t2 = lookup_object_by_id(id);
        v3 = (int)t2;
    }
L_8c0d7e3c:;
    return (int)(v3);
}
