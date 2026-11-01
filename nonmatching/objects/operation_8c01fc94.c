/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01fc94
 * function: operation_8c01fc94
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 6 of 90 reference instruction lines
 * differing bytes: 7
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
typedef struct S_g8c2e727c S_g8c2e727c;
typedef struct S_g8c41cd30 S_g8c41cd30;
typedef struct S_g8c41cd30_0 S_g8c41cd30_0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xc6];
    int fe8;
    char unknownec[0x2c];
    void *f118;
    char unknown11c[0x1ec];
    short f308;
    char unknown30a[0x7a];
    short f384;
};
struct S_g8c41cd30 {
    S_g8c41cd30_0 *f00;
};
extern S_g8c41cd30 *g_8c41cd30;
extern void operation_8c02656c(void *);
extern int current_mode_active(void);
extern int operation_8c026554(void *);
extern int operation_1e9610(void *);
extern void call_8c01c908(Object *, void *, void *, int);
extern void call_8c02ae70(Object *);
extern void operation_8c1e92e4(void *);
extern void operation_8c1ef548(void *);
extern int operation_8c02c194(void);
extern void operation_8c02aff0(void *);
extern void operation_8c02668c(int);
void operation_8c01fc94(Object *o)
{
    int v2;
    int v5;
    int t1;
    int t2;
    int t3;
    int t4;
    o->f118 = & *(int *)((char *)0x8c41cf80 + (o->f20 << 12));
    operation_8c02656c((void *)o);
    t1 = current_mode_active();
    if (t1 == 0) {
        o->f384 = 0;
    }
    t2 = operation_8c026554((void *)o);
    t3 = operation_1e9610((void *)o);
    call_8c01c908(o, *(void **)((t2 << 2) + 0x8c2e727c), (void *)(g_8c41cd30->f00), t3);
    call_8c02ae70(o);
    v2 = (int)(o->f308 == 2);
    if (v2 == 0) {
        operation_8c1e92e4((void *)o);
    } else {
        operation_8c1ef548((void *)o);
    }
    t4 = operation_8c02c194();
    if (t4 != 0) {
        operation_8c02aff0((void *)o);
        v5 = (int)(o->f308 == 2);
        if (v5 != 0) {
            o->fe8 |= 1;
        }
    }
    operation_8c02668c((int)o);
}
