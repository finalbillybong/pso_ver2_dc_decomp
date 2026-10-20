typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv36 S_vv36;
typedef struct S_vv36_0 S_vv36_0;
typedef struct S_vv47 S_vv47;
typedef struct S_vv47_0 S_vv47_0;
typedef struct S_vv61 S_vv61;
typedef struct S_vv61_0 S_vv61_0;
struct Object {
    char unknown0[0xe8];
    int fe8;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_vv36 {
    S_vv36_0 *f00;
};
struct S_vv47 {
    S_vv47_0 *f00;
};
struct S_vv61 {
    S_vv61_0 *f00;
};
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c0a7608(void *, void *);
void operation_8c22a75c(Object *o)
{
    S_vv1 *v1;
    S_vv36 *v36;
    S_vv61 *v61;
    int v73;
    int v62;
    S_vv47 *v47;
    int v60;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (S_vv1 *)o;
    v1 = (S_vv1 *)((char *)v1 + 148);
    if (o->fe8 > 0x104) {
        if (v1->f00 == 0) {
            goto L_8c22a7b0;
        }
        mark_effect_for_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    } else {
        if (o->fe8 >= 0xa0 && v1->f00 == 0) {
            t1 = create_effect_769c((void *)(((char *)o + 0xd8)), 0x178);
            v1->f00 = (S_vv1_0 *)t1;
            if (v1->f00 != 0) {
                set_effect_bits((void *)(v1->f00), (unsigned short)0x40);
            }
        }
    }
L_8c22a7b0:;
    v36 = (S_vv36 *)o;
    v36 = (S_vv36 *)((char *)v36 + 152);
    if (o->fe8 >= 0x104 && v36->f00 == 0) {
        t2 = create_effect_769c((void *)(((char *)o + 0xd8)), 0x179);
        v36->f00 = (S_vv36_0 *)t2;
        if (v36->f00 != 0) {
            set_effect_bits((void *)(v36->f00), (unsigned short)0x40);
        }
    }
    v47 = (S_vv47 *)o;
    v47 = (S_vv47 *)((char *)v47 + 156);
    if (o->fe8 >= 0xb4) {
        if (v47->f00 == 0) {
            t3 = create_effect_769c((void *)(((char *)o + 0x110)), 0x146);
            v47->f00 = (S_vv47_0 *)t3;
            if (v47->f00 == 0) {
                goto L_8c22a824;
            }
            set_effect_bits((void *)(v47->f00), (unsigned short)0x40);
        } else {
            call_8c0a7608((void *)(v47->f00), (void *)(((char *)o + 0x110)));
        }
    }
L_8c22a824:;
    v60 = (int)0x147;
    v61 = (S_vv61 *)((char *)o + 0xa0);
    v62 = (int)0;
    while (2 > v62) {
        if (o->fe8 >= 0x2d) {
            if (v61->f00 == 0) {
                goto L_8c22a884;
            }
            mark_effect_for_release((void *)(v61->f00));
            v61->f00 = (S_vv61_0 *)0;
        } else {
            char *p = (char *)((int)o + v62 * 0xc + 0xf4);
            if (v61->f00 == 0) {
                t4 = create_effect_769c((void *)p, v60);
                v61->f00 = (S_vv61_0 *)t4;
                if (v61->f00 == 0) {
                    goto L_8c22a884;
                }
                set_effect_bits((void *)(v61->f00), (unsigned short)0x40);
            } else {
                call_8c0a7608((void *)(v61->f00), (void *)p);
            }
        }
L_8c22a884:;
        v73 = (int)((char *)o + 0xa4);
        v62 = (int)(v62 + 1);
        v61 = (S_vv61 *)v73;
    }
}
