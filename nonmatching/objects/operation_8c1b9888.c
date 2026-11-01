/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b9888
 * function: operation_8c1b9888
 * language: c
 * reference size: 432 bytes
 * compiled size: 436 bytes (+0.9%)
 * differing lines: 16 of 188 reference instruction lines
 * differing bytes: 305
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x330];
    short f330;
    char unknown332[0x62];
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    unsigned short f3c0;
    unsigned short f3c2;
    char unknown3c4[0x24];
    int f3e8;
};
extern int operation_8c1ae0d8(void *, int);
extern int operation_8c1ae23c(void);
extern int operation_8c1b8888(int);
extern float object_random_fraction(void *);
void operation_8c1b9888(Object *o)
{
    int v24;
    unsigned short v30;
    int v26;
    int v25;
    int v28;
    int v27;
    int v29;
    int t2;
    float t4;
    int t5;
    if (o->f3a0 != 0) {
        return;
    }
    v24 = (int)o->f3c2;
    v30 = (unsigned short)0xffff;
    if ((v24 & 0xffff) != v30) {
        if (o->f394 == 0) {
            return;
        }
        v25 = (int)(o->f3b0 & 0xf);
        v26 = (int)(o->f3a8 & 0x1f);
        operation_8c1ae0d8((void *)(o->f394), (int)(v26 << 0xa | (v26 << 5 | 0x10) | v25 << 0xf | v25 << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (v24 & 0xffff & 0xf) << 0x1b));
        return;
    }
    t2 = operation_8c1ae23c();
    if (o->f330 <= o->f3e8 && (unsigned short)t2 != 0xffff) {
        if (o->f394 == 0) {
            return;
        }
        v27 = (int)(o->f3b0 & 0xf);
        v28 = (int)(o->f3a8 & 0x1f);
        operation_8c1ae0d8((void *)(o->f394), (int)(v28 << 0xa | (v28 << 5 | 0xe) | v27 << 0xf | v27 << 0x13 | ((unsigned short)t2 & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
        return;
    }
    t5 = operation_8c1b8888((int)o);
    t4 = object_random_fraction((void *)o);
    v29 = (int)((int)(t4 * 2.97f) + 4);
    if (o->f394 != 0) {
        operation_8c1ae0d8((void *)o->f394, (int)(v29 & 0x1f | (o->f3a8 & 0x1f) << 5 | (t5 & 0x1f) << 0xa | (o->f3b0 & 0xf) << 0xf | (t5 & 0xf) << 0x13 | (o->f3c0 & 0xffff & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
    }
}
