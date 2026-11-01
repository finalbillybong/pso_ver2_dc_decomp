/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238580
 * function: operation_8c238580
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 18 of 156 reference instruction lines
 * differing bytes: 12
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
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv20 S_vv20;
typedef struct Block_frame_0 {
    char unknown0[0xf];
    char f0f;
    char unknown10[0x4];
    int f14;
    int f18;
    char unknown1c[0x84];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    Block160 tag;
};
struct S_vv20 {
    int f00;
};
struct Arg1 {
    Block160 f00;
};
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
int operation_8c238580(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v4;
    int v13;
    int v19;
    S_vv20 *v20;
    char *v21;
    int v2;
    int v24;
    int v11;
    int v18;
    int h;
    int h2;
    int t1;
    v1 = 0;
    *(Block160 *)&(&frame)->f00 = *(Block160 *)&o->tag;
    v2 = (int)(&frame)->f00.f18;
    v18 = 0xffff;
    h = (short)((unsigned int)v2 >> 0x10) & v18;
    t1 = operation_8c247e8c(h);
    if (4 > t1 || t1 > 0xc) {
        v4 = -1;
    } else {
        v4 = (unsigned short)(h ^ v2);
    }
    if (!(v4 >= 0)) {
        v4 = 0;
    }
    if (v4 >= 4) {
        (&frame)->f00.f18 = 0;
        v1 = 1;
    }
    if ((&frame)->f00.f0f != 0) {
        (&frame)->f00.f0f = 0;
        v1 = 1;
    }
    v11 = (int)(&frame)->f00.f14;
    h2 = (short)((unsigned int)v11 >> 0x10) & 0xffff;
    t1 = operation_8c247e8c(h2);
    if (4 > t1 || t1 > 0xc) {
        v13 = -1;
    } else {
        v13 = (unsigned short)(h2 ^ v11);
    }
    if (!(v13 >= 0)) {
        v13 = 0;
    }
    if (v13 >= 0x1a) {
        (&frame)->f00.f14 = 0;
        v1 = 1;
    }
    v18 = 0xffff;
    for (v19 = 0; 0xa > v19; v19++) {
        v20 = (S_vv20 *)((char *)(&frame) + (v19 << 2) + 0x78);
        v21 = (char *)v20->f00;
        if (v21 == 0) {
            v24 = 0;
        } else {
            v24 = (short)((unsigned int)(int)(v21) >> 0x10) & v18;
            t1 = operation_8c247e8c(v24);
            if (4 > t1 || t1 > 0xc) {
                v24 = -1;
            } else {
                v24 = (v24 ^ (int)(v21)) & v18;
            }
            if (operation_8c238e7c(v24) != 0) {
                v24 = 0;
            }
        }
        if (operation_8c238e7c(v24) != 0) {
            v20->f00 = 0;
            v1 = 1;
        }
    }
    if (v1 != 0 && a1 != 0) {
        *(Block160 *)&a1->f00 = *(Block160 *)&(&frame)->f00;
    }
    return v1;
}
