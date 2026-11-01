/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0eda24
 * function: TObjLight_update_8c0eda24
 * language: c
 * reference size: 1448 bytes
 * compiled size: 1448 bytes (+0.0%)
 * differing lines: 394 of 533 reference instruction lines
 * differing bytes: 372
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_a0 Arg0_a0;
typedef struct S_vv29 S_vv29;
typedef struct S_x18000 S_x18000;
typedef struct S_x21472 S_x21472;
typedef struct Block_p0_dc {
    float f00;
    float f04;
    float f08;
} Block_p0_dc;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    short f2c;
    char unknown2e[0x3e];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    Arg0_8c *f8c;
    int f90;
    char unknown94[0x4];
    int f98;
    float f9c;
    Arg0_a0 *fa0;
    int fa4;
    int fa8;
    float fac;
    char unknownb0[0x4];
    float fb4;
    float fb8;
    float fbc;
    char unknownc0[0x4];
    float fc4;
    float fc8;
    float fcc;
    float fd0;
    float fd4;
    float fd8;
    Block_p0_dc fdc;
    float fe8;
    float fec;
    float ff0;
    char unknownf4[0x4];
    float ff8;
    float ffc;
};
struct Frame {
    Vector3 f00;
};
struct S_vv29 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
};
struct S_x18000 {
    float f00;
};
struct S_x21472 {
    float f00;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
};
extern Vector3 g_8c308dcc;
extern int g_8c467874;
extern int g_8c467878;
extern int g_8c46ee80;
extern char g_8c418280[];
extern float squared_distance_xyz(void *, void *);
extern float njSin_8c37eb0c(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateZ_8c37e02c(int, int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, void *);
extern void njPopMatrix_8c38accc(int);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float squared_distance_xz(void *, void *);
extern void call_8c01399c(int, Object *);
extern S_c8c021ef8 *lookup_low_id(int);
extern int get_current_area_8c032b10(void);
static inline float lerp_f(float a, float b, float t)
{
    return (b - a) * t + a;
}
void TObjLight_update_8c0eda24(Object *o)
{
    Frame frame;
    float v1;
    float v5;
    int v10;
    int v27;
    char *v28;
    S_vv29 *v29;
    float v64;
    float v30;
    float v31;
    float v32;
    int v26;
    int v43;
    int v48;
    char *v49;
    float v65;
    float v50;
    float v51;
    float v52;
    int v47;
    float t2;
    float t3;
    float t4;
    S_c8c021ef8 *t5;
    float t6;
    int t7;
    if (squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(g_8c46ee80 + 0x90)) > 160000.0f) {
        o->f04 |= 1;
        return;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c308dcc;
    *(Vector3 *)&o->fdc = *(Vector3 *)&*(Vector3 *)(g_8c418280 + 0xc);
    o->fa4 = 0;
    v1 = (float)o->f6c;
    if (!(10000.0f > v1)) {
        o->fb4 = v1 - 10000.0f;
        o->fa4 |= 1;
    } else {
        o->fb4 = v1;
    }
    v5 = (float)o->f70;
    if (!(10000.0f > v5)) {
        o->fb8 = v5 - 10000.0f;
        o->fa4 |= 2;
    } else {
        o->fb8 = v5;
    }
    o->fbc = o->f74;
    o->f9c = (float)(short)((unsigned int)o->f88 >> 0x10) * 5.0f;
    o->fa8 = (unsigned short)o->f88;
    o->fac = (float)(short)((unsigned int)(int)(o->f8c) >> 0x10) * 0.1f + 1.0f;
    v10 = (int)o->fa4;
    if (((v10 & 1)) != 0) {
        o->f90 += o->fa8;
        o->f98 = 0;
    } else {
        if (((v10 & 2)) != 0) {
            o->fa0 = (Arg0_a0 *)((int)o->fa0 + o->fa8);
            t2 = njSin_8c37eb0c((void *)(o->fa0));
            o->f98 = (int)(t2 * 70.0f);
        }
    }
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateZ_8c37e02c(0, (int)((int)o->f90 + (int)((float)o->f98 * 65536.0f / 360.0f)));
    njRotateY_8c37df90(0, (void *)(o->f8c));
    call_8c3be280(0, (Frame *)((&frame)), (void *)(&o->fd0));
    njPopMatrix_8c38accc(1);
    t3 = njScalor_8c37e480((void *)(&o->fd0));
    if (t3 != 0.0f) {
        njUnitVector_8c37b630((void *)(&o->fd0));
    }
    if (o->f9c == 0.0f) {
        return;
    }
    v26 = (int)0x100;
    v27 = (int)g_8c467874;
    v43 = (int)v27;
    goto L_8c0eddd2;
    v28 = (char *)v27;
    do {
        v29 = (S_vv29 *)*(S_g8c467240 **)((char *)0x8c467240 + ((int)(v28) << 2));
        if (v29 == 0) {
        } else {
            if (o->f2c == v29->f2c) {
                t4 = squared_distance_xz((void *)((int)v29 + 0x3c), (void *)(((char *)o + 0x3c)));
                v64 = (float)o->f9c;
                v30 = (float)(v64 * v64);
                if (!(t4 > v30)) {
                    v31 = (float)((1.0f - t4 / v30) * o->fac);
                    v32 = (float)v31;
                    if (v31 > 1.0f) {
                        v32 = (float)1.0f;
                    }
                    o->ff8 = lerp_f(o->fc4, o->fb4, v32);
                    o->ffc = lerp_f(o->fc8, o->fb8, v32);
                    ((S_x18000 *)((int)o + v26))->f00 = lerp_f(o->fcc, o->fbc, v32);
                    o->fe8 = lerp_f(o->fdc.f00, o->fd0, v32);
                    o->fec = lerp_f(o->fdc.f04, o->fd4, v32);
                    o->ff0 = lerp_f(o->fdc.f08, o->fd8, v32);
                    call_8c01399c((int)(v29->f20), o);
                }
            }
        }
        v43 = (int)(v28 + 1);
L_8c0eddd2:;
        v28 = (char *)v43;
    } while ((g_8c467874 + g_8c467878) > v43);
    v47 = (int)0x100;
    v48 = (int)0;
    goto L_8c0edf56;
    v49 = (char *)v48;
    do {
        t5 = lookup_low_id((int)(v49));
        if (t5 != 0) {
            t6 = squared_distance_xz((void *)(((char *)t5 + 0x3c)), (void *)(((char *)o + 0x3c)));
            v65 = (float)o->f9c;
            v50 = (float)(v65 * v65);
            if (!(t6 > v50)) {
                v51 = (float)((1.0f - t6 / v50) * o->fac);
                v52 = (float)v51;
                if (v51 > 1.0f) {
                    v52 = (float)1.0f;
                }
                o->ff8 = lerp_f(o->fc4, o->fb4, v52);
                o->ffc = lerp_f(o->fc8, o->fb8, v52);
                ((S_x21472 *)((int)o + v47))->f00 = lerp_f(o->fcc, o->fbc, v52);
                o->fe8 = lerp_f(o->fdc.f00, o->fd0, v52);
                o->fec = lerp_f(o->fdc.f04, o->fd4, v52);
                o->ff0 = lerp_f(o->fdc.f08, o->fd8, v52);
                t7 = get_current_area_8c032b10();
                if (t7 != 0xf) {
                    call_8c01399c((int)(t5->f20), o);
                }
            }
        }
        v48 = (int)(v49 + 1);
L_8c0edf56:;
        v49 = (char *)v48;
    } while (4 > v48);
}
