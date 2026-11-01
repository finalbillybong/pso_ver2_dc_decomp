/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ec024
 * function: operation_8c1ec024
 * language: c
 * reference size: 312 bytes
 * compiled size: 308 bytes (-1.3%)
 * differing lines: 32 of 115 reference instruction lines
 * differing bytes: 246
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
typedef struct S_x23104 S_x23104;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x1a];
    float f10c;
    int f110;
    char unknown114[0x1f6];
    short f30a;
    short f30c;
    char unknown30e[0x446];
    short f754;
    char unknown756[0x2];
    float f758;
};
struct S_x23104 {
    float f00;
};
extern void operation_8c1e8e60(int, short, int);
extern int operation_8c1aaadc(void *);
extern void initialize_object_8c1aa948(void *, int, int, int);
extern int operation_8c1aaabc(void *);
extern int operation_8c1aaafc(void *);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
extern void operation_8c029af4(float, void *);
void operation_8c1ec024(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_8c1e8e60((int)o, o->f30a, 6);
    t1 = operation_8c1aaadc((void *)(&o->f754));
    o->f754 = t1;
    initialize_object_8c1aa948((void *)(&o->f754), (int)o, 2, 2);
    o->f30c = 0;
    t2 = operation_8c1aaabc((void *)(&o->f754));
    switch ((short)t2) {
    case 0:
        t3 = operation_8c1aaafc((void *)(&o->f754));
        if ((short)t3 != 0) {
            goto L_8c1ec0ca;
        }
        o->f10c = 0.5f;
        o->fe8 |= 0x200;
        break;
    case 1:
    case 2:
        t4 = operation_8c1aaafc((void *)(&o->f754));
        if ((short)t4 == 0) {
            o->f10c = 0.2f;
            o->fe8 |= 0x200;
        }
    }
L_8c1ec0ca:;
    t5 = operation_02c350((void *)o);
    operation_021f88((void *)o, 7, *(short *)((char *)0x8c2e7394 + ((short)t5 << 1)));
    operation_8c029af4(((S_x23104 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * o->f758, (void *)o);
}
