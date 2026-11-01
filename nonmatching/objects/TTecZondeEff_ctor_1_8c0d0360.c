/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d0360
 * function: TTecZondeEff_ctor_1_8c0d0360
 * language: c
 * reference size: 1064 bytes
 * compiled size: 1108 bytes (+4.1%)
 * differing lines: 448 of 441 reference instruction lines
 * differing bytes: 1024
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +44 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct S_vv23 S_vv23;
typedef struct S_vv37 S_vv37;
typedef struct S_vv51 S_vv51;
typedef struct S_x11936 S_x11936;
typedef struct S_x14320 S_x14320;
typedef struct S_x14768 S_x14768;
typedef struct S_x23056 S_x23056;
typedef struct S_x23952 S_x23952;
typedef struct S_x38864 S_x38864;
typedef struct Block_p0_20 {
    float f00;
    float f04;
    float f08;
} Block_p0_20;
typedef struct Block_p0_2c {
    float f00;
    float f04;
    float f08;
} Block_p0_2c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Block_p0_20 f20;
    Block_p0_2c f2c;
    float f38;
    int f3c;
    char unknown40[0x208];
    float f248;
    char unknown24c[0x30];
    float f27c;
    int f280;
    int f284;
    int f288;
    int f28c;
    int f290;
    int f294;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
