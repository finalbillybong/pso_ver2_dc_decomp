/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e288c
 * function: operation_8c0e288c
 * language: c
 * reference size: 672 bytes
 * compiled size: 688 bytes (+2.4%)
 * differing lines: 258 of 262 reference instruction lines
 * differing bytes: 520
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +16 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c307734 S_g8c307734;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_30 Arg0_30_30;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x30];
    int f30;
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x14];
    float f48;
    float f4c;
    char unknown50[0xc];
    float f5c;
};
struct Arg0_30 {
    char unknown0[0x30];
    Arg0_30_30 *f30;
};
struct Arg0_30_30 {
    char unknown0[0x20];
    int f20;
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
    float f20;
    float f24;
};
extern S_g8c46fe00 *g_8c46fe00;
extern float call_8c37e29c(float);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_header3_8c38b02e(void *);
extern void sq_flush_8c38af12(void);
extern void call_8c0e2d6c(Object *, Frame *, Arg1 *, void *, float, float, int, int);
void operation_8c0e288c(Object *o, Arg1 *a1)
{
    Frame frame;
    float v1;
    int v5;
    float v8;
    float v9;
    float v10;
    float v11;
    float v13;
    float v12;
    float t1;
    if (!(a1->f30 >= 0)) {
        return;
    }
    v1 = (float)(float)o->f30->f30->f20;
    if (v1 > 500.0f) {
        v1 = (float)500.0f;
    }
    t1 = call_8c37e29c(v1 * 0.01f);
    v5 = (int)(unsigned int)t1;
    v8 = (float)(float)(unsigned int)v5;
    v1 = (float)(v1 - v8 * 100.0f);
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, -1);
    v9 = (float)-1.0f;
    v10 = (float)(v9 / (o->f5c + 0.0598f));
    (&frame)->f08 = o->f48 + 9.0f;
    (&frame)->f0c = o->f4c + 13.0f;
    (&frame)->f10 = o->f48 + 9.0f + 223.0f;
    (&frame)->f14 = o->f4c + 13.0f + 70.0f;
    (&frame)->f18 = 0.0f;
    (&frame)->f1c = 0.3984375f;
    (&frame)->f20 = 0.87109375f;
    (&frame)->f24 = 0.671875f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f08));
    sq_quad_8c38b09e((void *)(&(&frame)->f08), v10);
    sq_header3_8c38b02e((void *)(*(S_g8c307734 **)((char *)0x8c307734 + (v5 << 2))));
    v11 = (float)-1.0f;
    v12 = (float)(v11 / o->f5c);
    (&frame)->f08 = o->f48 + 9.0f + 37.0f - 27.0f;
    (&frame)->f0c = o->f4c + 13.0f + 29.0f - 27.0f;
    v13 = (float)((&frame)->f08 + 54.0f);
    (&frame)->f10 = v13;
    (&frame)->f14 = (&frame)->f0c + 54.0f;
    (&frame)->f18 = 0.7890625f;
    (&frame)->f1c = 0.7890625f;
    (&frame)->f20 = 1.0f;
    (&frame)->f24 = 1.0f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f08));
    sq_quad_8c38b09e((void *)(&(&frame)->f08), v12);
    sq_flush_8c38af12();
    (&frame)->f00 = o->f48 + 47.0f;
    (&frame)->f04 = o->f4c + 42.0f;
    call_8c0e2d6c(o, (Frame *)((&frame)), a1, (void *)(*(S_g8c307734 **)((char *)0x8c307734 + (v5 + 1 << 2))), 0.1f, 28.0f, (int)((int)(54613.0f - v1 * 54613.0f * 0.01f)), 0xd555);
}
