/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ef058
 * function: operation_8c1ef058
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 16 of 89 reference instruction lines
 * differing bytes: 9
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
struct Object {
    char unknown0[0x1b6];
    unsigned short f1b6;
    char unknown1b8[0x150];
    short f308;
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x4bc];
    int f7e0;
};
extern void operation_8c1e8e60(int, short, int);
extern void reset_motion_8c1ef224(void *);
extern void operation_021f88(void *, int, short);
extern void operation_8c1ef290(void *);
extern int operation_02c350(void *);
extern int operation_8c02b2a4(void);
extern int lookup_low_id(int);
extern void call_8c02bc00(int, Object *, int);
void operation_8c1ef058(Object *o)
{
    int v1;
    int v4;
    unsigned short v82;
    int t1;
    int t2;
    int t3;
    operation_8c1e8e60((int)o, o->f30a, 6);
    reset_motion_8c1ef224((void *)o);
    o->f318 = o->f31c = o->f320 = 0.0f;
    o->f30c = 0;
    v1 = (int)(((o->f7e0 & 1)) != 0);
    if (v1 != 0) {
        operation_021f88((void *)o, 0xf, (short)0);
        operation_8c1ef290((void *)o);
    } else {
        t1 = operation_02c350((void *)o);
        operation_021f88((void *)o, 0xf, *(short *)((char *)0x8c2e748c + ((short)t1 << 1)));
    }
    t2 = operation_8c02b2a4();
    if (t2 != 0) {
        v4 = (int)(o->f308 == 2);
        if (v4 != 0) {
            v82 = (unsigned short)o->f1b6;
            if ((unsigned int)0x1000 > (unsigned int)(v82 & 0xffff)) {
                t3 = lookup_low_id((int)(v82 & 0xffff));
                if (t3 != 0) {
                    call_8c02bc00(t3, o, 1);
                }
            }
        }
    }
}
