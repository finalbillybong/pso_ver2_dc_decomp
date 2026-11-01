/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13d940
 * function: operation_8c13d940
 * language: c
 * reference size: 528 bytes
 * compiled size: 528 bytes (+0.0%)
 * differing lines: 120 of 215 reference instruction lines
 * differing bytes: 71
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv14 S_vv14;
typedef struct S_vv23 S_vv23;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x2ac];
    float f3a8;
    char unknown3ac[0x2c];
    int f3d8;
};
struct Frame {
    Vector3 f00;
    int f0c;
    char unknown10[0x8];
};
struct S_vv3 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
};
struct S_vv14 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct S_vv23 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
extern Vector3 g_8c3137a8;
extern int g_8c41cb64;
extern int g_8c467874;
extern int g_8c4d9ba0;
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateY_8c37df90(int, void *);
extern void operation_8c01cfc0(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3be280(int, Frame *, void *);
extern void TTecGiZonde_create_8c0b29c8(void *, void *, void *, void *);
extern void create_effect_b0ffc(void *, void *, void *, void *);
extern void TTecGiBarta_create_8c0b1af0(void *, void *, void *, void *);
void operation_8c13d940(Object *o)
{
    Frame frame;
    int v2;
    S_vv3 *v3;
    unsigned short v36;
    unsigned short v4;
    int v1;
    int v13;
    S_vv14 *v14;
    int v10;
    int v11;
    int v12;
    int v22;
    S_vv23 *v23;
    int v19;
    int v20;
    int v21;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njTranslate_8c3829bc(0, o->f3c, o->f40 + o->f3a8, o->f44);
    njRotateY_8c37df90(0, (void *)(o->f64));
    operation_8c01cfc0((void *)o, o->ff8);
    njPopMatrixEx_8c38ad10();
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3137a8;
    njPushMatrix_8c38ade4((void *)(g_8c41cb64 + 0x300));
    call_8c3be280(0, (Frame *)((&frame)), (void *)(&(&frame)->f0c));
    njPopMatrixEx_8c38ad10();
    if (g_8c4d9ba0 != 0) {
        if (g_8c4d9ba0 == 1) {
            goto L_8c13da50;
        }
        if (g_8c4d9ba0 == 2) {
            goto L_8c13da98;
        }
        return;
    }
    o->f3d8 = 0;
    v1 = (int)0;
    v2 = (int)0;
    while (g_8c467874 > v2) {
        v3 = (S_vv3 *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2));
        if (v3 != 0) {
            v4 = (unsigned short)v3->f20;
            v36 = (unsigned short)0x1000;
            if (v36 > (unsigned int)(unsigned short)v4 && ((v3->f34 & 0x2000800)) == 0) {
                *(short *)((char *)((char *)o + 0x3dc) + (v1 << 3)) = v4;
                *(short *)((char *)((char *)o + 0x3de) + (v1 << 3)) = 1;
                v1 = (int)(v1 + 1);
            }
        }
        v2 = (int)(v2 + 1);
    }
    o->f3d8 = (int)(v1);
    v21 = (int)(void *)0x8c467240;
    if (v1 > 0) {
        TTecGiZonde_create_8c0b29c8((void *)o, (void *)(&(&frame)->f0c), (void *)(&o->f3d8), (void *)0x1d);
        return;
L_8c13da50:;
        v10 = (int)0x1000;
        v11 = (int)0x2000800;
        v12 = (int)0x324;
        v13 = (int)0;
        while (g_8c467874 > v13) {
            v14 = (S_vv14 *)*(S_g8c467240 **)((char *)0x8c467240 + (v13 << 2));
            if (v14 != 0 && (unsigned int)v14->f20 < (unsigned int)(unsigned short)v10 && ((v14->f34 & v11)) == 0) {
                create_effect_b0ffc((void *)o, (void *)(&(&frame)->f0c), (void *)((int)v14 + v12), (void *)0x1d);
            }
            v13 = (int)(v13 + 1);
        }
        return;
L_8c13da98:;
        v19 = (int)0x1000;
        v20 = (int)0x2000800;
        v21 = (int)0x324;
        v22 = (int)0;
        while (g_8c467874 > v22) {
            v23 = (S_vv23 *)*(S_g8c467240 **)((char *)0x8c467240 + (v22 << 2));
            if (v23 != 0 && (unsigned int)v23->f20 < (unsigned int)(unsigned short)v19 && ((v23->f34 & v20)) == 0) {
                TTecGiBarta_create_8c0b1af0((void *)o, (void *)(&(&frame)->f0c), (void *)((int)v23 + v21), (void *)0x1d);
            }
            v22 = (int)(v22 + 1);
        }
        v2 = (int)v22;
        v1 = (int)v20;
    }
}
