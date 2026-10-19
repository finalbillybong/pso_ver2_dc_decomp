typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xae];
    int fb4;
    float fb8;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c0a7608(void *, void *);
extern int create_effect_777c(void *, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c229830(Object *o)
{
    S_vv1 *v1;
    int t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x94);
    if (o->fb4 >= 0x5a) {
        if (v1->f00 == 0) {
            goto L_8c229890;
        }
        mark_effect_for_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    } else {
        if (v1->f00 == 0) {
            t1 = create_effect_769c((void *)(((char *)o + 0xc0)), 0x1bd);
            v1->f00 = (S_vv1_0 *)t1;
            if (v1->f00 == 0) {
                goto L_8c229890;
            }
            set_effect_bits((void *)(v1->f00), (unsigned short)0x40);
        } else {
            if (v1->f00 != 0) {
                call_8c0a7608((void *)(v1->f00), (void *)(((char *)o + 0xc0)));
            }
        }
    }
L_8c229890:;
    if (o->fb4 == 0x86) {
        t2 = create_effect_777c((void *)(((char *)o + 0xa4)), 0x9b);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
    }
    if (o->fb4 != 0x28 && o->fb4 != 0x3c) {
    } else {
        call_8c05fbf8(0x3003a, (void *)(((char *)o + 0xa4)), 0, 1);
    }
    if ((o->fb8 += 1.0f) > 119.0f) {
        o->fb8 = 119.0f;
    }
    if (++o->fb4 >= 0x8c) {
        o->f04 |= 1;
    }
}
