/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118b28
 * function: operation_8c118b28
 * language: c
 * reference size: 264 bytes
 * compiled size: 260 bytes (-1.5%)
 * differing lines: 20 of 127 reference instruction lines
 * differing bytes: 244
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv14 S_vv14;
typedef struct S_vv15 S_vv15;
typedef struct S_vv17 S_vv17;
typedef struct S_vv18 S_vv18;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0xc];
    int f30;
    char unknown34[0xc];
    int f40;
};
struct S_vv14 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x4];
    float f10;
    float f14;
    float f18;
};
struct S_vv15 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x4];
    float f10;
    float f14;
    float f18;
};
struct S_vv17 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv18 {
    char unknown0[0xc];
    int f0c;
};
S_vv14 *operation_8c118b28(Object *o)
{
    int v9;
    int v7;
    int v11;
    int v1;
    S_vv14 *v14;
    S_vv15 *v15;
    int v19;
    int v3;
    float pm2;
    int v2;
    char *pm3;
    int pm4;
    v1 = (int)o->f20;
    if (!(v1 <= 0)) {
        int v8;
        short pm5;
        int pm1;
        v2 = (int)(-0x20 + (unsigned char)((unsigned int)(unsigned int)o->f30 >> 0x10 >> 8));
        if (!(v2 >= 0)) {
            pm4 = (int)(o->f30 & 0xffffff);
            v3 = pm4;
            v7 = (int)1;
        } else {
            v7 = (int)0;
            v3 = (o->f30 & 0xffffff | v2 << 0x18);
        }
        v8 = (int)((unsigned char)((unsigned int)(unsigned int)o->f40 >> 0x10 >> 8) + -0x20);
        if (!(v8 >= 0)) {
            v9 = (int)(0xffffff & o->f40);
            v11 = (int)1;
        } else {
            v11 = (int)0;
            v9 = (int)(int)(o->f40 & 0xffffff | v8 << 0x18);
        }
        if (((v7 & v11)) != 0) {
            int v16;
            o->f20 -= 1;
            v14 = (S_vv14 *)(0x24 + (char *)o);
            v16 = (int)0;
            v15 = (S_vv15 *)((char *)o + 0x44);
            while (o->f20 > v16) {
                pm2 = v15->f00;
                v14->f00 = pm2;
                v14->f04 = v15->f04;
                v14->f08 = v15->f08;
                v14->f10 = v15->f10;
                v14->f14 = v15->f14;
                v14->f18 = v15->f18;
                v15 = (S_vv15 *)((char *)v15 + 32);
                v14 = (S_vv14 *)(32 + (char *)v14);
                v16 = (int)(v16 + 1);
            }
            return v14;
        }
        if (1 < v1) {
            S_vv18 *v18;
            S_vv17 *v17;
            v18 = (S_vv18 *)((o->f20 + -1 << 5) + (char *)o + 0x4);
            v17 = (S_vv17 *)((char *)o + ((int)o->f20 + -1 << 5) + 0x24);
            v19 = 1;
            for (; o->f20 > v19; ) {
                v19 = (int)(v19 + 1);
                v17->f0c = (v18->f0c);
                pm3 = (char *)v17;
                *(int *)(pm3 - 0x4) = (int)(*(int *)((char *)v18 - 0x4));
                v17 -= 2;
                v18 -= 2;
            }
        }
        pm5 = 0x40;
        v1 = pm5;
        o->f30 = (int)(v3);
        pm1 = (int)(v9);
        o->f40 = pm1;
    }
    return (S_vv14 *)(v1);
}
