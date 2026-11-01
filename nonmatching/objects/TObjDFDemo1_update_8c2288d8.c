/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2288d8
 * function: TObjDFDemo1_update_8c2288d8
 * language: c
 * reference size: 528 bytes
 * compiled size: 528 bytes (+0.0%)
 * differing lines: 10 of 218 reference instruction lines
 * differing bytes: 12
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
typedef struct Frame Frame;
typedef struct S_g8c337df4 S_g8c337df4;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv8 S_vv8;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_vv8 {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x10e];
    int f114;
    float f118;
    float f11c;
};
extern void mark_effect_for_release(void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c3bdf60(Frame *, int);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern int create_effect_777c(void *, int);
extern void operation_8c191504(int);
extern void play_se_8c05fbf8(int, void *, int, int);
typedef struct Row {
    int f00;
    int f04;
    int f08;
    Vector3 f0c;
} Row;
extern Row g_8c337df4[];
void TObjDFDemo1_update_8c2288d8(Object *o)
{
    Frame frame;
    int v1;
    int i;
    int v2;
    int v3;
    int off;
    int v5;
    int v6;
    int v7;
    Vector3 *v8;
    float t1;
    float t2;
    int t4;
    v1 = 0x114;
    v2 = 0x110;
    v3 = 0x104;
    for (i = 0; 4 > i; i++) {
        off = i * 0x18;
        v5 = *(int *)((char *)o + v1);
        if (v5 >= *(int *)((char *)(int *)((char *)g_8c337df4 + 8) + off)) {
            v6 = i << 2;
            if (*(int *)((char *)(int *)((char *)o + 0x94) + v6) == 0) {
                continue;
            }
            mark_effect_for_release(*(void **)((char *)(int *)((char *)o + 0x94) + v6));
            *(int *)((char *)(int *)((char *)o + 0x94) + v6) = 0;
        } else if (v5 >= *(int *)((char *)(int *)((char *)g_8c337df4 + 4) + off)) {
            v7 = i << 2;
            if (*(int *)((char *)(int *)((char *)o + 0x94) + v7) == 0) {
                t2 = njSin_8c37eb0c(-*(int *)((char *)o + v2));
                t1 = njCos_8c38c154(-*(int *)((char *)o + v2));
                v8 = (Vector3 *)((char *)g_8c337df4 + off + 0xc);
                frame.f00 = t1 * v8->x + t2 * v8->z;
                frame.f08 = -t2 * v8->x + t1 * v8->z;
                frame.f04 = v8->y;
                call_8c3bdf60(&frame, (int)o + v3);
                *(int *)((char *)(int *)((char *)o + 0x94) + v7) = create_effect_769c(&frame, *(int *)((char *)g_8c337df4 + off));
                if (*(int *)((char *)(int *)((char *)o + 0x94) + v7) != 0) {
                    set_effect_bits(*(void **)((char *)(int *)((char *)o + 0x94) + v7), 0x40);
                }
            }
        }
    }
    if (o->f114 >= 0x46 && 0x82 >= o->f114) {
        t4 = create_effect_777c((void *)(((char *)o + 0x104)), 0x14e);
        if (t4 != 0) {
            set_effect_bits((void *)t4, (unsigned short)0x40);
        }
    }
    if (o->f114 != 0x46 && o->f114 != 0x2c) {
    } else {
        operation_8c191504(2);
    }
    if (o->f114 == 0x7c) {
        play_se_8c05fbf8(0x30026, (void *)(((char *)o + 0x104)), 0, 1);
    }
    if ((o->f118 += 0.5f) > 149.0f) {
        o->f118 = 149.0f;
    }
    if (!(1.0f > (o->f11c += 0.0222222228f))) {
        o->f11c -= 1.0f;
    }
    if (++o->f114 >= 0x12c) {
        o->f04 |= 1;
    }
}
