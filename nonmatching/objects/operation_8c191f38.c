/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c191f38
 * function: operation_8c191f38
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 12 of 133 reference instruction lines
 * differing bytes: 11
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
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_0 S_c8c021ef8_0;
typedef struct S_c8c021ef8_7bc S_c8c021ef8_7bc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    unsigned short fa0;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x4b0];
    short f7ba;
    S_c8c021ef8_7bc *f7bc;
    char unknown7c0[0x10];
    int f7d0;
};
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c46fec0 g_8c46fec0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern void operation_8c021cc0(S_c8c021ef8 *, void *);
extern void operation_8c01d778(void *, int);
extern void reset_effect_event(void *, unsigned short);
extern void send_effect_event(void *);
void operation_8c191f38(Object *o)
{
    S_c8c021ef8 *t3;
    int v4;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    int v3;
    int v2;
    int v1;
    S_c8c021ef8 *t4;
    t1 = lookup_low_id((int)(o->fa0 & 0xffff));
    t2 = lookup_low_id((int)g_8c418248);
    if (t1 == 0 || t2 == 0) {
        return;
    }
    operation_8c0e7720((void *)((void *)&g_8c46fec0), (int)(t1->f7ba), (int)(*(S_g8c4e18c0 **)((char *)0x8c4e18c0 + (t1->f7ba << 3))));
    set_global_8c01c1d0();
    v1 = (int)0x7d0;
    v2 = (int)0x7bc;
    v3 = (int)0;
    while (4 > v3) {
        t3 = lookup_low_id(v3);
        if (t3 != 0) {
            v4 = (int)(t3->f308 == 3);
            if (v4 != 0) {
                *(int *)((char *)((char *)t3 + 0x0) + (v1)) = o->fa0 & 0xffff;
                operation_8c021cc0(t3, (void *)((&g_8c46fec0)->f0c));
                operation_8c01d778((void *)t3, (int)(*(S_c8c021ef8_0 **)((char *)((char *)t1 + 0x0) + (v2))));
            }
        }
        v3 = (int)(v3 + 1);
    }
    if (t2 != 0) {
        t2->f7d0 = o->fa0 & 0xffff;
        t4 = lookup_low_id((int)(o->fa0 & 0xffff));
        if (t4 != 0) {
            operation_8c01d778((void *)t2, (int)(t1->f7bc));
        }
        operation_8c021cc0(t2, (void *)((&g_8c46fec0)->f0c));
    }
    if ((int)(g_8c418248) == (o->fa0 & 0xffff)) {
        reset_effect_event((void *)(((char *)t2 + 0x7b8)), (unsigned short)(o->fa0));
        send_effect_event((void *)(((char *)t2 + 0x7b8)));
    }
}
