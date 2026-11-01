/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16ea9c
 * function: quest_op_check_npc_straggle_8c16ea9c
 * language: c
 * reference size: 308 bytes
 * compiled size: 304 bytes (-1.3%)
 * differing lines: 40 of 137 reference instruction lines
 * differing bytes: 203
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4dc4d4 S_g8c4dc4d4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv7 S_vv7;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    int f0c;
    char unknown10[0x8];
    float f18;
    float f1c;
    float f20;
    char unknown24[0xc];
    float f30;
    float f34;
    char unknown38[0x4];
    int f3c;
    char unknown40[0x8];
};
struct S_vv3 {
    int f00;
};
struct S_c8c122700 {
    char unknown0[0x6];
    unsigned short f06;
};
struct S_vv7 {
    char unknown0[0xf8];
    Vector3 ff8;
};
extern void initialize_resource_record(void *);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void call_8c19db2c(S_c8c122700 *, void *, void *);
void quest_op_check_npc_straggle_8c16ea9c(int a0)
{
    Frame frame;
    char *v1;
    S_vv3 *v3;
    S_vv7 *v7;
    S_c8c122700 *t1;
    int i;
    initialize_resource_record((void *)(&(&frame)->f0c));
    v1 = (char *)*(int *)0x8c4db408;
    i = a0;
    (&frame)->f18 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
    (&frame)->f1c = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
    (&frame)->f20 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
    (&frame)->f30 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
    (&frame)->f3c = *(int *)(v1 + ((unsigned char)i++ << 2));
    (&frame)->f34 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
    v3 = (S_vv3 *)((char *)v1 + ((unsigned char)a0 << 2));
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x104);
    if (t1 != 0) {
        call_8c19db2c(t1, (void *)(*(S_g8c4dc4d4 **)0x8c4dc4d4), (void *)(&(&frame)->f0c));
    }
    if (t1 != 0) {
        v3->f00 = t1->f06;
        v7 = (S_vv7 *)t1;
    } else {
        v3->f00 = -1;
        v7 = (S_vv7 *)0;
    }
    if (v7 != 0) {
        v1 = (char *)*(int *)0x8c4db408;
        (&frame)->f00.f00 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
        (&frame)->f00.f04 = (float)*(int *)(v1 + ((unsigned char)i++ << 2));
        (&frame)->f00.f08 = (float)*(int *)(v1 + ((unsigned char)i << 2));
        *(Vector3 *)&v7->ff8 = *(Vector3 *)&(&frame)->f00;
    }
}
