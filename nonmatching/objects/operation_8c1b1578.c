/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b1578
 * function: operation_8c1b1578
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 30 of 109 reference instruction lines
 * differing bytes: 33
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
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct S_c8c03ef88_4_4 S_c8c03ef88_4_4;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    S_c8c03ef88_4_4 *f04;
};
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern void call_8c0344f0(void *, int, int, int);
void operation_8c1b1578(Object *o)
{
    int v4;
    int v3;
    int v1;
    int v2;
    S_c8c03ef88 *t1;
    S_c8c03ef88 *t2;
    S_c8c03ef88 *t3;
    S_c8c03ef88 *t4;
    S_c8c03ef88 *t5;
    S_c8c03ef88 *t6;
    v1 = (int)0x398;
    v3 = (int)0;
    v2 = (int)0x42c;
    while (2 > v3) {
        v4 = *(int *)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)0x8c32658c + (v3 << 2)) << 4));
        switch (v3) {
        case 0:
            t1 = call_8c03ef88(v4, 3);
            call_8c0344f0((void *)(t1->f04->f04), 8, 0, 0);
            break;
        case 1:
            t2 = call_8c03ef88(v4, 5);
            call_8c0344f0((void *)(t2->f04->f04), 8, 0, 0);
            t3 = call_8c03ef88(v4, 0x60);
            call_8c0344f0((void *)(t3->f04->f04), 8, 0, 0);
            t4 = call_8c03ef88(v4, 0x63);
            call_8c0344f0((void *)(t4->f04->f04), 8, 0, 0);
            t5 = call_8c03ef88(v4, 0x65);
            call_8c0344f0((void *)(t5->f04->f04), 8, 0, 0);
            t6 = call_8c03ef88(v4, 0x68);
            call_8c0344f0((void *)(t6->f04->f04), 8, 0, 0);
        }
        v3 = (int)(v3 + 1);
    }
}
