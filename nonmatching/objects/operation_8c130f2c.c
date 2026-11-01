/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c130f2c
 * function: operation_8c130f2c
 * language: c
 * reference size: 1508 bytes
 * compiled size: 1500 bytes (-0.5%)
 * differing lines: 88 of 627 reference instruction lines
 * differing bytes: 1320
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d9a44 S_g8c4d9a44;
typedef struct S_g8c4d9a44_0 S_g8c4d9a44_0;
typedef struct S_g8c4d9a44_4 S_g8c4d9a44_4;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_2c Arg0_38_2c_30_2c;
typedef struct Arg0_38_2c_30_2c_30 Arg0_38_2c_30_2c_30;
typedef struct Arg0_38_2c_30_2c_30_30 Arg0_38_2c_30_2c_30_30;
typedef struct Arg0_38_2c_30_2c_30_30_30 Arg0_38_2c_30_2c_30_30_30;
typedef struct Arg0_38_2c_30_2c_30_30_30_4 Arg0_38_2c_30_2c_30_30_30_4;
typedef struct Arg0_38_2c_30_2c_30_30_4 Arg0_38_2c_30_2c_30_30_4;
typedef struct Arg0_38_2c_30_2c_30_4 Arg0_38_2c_30_2c_30_4;
typedef struct Arg0_38_2c_30_2c_4 Arg0_38_2c_30_2c_4;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_38_2c_30_30_30 Arg0_38_2c_30_30_30;
typedef struct Arg0_38_2c_30_30_30_30 Arg0_38_2c_30_30_30_30;
typedef struct Arg0_38_2c_30_30_30_30_4 Arg0_38_2c_30_30_30_30_4;
typedef struct Arg0_38_2c_30_30_30_4 Arg0_38_2c_30_30_30_4;
typedef struct Arg0_38_2c_30_30_4 Arg0_38_2c_30_30_4;
typedef struct Arg0_38_2c_30_4 Arg0_38_2c_30_4;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x98];
    Arg0_100 *f100;
    char unknown104[0x4];
    int f108;
    unsigned short f10c;
    unsigned short f10e;
    unsigned short f110;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    Arg0_38_2c *f2c;
};
struct S_g8c4d9a44 {
    S_g8c4d9a44_0 *f00;
    S_g8c4d9a44_4 *f04;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30 *f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_4 *f04;
    char unknown8[0x24];
    Arg0_38_2c_30_2c *f2c;
    Arg0_38_2c_30_30 *f30;
};
struct Arg0_38_2c_30_2c {
    char unknown0[0x4];
    Arg0_38_2c_30_2c_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30_2c_30 *f30;
};
struct Arg0_38_2c_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_30_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30_30_30 *f30;
};
struct Arg0_38_2c_30_2c_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_2c_30_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30_2c_30_30 *f30;
};
struct Arg0_38_2c_30_2c_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_2c_30_30_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30_2c_30_30_30 *f30;
};
struct Arg0_38_2c_30_2c_30_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_2c_30_30_30_4 *f04;
    float f08;
    float f0c;
    float f10;
};
struct Arg0_38_2c_30_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_30_30_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x1c];
    Arg0_38_2c_30_30_30_30 *f30;
};
struct Arg0_38_2c_30_30_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_30_30_30_4 *f04;
    float f08;
    float f0c;
    float f10;
};
extern S_g8c4d9a44 *g_8c4d9a44;
extern int operation_03d080(unsigned short);
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3bdf60(void *, void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa702(void *);
extern void reset_state_8c391c94(void);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c130f2c(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    int v5;
    int v7;
    int v8;
    int v10;
    int v11;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)1;
    t1 = operation_03d080((unsigned short)(o->f100));
    v2 = (int)v1;
    if ((unsigned char)t1 == 0) {
        v2 = (int)v1;
        if (((o->f108 & 1)) == 0) {
            v2 = (int)0;
        }
    }
    v4 = (int)1;
    t2 = operation_03d080((unsigned short)(o->f10c));
    v5 = (int)v4;
    if ((unsigned char)t2 == 0) {
        v5 = (int)v4;
        if (((o->f108 & 1)) == 0) {
            v5 = (int)0;
        }
    }
    v7 = (int)1;
    t3 = operation_03d080((unsigned short)(o->f10e));
    v8 = (int)v7;
    if ((unsigned char)t3 == 0) {
        v8 = (int)v7;
        if (((o->f108 & 1)) == 0) {
            v8 = (int)0;
        }
    }
    v10 = (int)1;
    t4 = operation_03d080((unsigned short)(o->f110));
    v11 = (int)v10;
    if ((unsigned char)t4 == 0) {
        v11 = (int)v10;
        if (((o->f108 & 1)) == 0) {
            v11 = (int)0;
        }
    }
    njPushMatrixEx_8c38ae68();
    (&frame)->f60 = o->f38->f08;
    (&frame)->f64 = o->f38->f0c;
    (&frame)->f68 = o->f38->f10;
    call_8c3bdf60((void *)(&(&frame)->f60), (void *)(((char *)o + 0x3c)));
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f60));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3827d8((void *)(g_8c4d9a44->f04));
    call_8c3aa702((void *)(o->f38->f04));
    call_8c3aa702((void *)(o->f38->f2c->f30->f04));
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    (&frame)->f54 = o->f38->f2c->f30->f2c->f08;
    (&frame)->f58 = o->f38->f2c->f30->f2c->f0c;
    (&frame)->f5c = o->f38->f2c->f30->f2c->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f54));
    if (v8 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f2c->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f48 = o->f38->f2c->f30->f30->f08;
    (&frame)->f4c = o->f38->f2c->f30->f30->f0c;
    (&frame)->f50 = o->f38->f2c->f30->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f48));
    if (v5 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f30->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f3c = o->f38->f2c->f08;
    (&frame)->f40 = o->f38->f2c->f0c;
    (&frame)->f44 = o->f38->f2c->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f3c));
    if (v2 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f30 = o->f38->f2c->f30->f2c->f30->f30->f30->f08;
    (&frame)->f34 = o->f38->f2c->f30->f2c->f30->f30->f30->f0c;
    (&frame)->f38 = o->f38->f2c->f30->f2c->f30->f30->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f30));
    if (v11 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f2c->f30->f30->f30->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f24 = o->f38->f2c->f30->f2c->f30->f08;
    (&frame)->f28 = o->f38->f2c->f30->f2c->f30->f0c;
    (&frame)->f2c = o->f38->f2c->f30->f2c->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f24));
    if (v8 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f2c->f30->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f18 = o->f38->f2c->f30->f2c->f30->f30->f08;
    (&frame)->f1c = o->f38->f2c->f30->f2c->f30->f30->f0c;
    (&frame)->f20 = o->f38->f2c->f30->f2c->f30->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f18));
    if (v2 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f2c->f30->f30->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f0c = o->f38->f2c->f30->f30->f30->f08;
    (&frame)->f10 = o->f38->f2c->f30->f30->f30->f0c;
    (&frame)->f14 = o->f38->f2c->f30->f30->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f0c));
    if (v11 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f30->f30->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    (&frame)->f00 = o->f38->f2c->f30->f30->f30->f30->f08;
    (&frame)->f04 = o->f38->f2c->f30->f30->f30->f30->f0c;
    (&frame)->f08 = o->f38->f2c->f30->f30->f30->f30->f10;
    translate_current_matrix_v_8c382a40((void *)(&frame));
    if (v5 != 0) {
        call_8c3827d8((void *)(g_8c4d9a44->f00));
    } else {
        call_8c3827d8((void *)(g_8c4d9a44->f04));
    }
    call_8c3aa702((void *)(o->f38->f2c->f30->f30->f30->f30->f04));
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
