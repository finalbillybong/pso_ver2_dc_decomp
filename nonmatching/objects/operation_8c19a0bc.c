/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19a0bc
 * function: operation_8c19a0bc
 * language: c
 * reference size: 692 bytes
 * compiled size: 692 bytes (+0.0%)
 * differing lines: 40 of 312 reference instruction lines
 * differing bytes: 81
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2878e8 S_L8c2878e8;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_x73024 S_x73024;
typedef struct S_x74144 S_x74144;
typedef struct S_x74320 S_x74320;
typedef struct S_x74928 S_x74928;
struct Object {
    char unknown0[0x30];
    int f30;
    float f34;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_L8c2878e8 {
    char unknown0[0x4];
    float f04;
};
struct S_x73024 {
    float f00;
};
struct S_x74144 {
    float f00;
};
struct S_x74928 {
    float f00;
};
struct S_x74320 {
    float f00;
};
extern S_g8c46fe00 *g_8c46fe00;
extern S_L8c2878e8 g_8c2878e8;
extern char gc_8c2878e8[];
extern char g_8c2878ec[];
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c19a0bc(Object *o, Arg1 *a1, int a2, float f0)
{
    Frame frame;
    float v1;
    float v10;
    float v11;
    float v2;
    int v5;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    if (!(o->f30 >= 0)) {
        return;
    }
    v2 = (float)(-1.0f / (o->f34 + 0.0299f));
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, -1);
    if (f0 == 0.0f) {
        (&frame)->f00 = a1->f00;
        (&frame)->f04 = a1->f04;
        (&frame)->f08 = (&frame)->f00 + 160.0f;
        (&frame)->f0c = (&frame)->f04 + 27.0f;
        v5 = (int)((unsigned char)a2 << 3);
        v10 = (float)*(float *)(v5 + gc_8c2878e8);
        (&frame)->f10 = v10 / 256.0f;
        v11 = (float)*(float *)((char *)(float *)(gc_8c2878e8 + 0x4) + v5);
        (&frame)->f14 = v11 / 256.0f;
        (&frame)->f18 = (v10 + 160.0f) / 256.0f;
        (&frame)->f1c = (v11 + 27.0f) / 256.0f;
        scale_rectangle_fields((void *)o, (void *)(&frame));
        sq_quad_8c38b09e((Frame *)((&frame)), v2);
    } else {
        (&frame)->f00 = a1->f00;
        (&frame)->f04 = a1->f04;
        (&frame)->f08 = (&frame)->f00 + 80.0f - 30.0f;
        a2 = (int)(unsigned char)a2;
        v5 = (int)(a2 << 3);
        (&frame)->f0c = (&frame)->f04 + 27.0f;
        v12 = (float)((S_x73024 *)(v5 + gc_8c2878e8))->f00;
        (&frame)->f10 = v12 / 256.0f;
        v13 = (float)*(float *)((char *)(float *)(gc_8c2878e8 + 0x4) + v5);
        (&frame)->f14 = v13 / 256.0f;
        (&frame)->f18 = (v12 + 80.0f - 30.0f) / 256.0f;
        (&frame)->f1c = (v13 + 27.0f) / 256.0f;
        scale_rectangle_fields((void *)o, (void *)(&frame));
        sq_quad_8c38b09e((Frame *)((&frame)), v2);
        (&frame)->f00 = a1->f00 + f0 + 80.0f + 30.0f;
        (&frame)->f04 = a1->f04;
        (&frame)->f08 = (&frame)->f00 + 80.0f - 30.0f;
        (&frame)->f0c = (&frame)->f04 + 27.0f;
        v14 = (float)((S_x74928 *)(v5 + gc_8c2878e8))->f00;
        (&frame)->f10 = (v14 + 80.0f + 30.0f) / 256.0f;
        (&frame)->f18 = (v14 + 160.0f) / 256.0f;
        scale_rectangle_fields((void *)o, (void *)(&frame));
        sq_quad_8c38b09e((Frame *)((&frame)), v2);
        (&frame)->f00 = a1->f00 + 80.0f - 30.0f;
        (&frame)->f04 = a1->f04;
        (&frame)->f08 = (&frame)->f00 + f0 + 60.0f;
        (&frame)->f0c = (&frame)->f04 + 27.0f;
        v15 = (float)((S_x74320 *)(v5 + gc_8c2878e8))->f00;
        v16 = (float)(v15 + 80.0f);
        (&frame)->f10 = (v16 - 40.0f) / 256.0f;
        (&frame)->f18 = (v16 + 40.0f) / 256.0f;
        scale_rectangle_fields((void *)o, (void *)(&frame));
        sq_quad_8c38b09e((Frame *)((&frame)), v2);
    }
    sq_flush_8c38af12();
}
