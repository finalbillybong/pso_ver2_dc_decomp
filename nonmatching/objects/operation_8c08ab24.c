/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08ab24
 * function: operation_8c08ab24
 * language: c
 * reference size: 984 bytes
 * compiled size: 988 bytes (+0.4%)
 * differing lines: 420 of 418 reference instruction lines
 * differing bytes: 474
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_340 Arg0_340;
typedef struct S_vv19 S_vv19;
typedef struct S_x31264 S_x31264;
typedef struct S_x31600 S_x31600;
typedef struct S_x32048 S_x32048;
typedef struct S_x68096 S_x68096;
typedef struct S_x78400 S_x78400;
typedef struct S_x79744 S_x79744;
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
    char unknown0[0x20];
    Block_p0_20 f20;
    Block_p0_2c f2c;
    float f38;
    int f3c;
    char unknown40[0x2a8];
    float f2e8;
    char unknown2ec[0x50];
    Arg0_33c *f33c;
    Arg0_340 *f340;
    char unknown344[0x4];
    int f348;
};
struct Arg0_33c {
    Vector3 f00;
};
struct Arg0_340 {
    Vector3 f00;
};
struct S_x31264 {
    float f00;
};
struct S_x31600 {
    float f00;
};
struct S_x32048 {
    float f00;
};
struct S_x68096 {
    float f00;
};
struct S_vv19 {
    float f00;
    float f04;
    float f08;
};
struct S_x78400 {
    float f00;
};
struct S_x79744 {
    float f00;
};
extern void vector_sub_in_place_8c37f6f0(void *, Arg0_33c *);
extern float njScalor_8c37e480(void *);
extern float call_8c12c714(float);
extern int rand(void);
extern void normalize_vector_checked(void *);
void operation_8c08ab24(Object *o)
{
    int v7;
    int v8;
    float v9;
    float v3;
    float v1;
    float v4;
    float v2;
    float v5;
    float v6;
    int v11;
    int v16;
    int v17;
    int v18;
    float v20;
    int v24;
    S_vv19 *v19;
    float v25;
    float v21;
    float v23;
    float v22;
    float v26;
    int v30;
    float v31;
    float v27;
    float v29;
    float v28;
    float v32;
    int v36;
    float v37;
    float v33;
    float v35;
    float v34;
    int v39;
    int v38;
    char *v41;
    int v40;
    float t1;
    float t2;
    float t3;
    float t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    *(Vector3 *)&o->f20 = *(Vector3 *)&o->f33c->f00;
    *(Vector3 *)&o->f2c = *(Vector3 *)&o->f340->f00;
    vector_sub_in_place_8c37f6f0((void *)(&o->f2c), (Arg0_33c *)(o->f33c));
    t1 = njScalor_8c37e480((void *)(&o->f2c));
    o->f38 = t1 / (float)o->f348;
    v1 = (float)o->f20.f00;
    v2 = (float)o->f20.f04;
    v3 = (float)o->f20.f08;
    v4 = (float)o->f2c.f00;
    v5 = (float)o->f2c.f04;
    v6 = (float)o->f2c.f08;
    o->f3c = 0;
    v11 = (int)0;
    goto L_8c08ac22;
    v7 = (int)0;
    do {
        v9 = (float)(o->f38 * (float)v7 / (float)(v8 + -1));
        ((S_x31264 *)((char *)(int *)((char *)o + 0x2a4) + (v7 << 2)))->f00 = v9;
        ((S_x31600 *)((char *)(int *)((char *)o + 0x40) + v7 * 0xc))->f00 = v4 * v9 + v1;
        ((S_x32048 *)((char *)(int *)((char *)o + 0x44) + v7 * 0xc))->f00 = v5 * v9 + v2;
        ((S_x68096 *)((char *)(int *)((char *)o + 0x48) + v7 * 0xc))->f00 = v6 * v9 + v3;
        v11 = (int)(v7 + 1);
L_8c08ac22:;
        v7 = (int)v11;
        v8 = (int)o->f348;
    } while (v8 > v11);
    o->f3c = (int)(o->f348);
    t2 = call_8c12c714(o->f2c.f00);
    t3 = call_8c12c714(o->f2c.f04);
    t4 = call_8c12c714(o->f2c.f08);
    if (t2 > t3) {
        if (t2 > t4) {
            v18 = (int)0;
            goto L_8c08ac72;
        }
        v17 = (int)2;
    } else {
        if (t3 > t4) {
            v16 = (int)1;
        } else {
            v16 = (int)2;
        }
        v17 = (int)v16;
    }
    v18 = (int)v17;
L_8c08ac72:;
    v19 = (S_vv19 *)((char *)o + 0x1d8);
    switch (v18) {
    case 0:
        v20 = (float)1.0f;
        v21 = (float)o->f2c.f04;
        v22 = (float)(v20 / o->f2c.f00);
        v23 = (float)o->f2c.f08;
        v24 = (int)0;
        while (o->f3c > v24) {
            t9 = rand();
            v25 = (float)(((float)t9 / 32768.0f - 0.5f) * 2.0f * 5.0f);
            t5 = rand();
            v19->f04 = v25;
            v19->f08 = ((float)t5 / 32768.0f - 0.5f) * 2.0f * 5.0f;
            v19->f00 = (v25 * v21 + ((float)t5 / 32768.0f - 0.5f) * 2.0f * 5.0f * v23) * v22;
            normalize_vector_checked((void *)v19);
            v19 = (S_vv19 *)((char *)v19 + 12);
            v24 = (int)(v24 + 1);
        }
        break;
    case 1:
        v26 = (float)1.0f;
        v27 = (float)o->f2c.f08;
        v28 = (float)(v26 / o->f2c.f04);
        v29 = (float)o->f2c.f00;
        v30 = (int)0;
        while (o->f3c > v30) {
            t10 = rand();
            v31 = (float)(((float)t10 / 32768.0f - 0.5f) * 2.0f * 5.0f);
            t6 = rand();
            v19->f08 = v31;
            v19->f00 = ((float)t6 / 32768.0f - 0.5f) * 2.0f * 5.0f;
            v19->f04 = (v31 * v27 + ((float)t6 / 32768.0f - 0.5f) * 2.0f * 5.0f * v29) * v28;
            normalize_vector_checked((void *)v19);
            v19 = (S_vv19 *)((char *)v19 + 12);
            v30 = (int)(v30 + 1);
        }
        break;
    case 2:
        v32 = (float)1.0f;
        v33 = (float)o->f2c.f00;
        v34 = (float)(v32 / o->f2c.f08);
        v35 = (float)o->f2c.f04;
        v36 = (int)0;
        while (o->f3c > v36) {
            t11 = rand();
            v37 = (float)(((float)t11 / 32768.0f - 0.5f) * 2.0f * 5.0f);
            t7 = rand();
            v19->f00 = v37;
            v19->f04 = ((float)t7 / 32768.0f - 0.5f) * 2.0f * 5.0f;
            v19->f08 = (v37 * v33 + ((float)t7 / 32768.0f - 0.5f) * 2.0f * 5.0f * v35) * v34;
            normalize_vector_checked((void *)v19);
            v19 = (S_vv19 *)((char *)v19 + 12);
            v36 = (int)(v36 + 1);
        }
    }
    v38 = (int)0x2e8;
    v39 = (int)1;
    v40 = (int)-1;
    goto L_8c08aea8;
    v41 = (char *)v39;
    do {
        t8 = rand();
        ((S_x78400 *)((int)o + v38 + ((int)(v41) << 2)))->f00 = ((float)t8 / 32768.0f - 0.5f) * 2.0f * 4.0f;
        v39 = (int)(v41 + 1);
L_8c08aea8:;
        v41 = (char *)v39;
    } while (((int)o->f3c + v40) > v39);
    o->f2e8 = 0.0f;
    ((S_x79744 *)((char *)(int *)((char *)o + 0x2e4) + (o->f3c << 2)))->f00 = 0.0f;
}
