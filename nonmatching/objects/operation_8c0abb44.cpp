/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0abb44
 * function: operation_8c0abb44
 * language: c++
 * reference size: 800 bytes
 * compiled size: 800 bytes (+0.0%)
 * differing lines: 312 of 370 reference instruction lines
 * differing bytes: 154
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
typedef struct S_c0 S_c0;
typedef struct Frame Frame;
typedef struct S_g8c466e20 S_g8c466e20;
typedef struct S_g8c466e20_2c S_g8c466e20_2c;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv2 S_vv2;
class S_c8c053d84;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    unsigned short f20;
    char unknown22[0x2];
    Arg0_24 *f24;
    unsigned short f28;
    short f2a;
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
    char unknown60[0x4];
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    char unknown7c[0x8];
    int f84;
    char f88;
};
struct Arg0_24 {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x20];
    float f50;
    char unknown54[0x34];
    unsigned char f88;
};
struct Frame {
    char f00;
    char f01;
    char f02;
    char f03;
    float f04;
    float f08;
    float f0c;
};
struct S_vv2 {
    char unknown0[0x58];
    float f58;
    float f5c;
    char unknown60[0xc];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x4];
    float f7c;
    float f80;
    float f84;
};
struct S_g8c466e20 {
    char unknown0[0x2c];
    S_g8c466e20_2c *f2c;
};
struct S_g8c466e20_2c {
    int f00;
    char unknown4[0x8];
    int f0c;
};
struct S_c0 {
    float f00;
    float f04;
    float f08;
};
class S_c8c053d84 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual int v10();
};
typedef struct S_c8c053d84Data {

} S_c8c053d84Data;
extern "C" void step_vector_toward(void *, void *, void *, float);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void finish_spawn_motion(void *);
extern "C" void operation_8c0abb44(Object *o)
{
    Frame frame;
    S_vv2 *v2;
    float v1;
    float v3;
    float v10;
    float v5;
    float v11;
    float v12;
    float v15;
    float v16;
    float v20;
    float v21;
    float v13;
    float v19;
    float v25;
    float v26;
    float v27;
    float v30;
    float v31;
    float v35;
    float v36;
    float v28;
    float v34;
    float v39;
    int v45;
    S_c8c053d84 *t1;
    S_c0 *t2;
    o->f5c *= o->f24->f50;
    step_vector_toward((void *)(&o->f64), (void *)(&o->f34), (void *)(&(&frame)->f04), o->f5c);
    o->f40 = (&frame)->f04 - o->f64;
    o->f44 = (&frame)->f08 - o->f68;
    o->f48 = (&frame)->f0c - o->f6c;
    call_8c3bdf60((void *)(&o->f64), (void *)(&o->f40));
    o->f2c *= o->f24->f2c;
    o->f30 *= o->f24->f2c;
    o->f4c += o->f50;
    v1 = (float)o->f4c;
    v2 = (S_vv2 *)o->f24;
    v5 = (float)1.0f;
    v10 = (float)1.0f;
    if (v2->f58 > v1) {
        v5 = (float)(v1 * o->f54);
    }
    if ((1.0f - v1) < v2->f5c) {
        v10 = (float)((1.0f - v1) * o->f58);
    }
    v5 = (float)((v10 > v5) ? v5 : v10);
    if ((((*(S_g8c466e20 **)((char *)0x8c466e20 + (o->f20 << 2)))->f2c->f00 & 1)) != 0) {
        v11 = (float)(v2->f6c * v1 + v2->f7c);
        if (0.0f > v11) {
            v13 = (float)0.0f;
        } else {
            if (1.0f > v11) {
                v12 = (float)v11;
            } else {
                v12 = (float)1.0f;
            }
            v13 = (float)(v5 * v12);
        }
        v15 = (float)(v2->f70 * v1 + v2->f80);
        if (0.0f > v15) {
            v19 = (float)0.0f;
        } else {
            if (1.0f > v15) {
                v16 = (float)v15;
            } else {
                v16 = (float)1.0f;
            }
            v19 = (float)(v5 * v16);
        }
        v20 = (float)(v2->f74 * v1 + v2->f84);
        if (0.0f > v20) {
            v25 = (float)0.0f;
        } else {
            if (1.0f > v20) {
                v21 = (float)v20;
            } else {
                v21 = (float)1.0f;
            }
            v25 = (float)(v5 * v21);
        }
        v5 = (float)1.0f;
        v28 = (float)v13;
        v34 = (float)v19;
        v39 = (float)v25;
    } else {
        v26 = (float)(v2->f6c * v1 + v2->f7c);
        if (0.0f > v26) {
            v28 = (float)0.0f;
        } else {
            if (1.0f > v26) {
                v27 = (float)v26;
            } else {
                v27 = (float)1.0f;
            }
            v28 = (float)v27;
        }
        v30 = (float)(v2->f70 * v1 + v2->f80);
        if (0.0f > v30) {
            v34 = (float)0.0f;
        } else {
            if (1.0f > v30) {
                v31 = (float)v30;
            } else {
                v31 = (float)1.0f;
            }
            v34 = (float)v31;
        }
        v35 = (float)(v2->f74 * v1 + v2->f84);
        if (0.0f > v35) {
            v39 = (float)0.0f;
        } else {
            if (1.0f > v35) {
                v36 = (float)v35;
            } else {
                v36 = (float)1.0f;
            }
            v39 = (float)v36;
        }
    }
    (&frame)->f03 = (int)(v5 * 254.0f);
    (&frame)->f02 = (int)(v28 * 254.0f);
    (&frame)->f01 = (int)(v34 * 254.0f);
    (&frame)->f00 = (int)(v39 * 254.0f);
    o->f84 = (int)(*(int *)&(&frame)->f00);
    v45 = (int)(*(S_g8c466e20 **)((char *)0x8c466e20 + (o->f20 << 2)))->f2c->f0c;
    if (((o->f24->f88 & 0x10)) != 0) {
        o->f88 = (int)(o->f4c * (float)(v45 + -1));
    } else {
        o->f88 += 1;
        if (o->f88 >= v45) {
            o->f88 = 0;
        }
    }
    if (((o->f28 & 0x10)) != 0) {
        t1 = lookup_object_by_id((unsigned short)(o->f2a));
        if (t1 == 0) {
            o->f04 |= 1;
            return;
        }
        t2 = (S_c0 *)t1->v10();
        o->f70 = t2->f00 - o->f34;
        o->f74 = t2->f04 - o->f38;
        o->f78 = t2->f08 - o->f3c;
    }
    finish_spawn_motion((void *)o);
}
