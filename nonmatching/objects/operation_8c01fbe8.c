/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01fbe8
 * function: operation_8c01fbe8
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 6 of 59 reference instruction lines
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
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xf6];
    void *f118;
};
struct S_g8c41cd30 {
    S_g8c41cd30_0 *f00;
};
struct S_vv1 {
    int f00;
};
extern S_g8c41cd30 *g_8c41cd30;
extern void operation_8c02656c(void *);
extern int operation_8c026554(void *);
extern int operation_1e9610(void *);
extern void call_8c01c908(Object *, void *, void *, int);
extern void call_8c02ae70(Object *);
extern void operation_8c02668c(int);
void operation_8c01fbe8(Object *o)
{
    int t1;
    int t2;
    o->f118 = & *(int *)((char *)0x8c41cf80 + (o->f20 << 12));
    operation_8c02656c((void *)o);
    t1 = operation_8c026554((void *)o);
    t2 = operation_1e9610((void *)o);
    call_8c01c908(o, (void *)(*(S_g8c2e727c **)((char *)0x8c2e727c + (t1 << 2))), (void *)(g_8c41cd30->f00), t2);
    call_8c02ae70(o);
    operation_8c02668c((int)o);
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) {
                for (; ; ) {
                }
            }
        }
    }
}
