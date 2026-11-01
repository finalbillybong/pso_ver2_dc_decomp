/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17b750
 * function: TItemProUnit_v47_8c17b750
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 8 of 61 reference instruction lines
 * differing bytes: 7
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
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x98];
    short f1d8;
};
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
extern int call_8c247730(int, int);
extern void memset_8c12b880(void *, int, int);
void TItemProUnit_v47_8c17b750(Object *o)
{
    int v7;
    char *v8;
    int v16;
    int v4;
    int v5;
    int v6;
    int t1;
    short pm2;
    if (o->f1d8 == 0x13) {
        ((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08 = 1.0f;
    }
    v4 = (int)0x13c;
    v5 = (int)0x3bc;
    v6 = (int)0x1de;
    v7 = (int)0;
    v16 = (int)v7;
    goto L_8c17b7a8;
    v8 = (char *)v7;
L_8c17b780:
    ;
    t1 = call_8c247730((int)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + v5), (int)(v8));
    pm2 = *(short *)((char *)((char *)((int)o + v6) + 0x0) + ((int)(v8) << 1));
    *(char *)((char *)((char *)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + v5) + 0x48) + ((short)v8)) = t1 - pm2;
    v16 = (int)(v8 + 1);
L_8c17b7a8:
    ;
    v8 = (char *)v16;
    if (v16 != 0x13) {
        goto L_8c17b780;
    }
    memset_8c12b880((void *)(((char *)o + 0x1de)), 0, 0x26);
}
