typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv46 S_vv46;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x22];
    unsigned short f22;
};
struct S_vv46 {
    char unknown0[0x22];
    unsigned short f22;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_20 {
    char unknown0[0x44];
    float f44;
    char unknown48[0xc];
    float f54;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
extern char g_8c41cba0[];
extern int process_effect_record(void *);
extern int operation_8c1dccb4(void *);
extern int operation_8c1dd614(void *);
extern void call_8c225abc(Arg0_20 *, float);
extern int operation_8c01d88c(void *, int);
extern void set_fields_8c225afc(void *);
extern void set_fields_8c225b14(void *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c18c808(S_g8c4dbde0 *);
void operation_8c1da040(Object *o)
{
    S_vv46 *v46;
    int v8;
    int t1;
    int t2;
    S_vv46 *v47;
    int t3;
    int t4;
    int t5;
    int t6;
    if (((o->f24->f22 & 0x10)) != 0) {
        t1 = process_effect_record((void *)(((char *)o + 0x28)));
        if (t1 != 0) {
            v46 = (S_vv46 *)o->f24;
            if (((v46->f22 & 0x10)) != 0) {
                v46->f22 &= -0x11;
                operation_8c1dccb4((void *)v46);
            }
        }
    }
    if (((o->f24->f22 & 0x20)) != 0) {
        v47 = (S_vv46 *)o->f24;
        if (((v47->f22 & 0x20)) != 0) {
            v47->f22 &= -0x21;
            operation_8c1dccb4((void *)v47);
        }
    }
    t3 = operation_8c1dd614((void *)(o->f24));
    if (t3 != 0) {
        call_8c225abc((Arg0_20 *)(o->f20), 200.0f);
        return;
    }
    call_8c225abc((Arg0_20 *)(o->f20), 408.0f);
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x10)) == 0) {
        t4 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x10);
        if (t4 == 0) {
            goto L_8c1da0de;
        }
    }
    set_fields_8c225afc((void *)(o->f20));
L_8c1da0de:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x20)) == 0) {
        t5 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x20);
        if (t5 == 0) {
            goto L_8c1da0fc;
        }
    }
    set_fields_8c225b14((void *)(o->f20));
L_8c1da0fc:;
    if (o->f20->f44 == o->f20->f54) {
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t6 == 0) {
                return;
            }
        }
        call_8c18c808((S_g8c4dbde0 *)(*(S_g8c4dbde0 **)0x8c4dbde0));
        (*(S_g8c4dbde0 **)0x8c4dbde0)->f20 &= -9;
    }
}
