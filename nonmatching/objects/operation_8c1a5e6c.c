/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a5e6c
 * function: operation_8c1a5e6c
 * language: c
 * reference size: 936 bytes
 * compiled size: 936 bytes (+0.0%)
 * differing lines: 172 of 386 reference instruction lines
 * differing bytes: 318
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_274 Arg0_274;
typedef struct Arg0_280 Arg0_280;
typedef struct S_x15952 S_x15952;
typedef struct S_x16176 S_x16176;
typedef struct S_x16960 S_x16960;
typedef struct S_x17184 S_x17184;
typedef struct S_x17744 S_x17744;
typedef struct S_x20720 S_x20720;
typedef struct S_x21168 S_x21168;
typedef struct S_x21504 S_x21504;
typedef struct S_x21840 S_x21840;
typedef struct S_x74768 S_x74768;
typedef struct S_x79280 S_x79280;
typedef struct Block_frame_0 {
    float f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x268];
    float f268;
    float f26c;
    char unknown270[0x4];
    Arg0_274 *f274;
    int f278;
    char f27c;
    char unknown27d[0x3];
    Arg0_280 *f280;
};
struct Arg0_274 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block_frame_0 f00;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
struct S_x74768 {
    float f00;
};
struct S_x79280 {
    float f00;
};
struct S_x15952 {
    float f00;
};
struct S_x16176 {
    float f00;
};
struct S_x16960 {
    float f00;
};
struct S_x17184 {
    float f00;
};
struct S_x17744 {
    float f00;
};
struct S_x20720 {
    float f00;
};
struct S_x21168 {
    float f00;
};
struct S_x21504 {
    float f00;
};
struct S_x21840 {
    float f00;
};
extern Block8 g_8c31e154;
extern char g_8c31df44[];
extern void operation_8c1a6214(void);
extern void call_8c01c2c8(void);
extern void operation_8c1a6240(Object *);
extern void call_8c3827d8(void *);
extern void call_8c37eb1c(void *, int, int, float);
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern int call_8c18e8a0(void *, int);
extern int call_8c18e768(void *, int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
void operation_8c1a5e6c(Object *a0)
{
    Object *o = a0;
    Frame frame;
    int v17;
    int v19;
    float v18;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    if (++*(int *)((char *)o + 0x280) > 0x96) {
        o->f278 = 1;
        o->f280 = (Arg0_280 *)0;
        o->f274->f04 &= -0x11;
        operation_8c1a6214();
        call_8c01c2c8();
        operation_8c1a6240(o);
        o->f27c = 0;
    }
    call_8c3827d8((void *)((void *)0x8c31ddfc));
    call_8c37eb1c((void *)((void *)g_8c31df44), 0, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x20)), 1, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x40)), 2, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x60)), 3, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0x80)), 4, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0xa0)), 5, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0xc0)), 6, 0, -65535.0f);
    call_8c37eb1c((void *)((g_8c31df44 + 0xe0)), 7, 0, -65535.0f);
    set_child_blend();
    sq_select_8c38aeb4(1);
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31e154;
    t1 = call_8c18e8a0((void *)(o->f280), 0x1e);
    if (0xa > t1) {
        o->f268 -= 0.05f;
        o->f26c -= 0.05f;
    }
    t2 = call_8c18e8a0((void *)(o->f280), 0x1e);
    if (t2 > 0x14) {
        o->f268 -= 0.1f;
        o->f26c -= 0.1f;
    }
    t3 = call_8c18e8a0((void *)(o->f280), 0x1e);
    if (t3 == 0) {
        o->f268 = 1.5f;
        o->f26c = 1.5f;
    }
    v17 = (int)0x268;
    t4 = call_8c18e768((void *)(o->f280), 0x1e);
    v19 = (int)0x26c;
    v18 = (float)(&frame)->f00.f04;
    (&frame)->f08 = ((S_x74768 *)((int)o + v17))->f00 * (((S_x79280 *)((char *)(int *)((char *)o + 0x180) + (t4 << 5)))->f00 - (&frame)->f00.f00) + (&frame)->f00.f00;
    t5 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f0c = ((S_x15952 *)((int)o + v19))->f00 * (((S_x16176 *)((char *)(int *)((char *)o + 0x184) + (t5 << 5)))->f00 - v18) + v18;
    t6 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f10 = (((S_x16960 *)((char *)(int *)((char *)o + 0x188) + (t6 << 5)))->f00 - (&frame)->f00.f00) * o->f268 + (&frame)->f00.f00;
    t7 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f14 = (((S_x17184 *)((char *)(int *)((char *)o + 0x18c) + (t7 << 5)))->f00 - v18) * ((S_x17744 *)((int)o + v19))->f00 + v18;
    t8 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f18 = ((S_x20720 *)((char *)(int *)((char *)o + 0x190) + (t8 << 5)))->f00;
    t9 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f1c = ((S_x21168 *)((char *)(int *)((char *)o + 0x194) + (t9 << 5)))->f00;
    t10 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f20 = ((S_x21504 *)((char *)(int *)((char *)o + 0x198) + (t10 << 5)))->f00;
    t11 = call_8c18e768((void *)(o->f280), 0x1e);
    (&frame)->f24 = ((S_x21840 *)((char *)(int *)((char *)o + 0x19c) + (t11 << 5)))->f00;
    t12 = call_8c18e8a0((void *)(o->f280), 0x1e);
    t13 = call_8c18e768((void *)((0x1e - t12) * 0xff), 0x1e);
    sq_header_8c38af22(8, (int)(t13 << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(&(&frame)->f08), 1.0f);
    sq_flush_8c38af12();
    restore_child_blend();
}
