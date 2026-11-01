/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b95b0
 * function: operation_8c1b95b0
 * language: c
 * reference size: 364 bytes
 * compiled size: 368 bytes (+1.1%)
 * differing lines: 10 of 164 reference instruction lines
 * differing bytes: 225
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
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
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    unsigned short f3c0;
    volatile unsigned short f3c2;
};
extern void operation_8c1ae0d8(void *, int);
extern int operation_8c1ae23c(void);
void operation_8c1b95b0(Object *o)
{
    int v23;
    int v21;
    int v27;
    int v28;
    int v22;
    unsigned char pm2;
    int t1;
    int v25;
    int pm4;
    unsigned short t2;
    switch (o->f3a0) {
        case 0:
        v21 = (int)(int)(int)o->f3c2;
        t2 = 0xffff;
        if ((v21 & 0xffff) != t2) {
            int pm5;
            if (o->f394 == 0) {
                return;
            }
            v22 = (int)(o->f3b0 & 0xf);
            v28 = (v22 << 0xf);
            v23 = (o->f3a8 & 0x1f);
            pm5 = 0x17;
            operation_8c1ae0d8((void *)(o->f394), (((v28 | (v23 << (unsigned char)(0xa) | (v23 << 5 | 0xd)) | v22 << 0x13 | (o->f3c0 & 0xffff & 0xf) << pm5) | (0xf & (v21 & 0xffff)) << 0x1b)));
            return;
        }
        v23 = operation_8c1ae23c();
        t1 = v23;
        if (!((unsigned short)t1 == 0xffff)) {
            int v24;
            if (o->f394 == 0) {
                return;
            }
            v24 = (0xf & o->f3b0);
            v25 = (int)(0x1f & o->f3a8);
            pm4 = (v25 << 0xa | (v25 << 5 | 0xb) | v24 << 0xf | v24 << 0x13 | ((unsigned short)t1 & 0xf) << 0x17) | ((int)o->f3c2 & 0xffff & 0xf) << 0x1b;
            operation_8c1ae0d8((void *)(o->f394), (pm4));
            return;
        }
        if (0 != o->f394) {
            int pm3;
            int v26;
            v26 = (int)(o->f3b0 & 0xf);
            t1 = o->f3a8;
            pm3 = v26 << 0xf;
            v27 = (int)(t1 & 0x1f);
            pm2 = 0x17;
            t1 = (int)(((int)o->f3c2 & 0xffff & 0xf) << 0x1b | (pm3 | (v27 << 0xa | (v27 << 5 | 0xc)) | v26 << 0x13 | (0xf & (0xffff & (int)(int)o->f3c0)) << (int)pm2));
            operation_8c1ae0d8((void *)(o->f394), t1);
        }
    }
}
