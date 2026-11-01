/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0345cc
 * function: operation_8c0345cc
 * language: c
 * reference size: 76 bytes
 * compiled size: 80 bytes (+5.3%)
 * differing lines: 18 of 31 reference instruction lines
 * differing bytes: 70
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char unknown0[0x2];
    short f02;
};
struct Object {
    short tag;
};
extern void call_8c034484(void *);
void operation_8c0345cc(Object *o, int a1)
{
    int v1;
    int v2;
    S_vv3 *v3;
    char *v4;
    int v5;
    int v8;
    int v7;
    v7 = (int)(unsigned short)a1;
    v1 = (int)0xe000;
    v8 = (int)v1;
    goto L_8c0345f4;
    v2 = (int)/* ? r0 */ 0;
    v3 = (S_vv3 *)/* ? r3 */ 0;
    v4 = (char *)v1;
    v5 = (int)(unsigned short)a1;
L_8c0345d8:;
    if (v2 == 8) {
        v3->f02 = v3->f02 & (int)(v4) | v5;
        call_8c034484((void *)(&o));
        v7 = (int)/* ? clobbered */ 0;
        v8 = (int)/* ? clobbered */ 0;
    } else {
        call_8c034484((void *)(&o));
        v7 = (int)/* ? clobbered */ 0;
        v8 = (int)/* ? clobbered */ 0;
    }
L_8c0345f4:;
    v2 = (int)(unsigned char)o->tag;
    v3 = (S_vv3 *)o;
    v4 = (char *)v8;
    v5 = (int)v7;
    if ((unsigned char)o->tag != 0xff) {
        goto L_8c0345d8;
    }
}
