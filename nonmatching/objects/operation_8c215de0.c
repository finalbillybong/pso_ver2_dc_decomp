/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c215de0
 * function: operation_8c215de0
 * language: c
 * reference size: 244 bytes
 * compiled size: 248 bytes (+1.6%)
 * differing lines: 12 of 102 reference instruction lines
 * differing bytes: 90
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c20af34 S_c8c20af34;
typedef struct S_c8c20af34_0 S_c8c20af34_0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_88 Arg0_88;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    Arg0_78 *f78;
    int f7c;
    int f80;
    int f84;
    Arg0_88 *f88;
};
struct S_c8c20af34 {
    S_c8c20af34_0 *f00;
    int f04;
};
struct S_vv8 {
    char unknown0[0xc];
    float f0c;
};
extern S_c8c20af34 *call_8c20af34(void *);
extern int operator_new_8c18de4c(int);
extern int operation_8c20b040(short);
extern void call_8c0e2278(S_vv8 *, int, int);
extern void operation_8c0e2328(S_vv8 *, float);
void operation_8c215de0(Object *o)
{
    S_c8c20af34 *t1;
    int v7;
    int t2;
    int v5;
    int t3;
    t1 = call_8c20af34((void *)(o->f78));
    if (0 != t1) {
        int v1;
        o->f7c = (int)(t1->f04);
        t2 = operator_new_8c18de4c((int)(o->f7c << 1));
        v1 = (int)0;
        o->f88 = (Arg0_88 *)t2;
        while (v1 < o->f7c) {
            *(short *)((v1 << 1) + (char *)((char *)o->f88 + 0x0)) = *(short *)((char *)(0x0 + (char *)t1->f00) + (v1 << 1));
            v1 += 1;
        }
    } else {
        o->f7c = 0;
        o->f88 = (Arg0_88 *)0;
    }
    v5 = o->f80;
    v5 = v5 < o->f7c ? v5 : o->f7c;
    v7 = (int)0;
    for (o->f84 = (int)(v5); o->f84 > v7; v7 = (int)(v7 + 1)) {
        S_vv8 *v8;
        char *pm6;
        pm6 = (char *)o->f30;
        v8 = (S_vv8 *)*(Arg0_30_0 **)((char *)(pm6 + 0x0) + (v7 << 2));
        t3 = operation_8c20b040(*(short *)((char *)((char *)o->f88 + 0x0) + (v7 << 1)));
        call_8c0e2278(v8, t3, 0xc0);
        v8->f0c = (float)(v7 * 0x14);
        operation_8c0e2328(v8, 1000000.0f);
    }
}
