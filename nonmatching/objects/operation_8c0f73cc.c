/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f73cc
 * function: operation_8c0f73cc
 * language: c
 * reference size: 1088 bytes
 * compiled size: 1120 bytes (+2.9%)
 * differing lines: 592 of 472 reference instruction lines
 * differing bytes: 1033
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +32 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
    float f34;
};
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
    int dispatch;
    float f1c;
    float f20;
    float f24;
    char unknown28[0x38];
    int f60;
    int f64;
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
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, unsigned int);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_header3_8c38b02e(unsigned int);
extern void sq_flush_8c38af12(void);
void operation_8c0f73cc(Object *o, Arg1 *a1)
{
    Frame frame;
    float v1;
    float v2;
    float v5;
    float v8;
    float v9;
    int v10;
    int v11;
    float v15;
    float v14;
    float v17;
    float v21;
    float v23;
    float v22;
    float v24;
    float v18;
    int v13;
    float v37;
    float v38;
    float v40;
    float v39;
    float v44;
    float v48;
    float v49;
    float v58;
    float v57;
    float v59;
    float v60;
    int t1;
    int t2;
    int t3;
    v1 = (float)(((float)a1->f30 - (o->f0c / a1->f18 + o->f10 / 21.0f) * 7.5f) * 17.0f);
    if (!(v1 > 0.0f)) {
        return;
    }
    if (o->f20 > 0.0f) {
        v2 = (float)o->f24;
        if (v2 > 0.0f) {
            goto L_8c0f7444;
        }
    }
    v8 = (float)0.0f;
    goto L_8c0f744e;
L_8c0f7444:;
    v5 = (float)(v2 * o->f14 / o->f20);
    v8 = (float)v5;
L_8c0f744e:;
    v9 = (float)o->f1c;
    if (!(v8 > v9)) {
        v10 = (int)o->f64;
        v13 = (int)v10;
        v14 = (float)v9;
        v15 = (float)v8;
    } else {
        v11 = (int)o->f60;
        v13 = (int)v11;
        v14 = (float)v8;
        v15 = (float)v9;
    }
    if (v15 > v1) {
        v15 = (float)v1;
    }
    if (v14 > v1) {
        v14 = (float)v1;
    }
    if (!(v14 > 0.0f) && ((o->tag & 0x10)) == 0) {
        return;
    }
    if (((o->tag & 4)) != 0) {
        (&frame)->f10 = 194.0f;
        (&frame)->f0c = 84.0f;
        v17 = (float)14.0f;
        (&frame)->f08 = 6.0f;
        v18 = (float)v17;
    } else {
        (&frame)->f10 = 176.0f;
        (&frame)->f0c = 84.0f;
        v18 = (float)14.0f;
        (&frame)->f08 = 9.0f;
    }
    v21 = (float)a1->f10;
    v22 = (float)(v21 + o->f0c);
    v23 = (float)(a1->f34 + o->f08 * 0.299f);
    (&frame)->f20 = a1->f14;
    (&frame)->f20 += o->f10;
    (&frame)->f1c = -1.0f / v23;
    sq_select_8c38aeb4(0);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, (unsigned int)(o->dispatch));
    if (!(v14 > 0.0f)) {
    } else {
        (&frame)->f24 = v22;
        (&frame)->f28 = (&frame)->f20;
        (&frame)->f00 = v22 + v15;
        (&frame)->f2c = v22 + v15;
        (&frame)->f30 = (&frame)->f20 + (&frame)->f08;
        (&frame)->f04 = (&frame)->f10 / 256.0f;
        v24 = (float)(&frame)->f10;
        (&frame)->f34 = (&frame)->f10 / 256.0f;
        v24 = (float)(v24 + v18);
        (&frame)->f38 = (&frame)->f0c / 256.0f;
        v24 = (float)(v24 / 256.0f);
        (&frame)->f3c = v24;
        (&frame)->f40 = (&frame)->f0c = ((&frame)->f0c + (&frame)->f08) / 256.0f;
        t1 = clip_and_scale_rectangle((void *)a1, (void *)(&(&frame)->f24));
        if (t1 != 0) {
            (&frame)->f18 = (&frame)->f2c;
            (&frame)->f14 = v18;
            (&frame)->f34 = (&frame)->f04;
            (&frame)->f18 -= (&frame)->f24;
            (&frame)->f3c = v24;
            goto L_8c0f767c;
            do {
                if ((&frame)->f18 < (&frame)->f14) {
                    (&frame)->f3c = ((&frame)->f10 + (&frame)->f14) / 256.0f;
                    (&frame)->f14 = (&frame)->f18;
                }
                (&frame)->f2c = (&frame)->f24 + (&frame)->f14;
                sq_quad_8c38b09e((void *)(&(&frame)->f24), (&frame)->f1c);
                (&frame)->f18 -= (&frame)->f14;
                (&frame)->f24 = (&frame)->f2c;
L_8c0f767c:;
            } while ((&frame)->f18 > 0.0f);
        }
        sq_header3_8c38b02e((unsigned int)v13);
        (&frame)->f24 = (&frame)->f00;
        (&frame)->f2c = v22 + v14;
        (&frame)->f3c = v24;
        t2 = clip_and_scale_rectangle((void *)a1, (void *)(&(&frame)->f24));
        if (t2 != 0) {
            v37 = (float)(&frame)->f2c;
            v38 = (float)(v37 - (&frame)->f24);
            (&frame)->f34 = (&frame)->f04;
            (&frame)->f3c = v24;
            v48 = (float)v38;
            v49 = (float)v18;
            goto L_8c0f7712;
            v39 = (float)v38;
            v40 = (float)v18;
            do {
                v44 = (float)v40;
                if (v40 > v39) {
                    (&frame)->f3c = ((&frame)->f10 + v40) / 256.0f;
                    v44 = (float)v39;
                }
                (&frame)->f2c = (&frame)->f24 + v44;
                sq_quad_8c38b09e((void *)(&(&frame)->f24), (&frame)->f1c);
                v37 = (float)(v39 - v44);
                (&frame)->f24 = (&frame)->f2c;
                v48 = (float)v37;
                v49 = (float)v44;
L_8c0f7712:;
                v39 = (float)v48;
                v40 = (float)v49;
            } while (v48 > 0.0f);
            v18 = (float)v40;
        }
    }
    if (((o->tag & 0x10)) != 0) {
        sq_header3_8c38b02e((unsigned int)-1);
        v57 = (float)-1.0f;
        v58 = (float)((&frame)->f20 - 1.0f);
        v59 = (float)((o->f08 - 0.1f) * 0.299f);
        (&frame)->f20 = v58;
        v60 = (float)(v57 / (a1->f34 + v59));
        (&frame)->f24 = v22 - 1.0f;
        (&frame)->f28 = v58;
        (&frame)->f2c = (&frame)->f24 + 102.0f;
        (&frame)->f30 = (&frame)->f28 + 11.0f;
        (&frame)->f34 = 0.0f;
        (&frame)->f38 = 0.35546875f;
        (&frame)->f3c = 0.3984375f;
        (&frame)->f40 = 0.3984375f;
        t3 = clip_and_scale_rectangle((void *)a1, (void *)(&(&frame)->f24));
        if (t3 != 0) {
            sq_quad_8c38b09e((void *)(&(&frame)->f24), v60);
        }
        v18 = (float)v60;
    }
    sq_flush_8c38af12();
}
