/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01ff68
 * function: operation_8c01ff68
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 32 of 115 reference instruction lines
 * differing bytes: 27
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
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Block48 {
    int words[12];
} Block48;
typedef struct S_c8c1a71b4 S_c8c1a71b4;
typedef struct S_c8c1a71d8 S_c8c1a71d8;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
typedef struct Block_p0_c00 {
    char unknown0[0x10];
    float f10;
    char unknown14[0x10];
} Block_p0_c00;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0xa4];
    Arg0_184 *f184;
    char unknown188[0xa78];
    Block_p0_c00 fc00;
    Block48 fc24;
    Block32 fc54;
};
struct Arg1 {
    Block36 f00;
};
struct S_c8c1a71d8 {
    Block48 f00;
};
struct S_c8c1a71b4 {
    Block32 f00;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_vv4 {
    int f00;
};
extern void operation_8c0265b4(void *);
extern void operation_8c0265f4(void *);
extern void operation_8c02664c(void *);
extern S_c8c1a71d8 *operation_8c1a71d8(int);
extern S_c8c1a71b4 *operation_8c1a71b4(int);
extern float operation_8c1a70d4(int);
extern float operation_8c1a70f4(void *);
extern void call_8c0439bc(float, float, Object *, Arg0_184 *, void *, void *);
void operation_8c01ff68(Object *o, S_vv4 *a1)
{
    float v1;
    int v2;
    int v3;
    S_c8c1a71d8 *t1;
    S_c8c1a71b4 *t2;
    float t3;
    float t4;
    v1 = (float)o->fc00.f10;
    *(Block36 *)&o->fc00 = *(Block36 *)a1;
    o->fc00.f10 = v1;
    o->f184 = (Arg0_184 *)&o->fc00;
    operation_8c0265b4((void *)o);
    operation_8c0265f4((void *)o);
    operation_8c02664c((void *)o);
    t1 = operation_8c1a71d8((int)o);
    *(Block48 *)&o->fc24 = *(Block48 *)&t1->f00;
    t2 = operation_8c1a71b4((int)o);
    *(Block32 *)&o->fc54 = *(Block32 *)&t2->f00;
    t3 = operation_8c1a70d4((int)o);
    t4 = operation_8c1a70f4((void *)o);
    call_8c0439bc(t3, t4, o, (Arg0_184 *)(o->f184), (void *)(&o->fc24), (void *)(&o->fc54));
    o->fdc->f04 = o->f184->f10 * 0.5f;
    v3 = (int)0;
    a1 = (S_vv4 *)(void *)0x8c004000;
    v2 = (int)0x1000;
    while (v2 > (unsigned int)(short)v3) {
        if ((a1++)->f00 != 0) {
            for (;;) {
            }
        }
        v3 = (int)(v3 + 1);
    }
}
