/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02631c
 * function: operation_8c02631c
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 2 of 56 reference instruction lines
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
typedef struct S_c8c026058 S_c8c026058;
typedef struct S_c8c026104 S_c8c026104;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
struct Object {
    char unknown0[0x3b8];
    int f3b8;
    char unknown3bc[0x128];
    int f4e4;
};
struct S_c8c026058 {
    int f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_c8c026104 {
    char unknown0[0x1];
    unsigned char f01;
};
extern S_c8c026058 *operation_8c026058(void *);
extern S_c8c026104 *select_member_8c026104(void *, int);
int operation_8c02631c(Object *o)
{
    S_vv4 *v4;
    int v2;
    int v1;
    S_c8c026104 *t1;
    S_c8c026058 *t2;
    if (o->f3b8 == 0) {
        return 0;
    }
    t2 = operation_8c026058((void *)(((char *)o + 0x418)));
    v1 = (int)(((t2->f00 & 1)) != 0);
    if (v1 != 0) {
        v2 = (int)(o->f4e4 == 0);
        if (v2 != 0) {
            v4 = (S_vv4 *)((char *)o + 0x4c0);
            goto L_8c026362;
        }
        v4 = (S_vv4 *)&o->f4e4;
    } else {
        v4 = (S_vv4 *)((char *)o + 0x4c0);
    }
L_8c026362:;
    t1 = select_member_8c026104((void *)v4, (int)(v4->f00));
    switch (((unsigned char *)t1 + (0 << 2))[1] & 0xffff) {
    case 0:
    case 2:
        return 0;
    default:
        return 0;
    }
}
