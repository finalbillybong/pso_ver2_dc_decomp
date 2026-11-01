/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0547b4
 * function: TObjCGrass_render_8c0547b4
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 6 of 73 reference instruction lines
 * differing bytes: 51
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
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_18 Arg0_0_18;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0xbc];
    float ff8;
};
extern void call_8c3827d8(void *);
extern void njPushMatrix_8c38ade4(int);
extern void njTranslateV_8c382a58(int, int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3addea(void *, void *, float);
extern void restore_child_blend(void);
extern void njPopMatrix_8c38accc(int);
void TObjCGrass_render_8c0547b4(Object *o)
{
    int v4;
    int v1;
    int v2;
    int v3;
    void **t1;
    call_8c3827d8((void *)(o->f28));
    v1 = 0x134;
    v2 = 0x130;
    v3 = 0x13c;
    for (v4 = 0; *(int *)((char *)o + v3) > v4; v4++) {
        int v7;
        v7 = v4 << 5;
        if ((*(int *)(*(int *)((char *)o + v1) + 0x1c + v7) & 1) == 0) {
            njPushMatrix_8c38ade4(0);
            njTranslateV_8c382a58(0, *(int *)((char *)o + v1) + v7);
            njRotateY_8c37df90(0, *(void **)(*(int *)((char *)o + v1) + 0x18 + v7));
            t1 = (void **)((char *)o + v2);
            call_8c3addea((void *)(o->f38), *t1, o->ff8);
            restore_child_blend();
            njPopMatrix_8c38accc(1);
        }
    }
}
