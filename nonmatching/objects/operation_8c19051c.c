/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19051c
 * function: operation_8c19051c
 * language: c
 * reference size: 488 bytes
 * compiled size: 488 bytes (+0.0%)
 * differing lines: 6 of 190 reference instruction lines
 * differing bytes: 13
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_0 S_g8c467180_0;
typedef struct S_g8c467180_0_0 S_g8c467180_0_0;
typedef struct S_g8c467180_24 S_g8c467180_24;
typedef struct S_g8c467180_24_0 S_g8c467180_24_0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x2c];
    int f2c;
    unsigned short f30;
    unsigned short f32;
};
struct Arg1 {
    unsigned short f00;
    unsigned short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x302];
    short f302;
};
struct S_g8c467180 {
    S_g8c467180_0 *f00;
    char unknown4[0x20];
    S_g8c467180_24 *f24;
};
struct S_g8c467180_24 {
    char unknown0[0xa4];
    int fa4;
    int fa8;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern int g_8c467188;
extern S_c8c021ef8 *lookup_low_id(int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern int call_8c247730(void *, short);
extern void operation_8c18ecb8(void);
extern void operation_8c18eb44(int);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
extern int operation_8c103b50(short);
extern void operation_8c119764(int, int, int);
void operation_8c19051c(Object *o, Arg1 *a1)
{
    S_c8c021ef8 *t1;
    int v7;
    int t2;
    int t3;
    S_c8c0adc1c *t4;
    int t5;
    unsigned short id;
    if (a1 == 0) {
        return;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    if (o->f32 == a1->f02 && o->f30 == a1->f00) {
        return;
    }
    o->f30 = a1->f00;
    o->f32 = a1->f02;
    reset_text_cursor_8c18ea38();
    switch ((unsigned int)(a1->f00)) {
    case 2:
        id = a1->f02;
        if (id == 2) {
            if (t1->f302 == 0) {
                goto L_8c1906a4;
            }
        }
        operation_8c18ea4c((int)(*(S_g8c467180_24_0 **)((char *)((char *)g_8c467180->f24 + 0x0) + (id + 0x13 << 2))));
        break;
    case 3:
        t2 = call_8c247730((void *)(((char *)t1 + 0x3bc)), a1->f02);
        if ((char)t2 == -1) {
            goto L_8c1906a4;
        }
        operation_8c18ea4c((int)(*(S_g8c467180_0_0 **)((char *)((char *)g_8c467180->f00 + 0x0) + (a1->f02 << 2))));
        id = a1->f02;
        if (id != 0x11) {
            if (id != 0xe) {
                v7 = (char)call_8c247730((void *)(((char *)t1 + 0x3bc)), id);
                if (g_8c467188 != 0) {
                    operation_8c18ecb8();
                }
                operation_8c18ea4c((int)(g_8c467180->f24->fa4));
                operation_8c18eb44(v7 + 1);
            }
        }
        operation_8c18ea4c((int)(g_8c467180->f24->fa8));
        t4 = call_8c0adc1c((int)(a1->f02), v7);
        operation_8c18eb44((int)(t4->f10));
        operation_8c18ea4c((int)(*(S_g8c467180_24_0 **)((char *)((char *)g_8c467180->f24 + 0x0) + (a1->f02 << 2))));
        break;
    case 4:
        t5 = operation_8c103b50(a1->f02);
        if (t5 != -1) {
            operation_8c18ea4c((int)(*(S_g8c467180_24_0 **)((char *)((char *)g_8c467180->f24 + 0x0) + (a1->f02 + 0x16 << 2))));
        }
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
        break;
    }
L_8c1906a4:;
    operation_8c119764((int)(o->f2c), (int)((void *)0x8c4dbe40), 0x82);
}
