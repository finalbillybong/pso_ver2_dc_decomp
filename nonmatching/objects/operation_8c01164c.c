/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01164c
 * function: operation_8c01164c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 22 of 54 reference instruction lines
 * differing bytes: 20
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
typedef struct S_vv2 S_vv2;
struct S_vv11 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    float f10;
    int f14;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_vv2 {
    S_vv11 *f00;
};
extern int g_8c417b80;
extern int g_8c4dc5e0;
int operation_8c01164c(Object *o, int a1)
{
    S_vv11 *v11;
    int v1;
    int pm7;
    float pm2;
    S_vv2 *v2;
    S_vv11 **v3;
    void *pm3;
    pm7 = 0;
    v3 = (S_vv11 **)(g_8c4dc5e0 + 0x20);
    pm3 = (void *)&g_8c417b80;
    v1 = pm7;
    v2 = (S_vv2 *)pm3;
    for (; (v11 = *v3++) != 0; ) {
        pm7 = v11->f14;
        if (0 != ((pm7 & a1))) {
            float pm5;
            pm5 = o->f08;
            pm2 = v11->f10;
            if (!(((pm2 * v11->f10)) < (((v11->f0c - o->f08) * (v11->f0c - pm5) + ((v11->f04 - o->tag)) * (v11->f04 - o->tag))))) {
                v1 = 1 + v1;
                if (!(v1 < 0x100)) {
                    goto L_8c0116a6;
                }
                v2->f00 = v11;
                v2 = (S_vv2 *)(((4 + (char *)v2)));
            }
        }
    }
L_8c0116a6:
    ;
    v11 = (S_vv11 *)0;
    v2->f00 = v11;
    v1 = (g_8c417b80);
    return v1;
}
