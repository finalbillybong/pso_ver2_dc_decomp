/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18ff6c
 * function: operation_8c18ff6c
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 62 of 101 reference instruction lines
 * differing bytes: 124
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c4dc294 S_g8c4dc294;
typedef struct S_g8c4dc294_8 S_g8c4dc294_8;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct S_g8c4dc294 {
    char unknown0[0x8];
    S_g8c4dc294_8 *f08;
};
struct S_vv1 {
    int f00;
    unsigned char f04;
};
struct S_vv3 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
};
struct Object {
    char unknown0[0x2];
    char f02;
};
extern int level_class_8c190148(int);
extern int call_8c18e768(int, int);
extern int rand(void);
void operation_8c18ff6c(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    S_vv3 *v3;
    unsigned char v5;
    int v4;
    int v6;
    int v7;
    float v12;
    int v8;
    int v9;
    int v10;
    int v11;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)(*(S_g8c4dc294 **)0x8c4dc294)->f08;
    t3 = level_class_8c190148((int)(*(S_g8c4dc5a4 **)0x8c4dc5a4));
    v2 = (int)*(int *)0x8c4dc5a4;
    v3 = (S_vv3 *)((t3 * v1->f04 + a1) * 3 + v1->f00);
    if (v2 > 0x63) {
        v2 = (int)0x63;
    }
    v5 = (unsigned char)v3->f00;
    switch (v5) {
    case 0:
        o->f02 = 0;
        return;
    case 1:
        t1 = call_8c18e768(v4, (int)(v3->f01));
        v6 = (int)(t1 + -1);
        if (!((char)(t1 + -1) >= 0)) {
            v6 = (int)0;
        }
        v7 = (int)v6;
        if ((char)v6 > 0xe) {
            v7 = (int)0xe;
        }
        o->f02 = v7;
        return;
    case 2:
        t2 = rand();
        v8 = (int)(v3->f01 + -1);
        v12 = (float)((float)v3->f02 * ((float)t2 / 32768.0f));
        v9 = (int)(int)v12;
        if (v8 > (char)(int)v12) {
            v9 = (int)v8;
        }
        v10 = (int)v9;
        if (!((char)v9 >= 0)) {
            v10 = (int)0;
        }
        v11 = (int)v10;
        if ((char)v10 > 0xe) {
            v11 = (int)0xe;
        }
        o->f02 = v11;
    }
}
