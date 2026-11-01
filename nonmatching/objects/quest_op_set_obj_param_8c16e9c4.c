/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16e9c4
 * function: quest_op_set_obj_param_8c16e9c4
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 28 of 94 reference instruction lines
 * differing bytes: 99
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dc4d4 S_g8c4dc4d4;
typedef struct S_vv2 S_vv2;
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    char unknown18[0xc];
    float f24;
    float f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x8];
};
struct S_vv2 {
    int f00;
};
struct S_c8c122700 {
    char unknown0[0x6];
    unsigned short f06;
};
extern void initialize_resource_record(void *);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void call_8c19d454(S_c8c122700 *, void *, Frame *);
void quest_op_set_obj_param_8c16e9c4(int a0, int a1)
{
    Frame frame;
    char *v1;
    S_vv2 *v2;
    int k;
    S_c8c122700 *t1;
    initialize_resource_record((void *)(&frame));
    v1 = (char *)*(int *)0x8c4db408;
    k = (unsigned char)a1;
    (&frame)->f0c = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f24 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f30 = (int)(*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2)));
    (&frame)->f28 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
    v2 = (S_vv2 *)&*(int *)((char *)((char *)v1 + 0x0) + (k << 2));
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xf4);
    if (t1 != 0) {
        call_8c19d454(t1, (void *)(*(S_g8c4dc4d4 **)0x8c4dc4d4), (Frame *)((&frame)));
    }
    if (t1 != 0) {
        v2->f00 = t1->f06;
        return;
    }
    v2->f00 = -1;
}
