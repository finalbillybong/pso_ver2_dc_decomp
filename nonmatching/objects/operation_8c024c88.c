/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c024c88
 * function: operation_8c024c88
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 8 of 111 reference instruction lines
 * differing bytes: 5
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
typedef struct S_c8c1a71fc S_c8c1a71fc;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_184 Arg0_184;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x228];
    int f3b0;
};
struct Arg0_184 {
    char unknown0[0x18];
    int f18;
};
struct S_c8c1a71fc {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    char unknown6[0x2];
    int f08;
};
struct Arg0_0 {
    char unknown0[0x18];
    int f18;
    int f1c;
};
extern char operation_8c02c320(void *);
extern S_c8c1a71fc *operation_8c1a71fc(int, int);
extern void operation_8c0255fc(void *, int);
extern void operation_8c025694(void *, int);
extern void operation_8c0256fc(void *, int);
extern void operation_8c025660(void *, int);
extern void operation_8c02562c(void *, int);
extern void operation_8c0256c8(void *, int);
int operation_8c024c88(Object *o)
{
    S_vv1 *v1;
    int v3;
    S_c8c1a71fc *t2;
    int v14;
    int t1;
    int v9;
    int v12;
    v1 = (S_vv1 *)(void *)0x8c004000;
    v14 = 0x1000;
    for (v3 = 0; (unsigned int)v14 > (unsigned int)(short)v3; v3++) {
        if ((v1++)->f00 != 0) {
            o->f3b0 |= 1;
            break;
        }
    }
    t1 = operation_8c02c320((void *)o);
    v9 = o->f184->f18;
    if (!(v9 >= 0)) {
        v9 = 0;
    } else if (v9 > 0xc7) {
        v9 = 0xc7;
    }
    v12 = 0x184;
    v9++;
    for (v14 = 0; 0xc7 > v14; v14++, v9++) {
        if (v9 > 0xc7) {
            break;
        }
        t2 = operation_8c1a71fc(t1, v9);
        if (t2 == 0) {
            break;
        }
        if (t2->f08 > (*(Arg0_0 **)((char *)o + v12))->f1c) {
            break;
        }
        operation_8c0255fc((void *)o, (int)(t2->f00));
        operation_8c025694((void *)o, (int)(t2->f01));
        operation_8c0256fc((void *)o, (int)(t2->f02));
        operation_8c025660((void *)o, (int)(t2->f03));
        operation_8c02562c((void *)o, (int)(t2->f04));
        operation_8c0256c8((void *)o, (int)(t2->f05));
        (*(Arg0_0 **)((char *)o + v12))->f18 = v9;
    }
    return 1;
}
