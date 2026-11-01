/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a661c
 * function: operation_8c1a661c
 * language: c
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 36 of 174 reference instruction lines
 * differing bytes: 37
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0x14];
    int f2c;
    char unknown30[0x4];
    int f34;
};
struct Arg1 {
    int f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
};
extern int operation_8c1a68f8(int);
extern void normalize_rectangle_fields(void *, float, float);
extern void swap_floats_8c104c40(void *);
extern void swap_floats_8c104c50(void *);
void operation_8c1a661c(Object *o, Arg1 *a1, int a2, int a3, int a4, int a5, int a6)
{
    int v25;
    int t1;
    float fx;
    int k;
    float fy;
    v25 = (int)(unsigned short)a2;
    if (v25 == 0xff) {
        o->tag |= 2;
        a1->f00 |= 2;
        return;
    }
    o->tag &= -3;
    a1->f00 &= -3;
    fx = (float)(v25 & 7) * 32.0f;
    fy = (float)(v25 >> 3 & 7) * 32.0f;
    o->f34 = (unsigned char)(v25 >> 6 & 3) + 6;
    t1 = operation_8c1a68f8(a3);
    o->f2c = (int)(t1);
    if ((unsigned int)0x12 >= (unsigned int)(unsigned short)a2) {
        k = a6;
        o->f10 = 31.0f;
        o->f14 = 31.0f;
        a1->f08 = o->f08 - 5.0f;
        a1->f0c = o->f0c;
        a1->f10 = 50.0f;
        a1->f14 = 40.0f;
        normalize_rectangle_fields((void *)a1, *(float *)((char *)0x8c287be8 + (k << 3)), *(float *)((char *)((char *)0x8c287be8 + (k << 3)) + 0x4));
        a1->f18 = 0.2f;
    } else {
        o->f10 = 30.0f;
        o->f14 = 30.0f;
        a1->f08 = o->f08;
        a1->f0c = o->f0c;
        a1->f10 = 32.0f;
        a1->f14 = 32.0f;
        normalize_rectangle_fields((void *)a1, 128.0f, 208.0f);
        a1->f18 = 0.3f;
    }
    normalize_rectangle_fields((void *)o, fx, fy);
    if (a4 != 0) {
        swap_floats_8c104c40((void *)o);
    }
    if (a5 != 0) {
        swap_floats_8c104c50((void *)o);
    }
}
