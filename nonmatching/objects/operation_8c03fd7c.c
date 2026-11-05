/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03fd7c
 * function: operation_8c03fd7c
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 4 of 152 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_L8c466de8 S_L8c466de8;
typedef struct Frame Frame;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x5];
    unsigned char f29;
    char unknown2a[0x2];
    int f2c;
    char unknown30[0x4];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
};
struct Frame {
    Vector3 f00;
};
struct S_L8c466de8 {
    int f00;
    int f04;
    int f08;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern S_L8c466de8 g_8c466de8;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern void operation_8c100524(int);
extern int create_effect_7a48(void *, int, int);
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern float njSin_8c37eb0c(int);
void operation_8c03fd7c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    if (++*(int *)0x8c466df4 > (o->f34 * 0x50)) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
        if (t1 != 0) {
            initialize_color_rise(t1, (void *)(*(S_g8c44be84 **)0x8c44be84), (void *)((void *)0x8c03f480));
        }
        operation_8c100524(0x1e);
        *(int *)0x8c466de4 = 3;
        return;
    }
    if ((unsigned int)(unsigned char)++o->f29 > (unsigned int)5 && o->f2c == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c2efd34;
        t2 = create_effect_7a48((void *)(&frame), 0x1e3, 1);
        g_8c466de8.f00 = (int)(t2);
        t3 = create_effect_7a48((void *)(&frame), 0x1e4, 1);
        g_8c466de8.f04 = (int)(t3);
        t4 = create_effect_7a48((void *)(&frame), 0x1e5, 1);
        g_8c466de8.f08 = (int)(t4);
        o->f2c = 1;
    }
    if (((*(int *)(g_8c41cba0 + 0x28) & 8)) != 0 && o->f2c != 0) {
        goto L_8c03fe3e;
    }
    t5 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
    if (t5 != 0 && o->f2c != 0) {
L_8c03fe3e:;
        play_se_8c05fbf8(0x50001, 0, 0, 0);
        *(int *)0x8c466de4 = 2;
        o->f29 = 0;
        *(int *)0x8c466df4 = 0;
    }
    if (++o->f20 > 0x78) {
        o->f20 = 0;
    }
    t6 = njSin_8c37eb0c((int)((int)((float)(o->f20 * 3) * 65536.0f / 360.0f)));
    o->f3c = o->f40 = o->f44 = (t6 + 1.0f) / 2.0f;
}
