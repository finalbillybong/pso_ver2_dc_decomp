/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cc9a0
 * function: operation_8c0cc9a0
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 72 of 204 reference instruction lines
 * differing bytes: 33
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Block316 {
    int words[79];
} Block316;
typedef struct Object Object;
typedef struct Arg0_1a10 Arg0_1a10;
typedef struct Arg0_1a14 Arg0_1a14;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Block316 f28;
    char unknown164[0x1950];
    Vector3 f1ab4;
    float f1ac0;
    float f1ac4;
    int f1ac8;
    int f1acc;
};
struct S_vv5 {
    int f00;
    float f04;
    char unknown8[0x4];
    float f0c;
};
struct S_vv8 {
    float f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct Arg0_20 {
    Vector3 f00;
};
struct Arg0_1a10 {
    Block316 f00;
};
extern void hs_8c0cc7fc(Arg0_20 *);
extern float squared_distance_xz(Arg0_20 *, void *);
extern float signed_sqrt_8c37f6c0(float);
extern float hs_8c12c714(float);
extern void hs_8c0cbf48(void *, Arg0_20 *, void *);
void operation_8c0cc9a0(Object *o)
{
    int v1;
    int v2;
    S_vv5 *v5;
    int v7;
    int v6;
    S_vv8 *v8;
    int v11;
    S_vv4 *v4;
    S_vv3 *v3;
    float v18;
    float v19;
    float t1;
    float t2;
    float t3;
    hs_8c0cc7fc(o->f20);
    v1 = (int)o->f1ac8;
    v2 = (int)((int)o->f1acc + v1 + -1);
    v3 = (S_vv3 *)&o->f1acc;
    v4 = (S_vv4 *)&o->f1ac8;
    while (v2 >= v1) {
        v5 = (S_vv5 *)*(Arg0_1a14 **)((char *)((char *)o + 0x1a14) + (v1 << 2));
        if (-42.0f > v5->f0c) {
            v5->f00 = 0;
            v11 = (int)0;
        } else {
            v6 = (int)((int)v5 + 0xc);
            v7 = (int)0;
            while (0xb > v7) {
                v8 = (S_vv8 *)v6;
                v8 = (S_vv8 *)((int)v8 + v7 * 0xc);
                v8->f00 += v5->f04;
                v7 = (int)(v7 + 1);
            }
            v5->f04 -= 0.008f;
            v11 = (int)1;
        }
        if (v11 == 0) {
            v4->f00 += 1;
            v3->f00 -= 1;
        }
        v1 = (int)(v1 + 1);
    }
    if (o->f1ac8 >= 0x14) {
        o->f1ac8 -= 0x14;
    }
    t1 = squared_distance_xz(o->f20, &o->f1ab4);
    t2 = signed_sqrt_8c37f6c0(t1);
    t3 = hs_8c12c714(t2);
    if (0.1f > t3) {
        v18 = (float)o->f1ac4;
        if (!(v18 > 0.0f)) {
            goto L_8c0cca9c;
        }
        o->f1ac4 = v18 - 0.5f;
    } else {
        v19 = (float)o->f1ac4;
        if (16.0f > v19) {
            o->f1ac4 = v19 + 0.5f;
        }
    }
L_8c0cca9c:;
    o->f1ac0 += t2;
    *(Vector3 *)&o->f1ab4 = *(Vector3 *)&o->f20->f00;
    if (o->f1ac0 > 20.0f) {
        o->f1ac0 = 0.0f;
        if (o->f1acc >= 0x14) {
            o->f1ac8 += 1;
            if (!(o->f1ac8 >= 0x14)) {
                goto L_8c0ccaec;
            }
            o->f1ac8 -= 0x14;
        } else {
            o->f1acc += 1;
        }
L_8c0ccaec:;
        *(Block316 *)&(*(Arg0_1a10 **)((char *)((char *)o + 0x1a10) + ((int)o->f1ac8 + (int)o->f1acc << 2)))->f00 = *(Block316 *)&o->f28;
    }
    hs_8c0cbf48(&o->f28, o->f20, o->f24);
}
