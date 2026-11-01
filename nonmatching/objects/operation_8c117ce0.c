/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c117ce0
 * function: operation_8c117ce0
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 50 of 134 reference instruction lines
 * differing bytes: 45
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
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_7c {
    int f00;
    char unknown4[0x3c];
} Block_p0_7c;
typedef struct Block_p0_bc {
    int f00;
    char unknown4[0x3c];
} Block_p0_bc;
typedef struct Block_p0_fc {
    int f00;
    char unknown4[0x36];
    unsigned char f3a;
    unsigned char f3b;
    char unknown3c[0x4];
} Block_p0_fc;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x3c];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Block_p0_7c f7c;
    Block_p0_bc fbc;
    Block_p0_fc ffc;
    char unknown13c[0x41c];
    int f558;
    char unknown55c[0x20c];
    int f768;
    int f76c;
};
struct S_vv1 {
    int f00;
};
extern void call_8c117e34(Object *, void *, void *);
void operation_8c117ce0(Object *o)
{
    int pm2;
    int v6;
    int v7;
    S_vv1 *v1;
    int v2;
    pm2 = 7 & o->f3c.f00;
    v2 = (int)(pm2);
    o->f558 = 0;
    if (0 != v2) {
        v1 = (S_vv1 *)&o->f558;
        for (; !(((1 & v2)) != 0); ) {
            v1->f00 = 1 + v1->f00;
            pm2 = (int)((unsigned int)v2 >> 1);
            v2 = pm2;
        }
    }
    call_8c117e34(o, (void *)((&o->f3c)), (void *)(((char *)o + 0x13c)));
    *(Block64 *)&o->f7c = *(Block64 *)&o->f3c;
    *(Block64 *)&o->fbc = *(Block64 *)&o->f3c;
    *(Block64 *)&o->ffc = *(Block64 *)&o->f3c;
    o->f7c.f00 = 1;
    o->fbc.f00 = 2;
    v2 = (int)0;
    v6 = v2;
    for (; 3 > v6; ) {
        int v8;
        v8 = (int)(v6 << 2);
        v7 = v6 << 1;
        v6 = v6 + 1;
        *(int *)((v8) + (char *)(0x68c + (char *)o)) = (int)(*(unsigned char *)((char *)((char *)o + 0xf6) + (v7)));
        *(int *)((char *)(0x6f8 + (char *)o) + (v8)) = *(unsigned char *)((v7) + (char *)((char *)o + 0xf7));
    }
    o->ffc.f00 = 4;
    o->f768 = (int)o->ffc.f3a;
    o->f76c = o->ffc.f3b;
}
