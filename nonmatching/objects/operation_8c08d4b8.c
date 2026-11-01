/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08d4b8
 * function: operation_8c08d4b8
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 58 of 169 reference instruction lines
 * differing bytes: 200
 * provenance: generator draft (mode extern)
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
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c469da8 S_g8c469da8;
typedef struct S_g8c469da8_40 S_g8c469da8_40;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv13 S_vv13;
typedef struct S_vv27_40 S_vv27_40;
struct S_vv13 {
    short f00;
    char unknown2[0xa];
    short f0c;
    char unknowne[0x32];
    int f40;
};
struct Object {
    char unknown0[0x5c];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    int f00;
};
extern int g_8c44be04;
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
extern void operation_8c0bbab8(int, void *, int);
extern void operation_8c08da44(int, void *);
void operation_8c08d4b8(Object *o)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v5;
    int v10;
    int v11;
    int v14;
    S_vv13 *v13;
    int v12;
    int v27;
    int v26;
    int v24;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v10 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46ec58 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v5 = (int)(g_8c46ec50 + v2 * 0x44);
        v10 = (int)v5;
    }
    v11 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v13 = (S_vv13 *)v10;
    v14 = (int)0;
    v12 = (int)-1;
    while (v11 > v14) {
        if (v13->f00 != (short)v12 && v13->f0c == o->f5c->f00) {
            operation_8c0bbab8((int)o, g_8c44be8c, (int)(v13->f40));
            operation_8c0bbab8((int)o, g_8c44be98, (int)(v13->f40));
            operation_8c0bbab8((int)o, g_8c44be9c, (int)(v13->f40));
            operation_8c0bbab8((int)o, g_8c44bea0, (int)(v13->f40));
            operation_8c08da44((int)o, (void *)v13);
        }
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 68);
    }
    v14 = (int)0;
    v24 = (int)-1;
    while (0x100 > v14) {
        v26 = (int)(v14 * 0x44);
        v27 = (int)g_8c469da8;
        if (*(short *)((char *)((char *)v27 + 0x0) + (v26)) != (short)v24 && *(short *)((char *)((char *)v27 + 0xc) + (v26)) == o->f5c->f00) {
            operation_8c0bbab8((int)o, g_8c44be8c, (int)(*(S_vv27_40 **)((char *)((char *)v27 + 0x40) + (v26))));
            operation_8c0bbab8((int)o, g_8c44be98, (int)(*(S_g8c469da8_40 **)((char *)((char *)g_8c469da8 + 0x40) + (v26))));
            operation_8c0bbab8((int)o, g_8c44be9c, (int)(*(S_g8c469da8_40 **)((char *)((char *)g_8c469da8 + 0x40) + (v26))));
            operation_8c0bbab8((int)o, g_8c44bea0, (int)(*(S_g8c469da8_40 **)((char *)((char *)g_8c469da8 + 0x40) + (v26))));
            operation_8c08da44((int)o, (void *)((int)g_8c469da8 + v26));
        }
        v14 = (int)(v14 + 1);
    }
}
