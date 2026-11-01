/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16f11c
 * function: quest_op_item_create2_8c16f11c
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 86 of 131 reference instruction lines
 * differing bytes: 85
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
    char f03;
    char f04;
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char f0a;
    char f0b;
    int f0c;
    char unknown10[0x4];
};
extern int lookup_low_id(int);
extern void operation_1c7dd4(void *);
extern int operation_194d60(unsigned short);
extern int item_capacity_8c022f5c(void *, void *);
extern void operation_8c023bb4(void *, void *);
void quest_op_item_create2_8c16f11c(int a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    t1 = lookup_low_id(*(int *)0x8c418248);
    if (t1 != 0) {
        operation_1c7dd4((void *)(&frame));
        v1 = (char *)*(int *)0x8c4db408;
        frame.f00 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f01 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f02 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f03 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f04 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f05 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f0c = operation_194d60(*(int *)0x8c418248);
        v1 = (char *)*(int *)0x8c4db408;
        frame.f06 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f07 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f08 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f09 = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f0a = *(int *)(v1 + ((unsigned char)a0++ << 2));
        frame.f0b = *(int *)(v1 + ((unsigned char)a0++ << 2));
        if (item_capacity_8c022f5c((void *)t1, (void *)(&frame)) > 0) {
            operation_8c023bb4((void *)t1, (void *)(&frame));
            *(int *)((char *)*(int *)0x8c4db408 + ((unsigned char)a1 << 2)) = frame.f0c;
            return;
        }
        *(int *)((char *)*(int *)0x8c4db408 + ((unsigned char)a1 << 2)) = -1;
        return;
    }
    *(int *)((char *)*(int *)0x8c4db408 + ((unsigned char)a1 << 2)) = -1;
}
