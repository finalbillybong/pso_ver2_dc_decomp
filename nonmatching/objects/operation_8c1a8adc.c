/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a8adc
 * function: operation_8c1a8adc
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 6 of 105 reference instruction lines
 * differing bytes: 9
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
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_1c S_g8c467180_1c;
typedef struct S_g8c467180_1c_0 S_g8c467180_1c_0;
typedef struct S_g8c467180_24 S_g8c467180_24;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x4];
    short f34;
};
struct S_g8c467180 {
    char unknown0[0x1c];
    S_g8c467180_1c *f1c;
    char unknown20[0x4];
    S_g8c467180_24 *f24;
};
struct S_g8c467180_1c {
    char unknown0[0x4c];
    int f4c;
};
struct S_g8c467180_24 {
    char unknown0[0xa8];
    int fa8;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern char g_8c324008[];
extern int lookup_low_id(int);
extern char call_8c247730(int, int);
extern void operation_8c119764(int, int, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c18eb44(int);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
void operation_8c1a8adc(Object *o, int a1)
{
    int t1;
    int v3;
    int v1;
    int t2;
    S_c8c0adc1c *t4;
    t1 = lookup_low_id((int)g_8c418248);
    v1 = (int)a1;
    if (t1 != 0) {
        t2 = call_8c247730((int)(t1 + 0x3bc), a1);
        v1 = (int)a1;
        if (t2 == -1) {
            v1 = (int)0x13;
        }
        if ((short)v1 != o->f34) {
            o->f34 = v1;
            if ((short)v1 == 0x13) {
                operation_8c119764((int)(o->f2c), (int)(g_8c324008 + 0x14), 0x82);
                return;
            }
            reset_text_cursor_8c18ea38();
            if ((short)v1 != 0x11 && (short)v1 != 0xe) {
                v3 = call_8c247730((int)(t1 + 0x3bc), v1);
                operation_8c18ea4c((int)(g_8c467180->f1c->f4c));
                operation_8c18eb44((int)(v3 + 1));
            }
            operation_8c18ea4c((int)(g_8c467180->f24->fa8));
            t4 = call_8c0adc1c((int)((short)v1), v3);
            operation_8c18eb44((int)(t4->f10));
            operation_8c18ea4c(*(int *)((int)g_8c467180->f1c + ((short)v1 << 2)));
            operation_8c119764((int)(o->f2c), (int)((void *)0x8c4dbe40), 0x82);
        }
    }
}
