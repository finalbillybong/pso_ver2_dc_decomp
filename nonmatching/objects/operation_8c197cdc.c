/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c197cdc
 * function: operation_8c197cdc
 * language: c
 * reference size: 236 bytes
 * compiled size: 240 bytes (+1.7%)
 * differing lines: 10 of 103 reference instruction lines
 * differing bytes: 112
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x69];
    char f69;
    char f6a;
};
struct Arg1 {
    unsigned short f00;
    unsigned short f02;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c025fcc(int, int);
extern int operation_8c198000(void *, char);
extern int operation_8c197fe0(int, char);
extern void operation_8c026144(int, int, int, int, unsigned short, unsigned short);
extern void operation_8c197dc8(int, void *);
void operation_8c197cdc(Object *o, Arg1 *a1)
{
    int v1;
    int t1;
    int t3;
    int t4;
    int v2;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0 || (t2 = operation_8c025fcc(t1, 0)) == 0) {
        return;
    }
    t3 = operation_8c198000((void *)o, o->f6a);
    t4 = operation_8c197fe0((int)o, o->f69);
    if (t3 == 0) {
        v1 = (int)(t2 + 4);
    } else {
        v1 = (int)(t2 + 0x14);
    }
    if (a1->f00 == (unsigned short)*(unsigned char *)((char *)((char *)v1 + 0x0) + (t4 << 2))) {
        if (t3 == 0) {
            v2 = (int)(t2 + 4);
        } else {
            v2 = (int)(t2 + 0x14);
        }
        if ((*(unsigned char *)((char *)v2 + (t4 << 2) + 0x1) & 0xffff) == a1->f02) {
            operation_8c026144(t1, 0, t3, t4, (unsigned short)0, (unsigned short)0);
            return;
        }
    }
    operation_8c197dc8((int)o, (void *)a1);
    operation_8c026144(t1, 0, t3, t4, (unsigned short)(a1->f00), (unsigned short)(a1->f02));
}