struct S_x11936 {
    float f00;
};
struct S_x38864 {
    float f00;
};
struct S_x14320 {
    float f00;
};
struct S_x14768 {
    float f00;
};
struct S_vv23 {
    float f00;
    float f04;
    float f08;
};
struct S_vv37 {
    float f00;
    float f04;
    float f08;
};
struct S_vv51 {
    float f00;
    float f04;
    float f08;
};
struct S_x23056 {
    float f00;
};
struct S_x23952 {
    float f00;
};
extern int g_8c306e28;
extern void TObject_ctor_8c0330e4(void *, void *);
extern float call_8c12c714(float);
extern int rand(void);
extern void normalize_vector_checked(void *);
Object *TTecZondeEff_ctor_1_8c0d0360(Object *o, int a1, Arg2 *a2, Arg3 *a3, float f0)
{
    Object **home = &o;
    int v7;
    float v8;
    float v2;
    float v1;
    float v3;
    float v4;
    float v5;
    float v6;
    int v10;
    int v16;
    int v17;
    int v18;
    float v19;
    S_vv23 *v23;
    float v25;
    float v20;
    float v22;
    float v21;
    int v30;
    S_vv37 *v37;
    int v44;
    float v33;
    S_vv51 *v51;
    float v39;
    float v34;
    float v36;
    float v35;
    int v58;
    int v75;
    int v24;
    float v47;
    int v29;
    float v53;
    float v48;
    float v50;
    float v49;
    int v38;
    int v43;
    int v52;
    int v57;
    int v76;
    char *v78;
    int v77;
    float t1;
    float t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266f08;
    o->tag = (int)(g_8c306e28);
    o->size = 0x298;
    o->f27c = 1.0f;
    o->f28c = 0x8000000;
    o->f290 = 0x14;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f2c = *(Vector3 *)&a3->f00;
    o->f38 = f0;
    o->f288 = 0;
    o->f294 = 0;
    v1 = (float)o->f20.f00;
    v2 = (float)o->f20.f04;
    v3 = (float)o->f20.f08;
    v4 = (float)o->f2c.f00;
    v5 = (float)o->f2c.f04;
    v6 = (float)o->f2c.f08;
    o->f3c = 0;
    v10 = (int)0;
    goto L_8c0d0494;
    v7 = (int)0;
L_8c0d0448:;
    v8 = (float)(o->f38 * (float)v7 / 12.0f);
    ((S_x11936 *)((char *)(int *)((char *)o + 0x214) + (v7 << 2)))->f00 = v8;
    ((S_x38864 *)((char *)(int *)((char *)o + 0x40) + v7 * 0xc))->f00 = v4 * v8 + v1;
    ((S_x14320 *)((char *)(int *)((char *)o + 0x44) + v7 * 0xc))->f00 = v5 * v8 + v2;
    ((S_x14768 *)((char *)(int *)((char *)o + 0x48) + v7 * 0xc))->f00 = v6 * v8 + v3;
    v10 = (int)(v7 + 1);
L_8c0d0494:;
    v7 = (int)v10;
    if (0xd > v10) {
        goto L_8c0d0448;
    }
    o->f3c = 0xd;
    t1 = call_8c12c714(o->f2c.f00);
    t2 = call_8c12c714(o->f2c.f04);
    t3 = call_8c12c714(o->f2c.f08);
    if (t1 > t2) {
        if (t1 > t3) {
            v18 = (int)0;
            goto L_8c0d04de;
        }
        v17 = (int)2;
    } else {
        if (t2 > t3) {
            v16 = (int)1;
        } else {
            v16 = (int)2;
        }
        v17 = (int)v16;
    }
    v18 = (int)v17;
L_8c0d04de:;
    {
        Object *base = o;
        if (v18 != 0) {
            if (v18 == 1) {
                goto L_8c0d05a0;
            }
            if (v18 == 2) {
                goto L_8c0d0640;
            }
            v57 = (int)&o->f2c;
            v58 = (int)((char *)base + 0x178);
        } else {
            v19 = (float)1.0f;
            v20 = (float)base->f2c.f04;
            v21 = (float)(v19 / base->f2c.f00);
            v22 = (float)base->f2c.f08;
            v29 = (int)0;
            v30 = (int)((char *)base + 0x178);
            goto L_8c0d057a;
            v23 = (S_vv23 *)((char *)base + 0x178);
            v24 = (int)0;
L_8c0d0518:;
            t8 = rand();
            v25 = (float)(((float)t8 / 32768.0f - 0.5f) * 2.0f * 10.0f);
            t4 = rand();
            v23->f04 = v25;
            v23->f08 = ((float)t4 / 32768.0f - 0.5f) * 2.0f * 10.0f;
            v23->f00 = (v25 * v20 + ((float)t4 / 32768.0f - 0.5f) * 2.0f * 10.0f * v22) * v21;
            normalize_vector_checked((void *)v23);
            v29 = (int)(v24 + 1);
            v30 = (int)((int)v23 + 0xc);
L_8c0d057a:;
            if (o->f3c > v29) {
                v23 = (S_vv23 *)v30;
                v24 = (int)v29;
                goto L_8c0d0518;
            }
            goto L_8c0d06c2;
L_8c0d05a0:;
            v33 = (float)1.0f;
            v34 = (float)base->f2c.f08;
            v35 = (float)(v33 / base->f2c.f04);
            v36 = (float)base->f2c.f00;
            v43 = (int)0;
            v44 = (int)((char *)base + 0x178);
            goto L_8c0d061a;
            v37 = (S_vv37 *)((char *)base + 0x178);
            v38 = (int)0;
L_8c0d05b8:;
            t9 = rand();
            v39 = (float)(((float)t9 / 32768.0f - 0.5f) * 2.0f * 10.0f);
            t5 = rand();
            v37->f08 = v39;
            v37->f00 = ((float)t5 / 32768.0f - 0.5f) * 2.0f * 10.0f;
            v37->f04 = (v39 * v34 + ((float)t5 / 32768.0f - 0.5f) * 2.0f * 10.0f * v36) * v35;
            normalize_vector_checked((void *)v37);
            v43 = (int)(v38 + 1);
            v44 = (int)((int)v37 + 0xc);
L_8c0d061a:;
            if (o->f3c > v43) {
                v37 = (S_vv37 *)v44;
                v38 = (int)v43;
                goto L_8c0d05b8;
            }
            v29 = (int)v43;
            v30 = (int)v44;
            goto L_8c0d06c2;
L_8c0d0640:;
            v47 = (float)1.0f;
            v48 = (float)base->f2c.f00;
            v49 = (float)(v47 / base->f2c.f08);
            v50 = (float)base->f2c.f04;
            v57 = (int)0;
            v58 = (int)((char *)base + 0x178);
            goto L_8c0d06ba;
            v51 = (S_vv51 *)((char *)base + 0x178);
            v52 = (int)0;
L_8c0d0658:;
            t10 = rand();
            v53 = (float)(((float)t10 / 32768.0f - 0.5f) * 2.0f * 10.0f);
            t6 = rand();
            v51->f00 = v53;
            v51->f04 = ((float)t6 / 32768.0f - 0.5f) * 2.0f * 10.0f;
            v51->f08 = (v53 * v48 + ((float)t6 / 32768.0f - 0.5f) * 2.0f * 10.0f * v50) * v49;
            normalize_vector_checked((void *)v51);
            v57 = (int)(v52 + 1);
            v58 = (int)((int)v51 + 0xc);
L_8c0d06ba:;
            if (o->f3c > v57) {
                v51 = (S_vv51 *)v58;
                v52 = (int)v57;
                goto L_8c0d0658;
            }
        }
    }
    v29 = (int)v57;
    v30 = (int)v58;
L_8c0d06c2:;
    v75 = (int)0x248;
    v76 = (int)1;
    v77 = (int)-1;
    goto L_8c0d0718;
    v78 = (char *)v76;
L_8c0d06e8:;
    t7 = rand();
    ((S_x23056 *)((int)o + v75 + ((int)(v78) << 2)))->f00 = ((float)t7 / 32768.0f - 0.5f) * 2.0f * 8.0f;
    v76 = (int)(v78 + 1);
L_8c0d0718:;
    v78 = (char *)v76;
    if (((int)o->f3c + v77) > v76) {
        goto L_8c0d06e8;
    }
    o->f248 = 0.0f;
    ((S_x23952 *)((char *)(int *)((char *)o + 0x244) + (o->f3c << 2)))->f00 = 0.0f;
    o->f280 = 0;
    o->f284 = -0x1000000;
    return o;
}
