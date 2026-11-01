/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16f068
 * function: quest_op_item_create_8c16f068
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 10 of 75 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c194d60 S_c8c194d60;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x9];
    int f0c;
    char unknown10[0x4];
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4db408 *g_8c4db408;
extern int lookup_low_id(int);
extern void operation_1c7dd4(void *);
extern int operation_194d60(unsigned short);
extern int item_capacity_8c022f5c(void *, void *);
extern void operation_8c023bb4(void *, void *);
void quest_op_item_create_8c16f068(int a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        operation_1c7dd4((void *)(&frame));
        v1 = (char *)g_8c4db408;
        (&frame)->f00 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f01 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f02 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
        (&frame)->f0c = operation_194d60((unsigned short)g_8c418248);
        t3 = item_capacity_8c022f5c((void *)t1, (void *)(&frame));
        if (t3 > 0) {
            operation_8c023bb4((void *)t1, (void *)(&frame));
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = (&frame)->f0c;
            return;
        }
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
        return;
    }
    *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
}
