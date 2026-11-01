/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08d088
 * function: operation_8c08d088
 * language: c
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 106 of 168 reference instruction lines
 * differing bytes: 76
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
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct S_g8c469da8 S_g8c469da8;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
typedef struct S_vv17 S_vv17;
typedef struct S_vv19 S_vv19;
typedef struct S_vv24 S_vv24;
typedef struct S_vv9 S_vv9;
typedef struct Block_vv9_0 {
    short f00;
    char unknown2[0x42];
} Block_vv9_0;
typedef struct Block_vv17_0 {
    short f00;
    char unknown2[0x42];
} Block_vv17_0;
struct Object {
    char unknown0[0x44];
    int f44;
};
struct S_vv9 {
    Block_vv9_0 f00;
};
struct S_vv11 {
    Block68 f00;
};
struct S_vv17 {
    Block_vv17_0 f00;
};
struct S_vv19 {
    Block68 f00;
};
struct S_vv24 {
    char unknown0[0xc];
    short f0c;
};
extern int g_8c44be04;
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
extern char g_8c3002d8[];
extern void debug_error_stub_8c03ef80(void *, ...);
extern int operator_new_8c18de4c(int);
extern int call_8c0329d8(int);
extern void call_8c0bb9a4(Object *, void *, void *, int, int);
extern void operation_8c03cbd8(int, int, int, int);
extern void operator_delete_8c18de08(int);
void operation_8c08d088(Object *o)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v6;
    int v7;
    int v10;
    S_vv11 *v11;
    S_vv9 *v9;
    short v8;
    int v13;
    int v18;
    S_vv19 *v19;
    S_vv17 *v17;
    short v16;
    int v20;
    int v25;
    S_vv24 *v24;
    int t1;
    int t2;
    if (o->f44 == 0) {
        return;
    }
    if (o->f44 > 0x200) {
        debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x236)));
        return;
    }
    t1 = operator_new_8c18de4c(0x8800);
    if (t1 == 0) {
        debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x252)));
        return;
    }
    v11 = (S_vv11 *)t1;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v6 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46ec58 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v6 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v7 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v8 = (short)-1;
    v9 = (S_vv9 *)v6;
    v10 = (int)0;
    while (v7 > v10) {
        v13 = (int)v11;
        if (v9->f00.f00 != v8) {
            *(Block68 *)&v11->f00 = *(Block68 *)&v9->f00;
            v13 = (int)((int)v11 + 0x44);
        }
        v11 = (S_vv11 *)v13;
        v10 = (int)(v10 + 1);
        v9 = (S_vv9 *)((char *)v9 + 68);
    }
    v16 = (short)-1;
    v17 = (S_vv17 *)g_8c469da8;
    v18 = (int)0;
    v19 = (S_vv19 *)v11;
    while (0x100 > v18) {
        v20 = (int)v19;
        if (v17->f00.f00 != v16) {
            *(Block68 *)&v19->f00 = *(Block68 *)&v17->f00;
            v20 = (int)((int)v19 + 0x44);
        }
        v19 = (S_vv19 *)v20;
        v18 = (int)(v18 + 1);
        v17 = (S_vv17 *)((char *)v17 + 68);
    }
    v24 = (S_vv24 *)t1;
    v25 = (int)0;
    while (o->f44 > v25) {
        t2 = call_8c0329d8((int)(v24->f0c));
        if (t2 != 0) {
            call_8c0bb9a4(o, (void *)((int)v24 + 0x10), (void *)((int)v24 + 0x1c), t2, 1);
        }
        v25 = (int)(v25 + 1);
        v24 = (S_vv24 *)((char *)v24 + 68);
    }
    operation_8c03cbd8((int)o, (int)(g_8c3002d8 + 0x229), t1, (int)(o->f44 * 0x44));
    operator_delete_8c18de08(t1);
}
