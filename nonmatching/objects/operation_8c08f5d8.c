/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08f5d8
 * function: operation_8c08f5d8
 * language: c
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 98 of 168 reference instruction lines
 * differing bytes: 92
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
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv11 S_vv11;
typedef struct S_vv13 S_vv13;
typedef struct S_vv23 S_vv23;
typedef struct S_vv23_0 S_vv23_0;
typedef struct S_vv24 S_vv24;
typedef struct S_vv26 S_vv26;
typedef struct Block_vv11_0 {
    short f00;
    char unknown2[0xa];
    short f0c;
    char unknowne[0x3a];
} Block_vv11_0;
typedef struct Block_vv24_0 {
    short f00;
    char unknown2[0xa];
    short f0c;
    char unknowne[0x3a];
} Block_vv24_0;
struct Object {
    char unknown0[0x48];
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
};
struct S_vv11 {
    Block_vv11_0 f00;
};
struct S_vv10 {
    S_vv10_0 *f00;
};
struct S_vv10_0 {
    int f00;
};
struct S_vv13 {
    Block72 f00;
};
struct S_vv24 {
    Block_vv24_0 f00;
};
struct S_vv23 {
    S_vv23_0 *f00;
};
struct S_vv23_0 {
    int f00;
};
struct S_vv26 {
    Block72 f00;
};
extern int g_8c44be04;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
extern char g_8c300638[];
extern int operator_new_8c18de4c(int);
extern void debug_error_stub_8c03ef80(void *, ...);
extern void call_8c0bb9a4(Object *, int, int, void *, int);
extern void operation_8c03cbd8(int, int, int, int);
extern void operator_delete_8c18de08(int);
void operation_8c08f5d8(Object *o)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v7;
    int v8;
    int v12;
    S_vv13 *v13;
    S_vv11 *v11;
    short v9;
    S_vv10 *v10;
    int v15;
    int v20;
    int v21;
    int v25;
    S_vv26 *v26;
    S_vv24 *v24;
    short v22;
    S_vv23 *v23;
    int v28;
    int v31;
    int v33;
    int v32;
    int t1;
    if (!(o->f48 > 0)) {
        return;
    }
    t1 = operator_new_8c18de4c((int)(o->f48 * 0x48));
    if (t1 == 0) {
        debug_error_stub_8c03ef80((void *)((g_8c300638 + 0x253)));
        return;
    }
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v7 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46eca0 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v7 = (int)(g_8c46ec54 + v2 * 0x48);
    }
    v8 = (int)*(int *)((char *)0x8c46eca0 + (v1 << 2));
    v9 = (short)-1;
    v10 = (S_vv10 *)&o->f5c;
    v11 = (S_vv11 *)v7;
    v12 = (int)0;
    v13 = (S_vv13 *)t1;
    while (v8 > v12) {
        v20 = (int)v13;
        if (v11->f00.f00 != v9) {
            v15 = (int)v13;
            if (v11->f00.f0c == v10->f00->f00) {
                *(Block72 *)&v13->f00 = *(Block72 *)&v11->f00;
                v15 = (int)((int)v13 + 0x48);
            }
            v20 = (int)v15;
        }
        v13 = (S_vv13 *)v20;
        v12 = (int)(v12 + 1);
        v11 = (S_vv11 *)((char *)v11 + 72);
    }
    v23 = (S_vv23 *)&o->f5c;
    v24 = (S_vv24 *)g_8c469dc8;
    v25 = (int)0;
    v26 = (S_vv26 *)v13;
    v22 = (short)-1;
    v21 = (int)0x80;
    while (v21 > v25) {
        v31 = (int)v26;
        if (v24->f00.f00 != v22) {
            v28 = (int)v26;
            if (v24->f00.f0c == v23->f00->f00) {
                *(Block72 *)&v26->f00 = *(Block72 *)&v24->f00;
                v28 = (int)((int)v26 + 0x48);
            }
            v31 = (int)v28;
        }
        v26 = (S_vv26 *)v31;
        v25 = (int)(v25 + 1);
        v24 = (S_vv24 *)((char *)v24 + 72);
    }
    v32 = (int)t1;
    v33 = (int)0;
    while (o->f48 > v33) {
        call_8c0bb9a4(o, (int)(v32 + 0x14), (int)(v32 + 0x20), (void *)(o->f5c), 1);
        v33 = (int)(v33 + 1);
        v32 = (int)(v32 + 0x48);
    }
    operation_8c03cbd8((int)o, (int)(g_8c300638 + 0x274), t1, (int)(o->f48 * 0x48));
    operator_delete_8c18de08(t1);
}
