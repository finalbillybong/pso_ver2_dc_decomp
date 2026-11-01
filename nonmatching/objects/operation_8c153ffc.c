/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c153ffc
 * function: operation_8c153ffc
 * language: c
 * reference size: 608 bytes
 * compiled size: 608 bytes (+0.0%)
 * differing lines: 8 of 218 reference instruction lines
 * differing bytes: 303
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a53e4 S_c8c0a53e4;
typedef struct Frame Frame;
typedef struct S_g8c4da88c S_g8c4da88c;
typedef struct S_g8c4da9e4 S_g8c4da9e4;
typedef struct S_g8c4da9f4 S_g8c4da9f4;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x14];
    float f40;
    char unknown44[0x20];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x25c];
    short f358;
    char unknown35a[0x3e];
    int f398;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
};
struct S_c8c0a53e4 {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_g8c4da9f4 {
    int f00;
};
struct S_g8c4da9e4 {
    int f00;
};
extern int g_8c4d9b80;
extern S_g8c4da88c *g_8c4da88c;
extern S_g8c4da9e4 *g_8c4da9e4;
extern S_g8c4da9f4 *g_8c4da9f4;
extern void release_slots_8c154abc(void *);
extern void operation_8c01c5f0(void *);
extern void operation_8c0a1f60(int, float);
extern void operation_8c13a3f0(void);
extern void operation_8c0a2144(int);
extern void call_8c0a5400(Frame *, int);
extern void set_view_offsets(void *, void *, void *);
extern S_c8c0a53e4 *get_view_motion_parameters(void);
extern void operation_8c0a21a4(void);
extern void call_8c15425c(Object *);
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void operation_8c1083c4(int);
extern void refresh_follow_effect_8c0129f4(void *);
extern int global_present_8c13a3e0(void);
extern void operation_8c09e6d0(void *);
extern void operation_8c13a424(void);
extern void operation_8c13a418(void);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c05fd7c(int, Object *, int, int, int);
void operation_8c153ffc(Object *o)
{
    Frame frame;
    int v3;
    S_c8c0a53e4 *t1;
    int t2;
    switch (o->f398) {
    case 0:
        release_slots_8c154abc((void *)o);
        o->ff0 = 0;
        operation_8c01c5f0((void *)o);
        o->f358 = 0x3c;
        operation_8c0a1f60(0xb4, 0.04f);
        o->f398 = 1;
        operation_8c13a3f0();
        break;
    case 1:
        (&frame)->f01 = 1;
        (&frame)->f00 = 2;
        (&frame)->f02 = 0;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 1.0f;
        operation_8c0a2144(2);
        call_8c0a5400((Frame *)((&frame)), 0x160a);
        ((int *)((char *)o + 0x60))[1] = 0;
        set_view_offsets((void *)0x8c4d9b64, (void *)0x8c4d9b64, (char *)o + 0x60);
        o->f398 = 2;
        break;
    case 2:
        t1 = get_view_motion_parameters();
        if (((t1->f02 & 1)) != 0) {
            operation_8c0a21a4();
            g_8c4da9f4->f00 |= 8;
            g_8c4da9e4->f00 |= 8;
            o->ff0 = 4;
            o->f398 = 3;
        }
        call_8c15425c(o);
        break;
    case 3:
        operation_8c01c5f0((void *)o);
        call_8c15425c(o);
        o->f40 = o->ff8 * 0.53191489f;
        if (47.0f > o->ff8) {
            break;
        }
        v3 = (int)0x324;
        TBreakUpMdl_create_8c108644((int)g_8c4da88c, (int)((void *)0x8c315fbc), (int)(o->f28), (int)((int)o + v3), (int)(o->f64));
        operation_8c1083c4((int)(((char *)o + 0x324)));
        refresh_follow_effect_8c0129f4((void *)o);
        g_8c4d9b80 = 1;
        t2 = global_present_8c13a3e0();
        if (t2 != 0) {
            operation_8c09e6d0((void *)o);
        }
        operation_8c13a424();
        operation_8c13a418();
        o->f398 = 4;
        o->f358 = 0x10;
        break;
    case 4:
        if (((o->f358 & 3)) == 0) {
            play_se_8c05fbf8(0x3000f, (void *)(((char *)o + 0x3c)), 0, 1);
        }
        if ((short)--o->f358 > 0) {
            break;
        }
        o->f04 |= 1;
        break;
    case -1:
        return;
    }
    call_8c05fd7c(0x30021, o, 0, 0, 0);
}
