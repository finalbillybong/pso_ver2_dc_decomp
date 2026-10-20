typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_0 S_vv12_0;
typedef struct S_vv59 S_vv59;
typedef struct S_vv59_0 S_vv59_0;
typedef struct S_vv60 S_vv60;
typedef struct S_vv60_0 S_vv60_0;
typedef struct S_vv61 S_vv61;
typedef struct S_vv61_0 S_vv61_0;
typedef struct S_vv62 S_vv62;
typedef struct S_vv62_0 S_vv62_0;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x2c];
    int f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x48];
    int f424;
    char unknown428[0x34];
    Vector3 f45c;
};
struct S_vv11 {
    S_vv11_0 *f00;
};
struct S_vv12 {
    S_vv12_0 *f00;
};
struct S_vv59 {
    S_vv59_0 *f00;
};
struct S_vv60 {
    S_vv60_0 *f00;
};
struct S_vv61 {
    S_vv61_0 *f00;
};
struct S_vv62 {
    S_vv62_0 *f00;
};
extern void operation_8c1b3468(int);
extern void call_8c1b349c(Object *);
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c0a7608(void *, void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c1b1668(void *, int);
void operation_8c1b2a7c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv11 *v11;
    S_vv12 *v12;
    S_vv59 *v59;
    S_vv60 *v60;
    S_vv61 *v61;
    S_vv62 *v62;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)((char *)o + 0x450);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f45c;
    if (o->f3a0 == 6) {
        operation_8c1b3468((int)o);
    } else {
        if (o->f3a0 == 1) {
            call_8c1b349c(o);
        }
    }
    if (o->f3d0 == 8) {
        v11 = (S_vv11 *)((char *)o + 0x438);
        v12 = (S_vv12 *)o;
        v12 = (S_vv12 *)((char *)v12 + 1088);
        if (o->f3d8 > 28.0f) {
            if (v11->f00 != 0) {
                mark_effect_for_release((void *)(v11->f00));
                v11->f00 = (S_vv11_0 *)0;
            }
            if (v12->f00 == 0) {
                goto L_8c1b2b86;
            }
            mark_effect_for_release((void *)(v12->f00));
            v12->f00 = (S_vv12_0 *)0;
        } else {
            if (!(15.0f > o->f3d8)) {
                if (v11->f00 == 0) {
                    t1 = create_effect_769c((void *)(&(&frame)->f0c), 0x142);
                    v11->f00 = (S_vv11_0 *)t1;
                    if (t1 != 0) {
                        set_effect_bits((void *)(v11->f00), (unsigned short)0x40);
                    }
                }
                if (v12->f00 == 0) {
                    t2 = create_effect_769c((void *)(&frame), 0x142);
                    v12->f00 = (S_vv12_0 *)t2;
                    if (t2 != 0) {
                        set_effect_bits((void *)(v12->f00), (unsigned short)0x40);
                    }
                }
            }
        }
L_8c1b2b86:;
        if (v11->f00 != 0) {
            call_8c0a7608((void *)(v11->f00), (void *)(&(&frame)->f0c));
        }
        if (v12->f00 != 0) {
            call_8c0a7608((void *)(v12->f00), (void *)(&frame));
        }
    }
    if (o->f3d0 != 9) {
    } else {
        v59 = (S_vv59 *)((char *)o + 0x438);
        v60 = (S_vv60 *)((char *)o + 0x43c);
        v61 = (S_vv61 *)o;
        v61 = (S_vv61 *)((char *)v61 + 1088);
        v62 = (S_vv62 *)o;
        v62 = (S_vv62 *)((char *)v62 + 1092);
        if (o->f3d8 > 10.0f) {
            if (v59->f00 != 0) {
                mark_effect_for_release((void *)(v59->f00));
                v59->f00 = (S_vv59_0 *)0;
            }
            if (v60->f00 != 0) {
                mark_effect_for_release((void *)(v60->f00));
                v60->f00 = (S_vv60_0 *)0;
            }
            if (v61->f00 != 0) {
                mark_effect_for_release((void *)(v61->f00));
                v61->f00 = (S_vv61_0 *)0;
            }
            if (v62->f00 == 0) {
                goto L_8c1b2cd6;
            }
            mark_effect_for_release((void *)(v62->f00));
            v62->f00 = (S_vv62_0 *)0;
        } else {
            if (!(2.0f > o->f3d8)) {
                if (v59->f00 == 0) {
                    t3 = create_effect_769c((void *)(&(&frame)->f0c), 0x13a);
                    v59->f00 = (S_vv59_0 *)t3;
                    if (t3 != 0) {
                        set_effect_bits((void *)(v59->f00), (unsigned short)0x40);
                    }
                    call_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 1);
                }
                if (v60->f00 == 0) {
                    t4 = create_effect_769c((void *)(&(&frame)->f0c), 0x13b);
                    v60->f00 = (S_vv60_0 *)t4;
                    if (t4 != 0) {
                        set_effect_bits((void *)(v60->f00), (unsigned short)0x40);
                    }
                }
                if (v61->f00 == 0) {
                    t5 = create_effect_769c((void *)(&frame), 0x13a);
                    v61->f00 = (S_vv61_0 *)t5;
                    if (t5 != 0) {
                        set_effect_bits((void *)(v61->f00), (unsigned short)0x40);
                    }
                }
                if (v62->f00 == 0) {
                    t6 = create_effect_769c((void *)(&frame), 0x13b);
                    v62->f00 = (S_vv62_0 *)t6;
                    if (t6 != 0) {
                        set_effect_bits((void *)(v62->f00), (unsigned short)0x40);
                    }
                }
            }
        }
L_8c1b2cd6:;
        if (v59->f00 != 0) {
            call_8c0a7608((void *)(v59->f00), (void *)(&(&frame)->f0c));
        }
        if (v60->f00 != 0) {
            call_8c0a7608((void *)(v60->f00), (void *)(&(&frame)->f0c));
        }
        if (v61->f00 != 0) {
            call_8c0a7608((void *)(v61->f00), (void *)(&frame));
        }
        if (v62->f00 != 0) {
            call_8c0a7608((void *)(v62->f00), (void *)(&frame));
        }
    }
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b1668((void *)o, (int)(o->f424));
    }
}
