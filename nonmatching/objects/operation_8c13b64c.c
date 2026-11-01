/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13b64c
 * function: operation_8c13b64c
 * language: c
 * reference size: 648 bytes
 * compiled size: 648 bytes (+0.0%)
 * differing lines: 24 of 239 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c4d9c0c S_g8c4d9c0c;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    int f60;
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    float f3a8;
    Arg0_3ac *f3ac;
    int f3b0;
    int f3b4;
    char unknown3b8[0x20];
    int f3d8;
    int f3dc;
    char unknown3e0[0xc];
    int f3ec;
};
struct S_g8c4d9c0c {
    char unknown0[0x18];
    int f18;
};
extern int g_8c4d9b70;
extern S_g8c4d9c0c *g_8c4d9c0c;
extern void operation_8c01c5f0(Object *);
extern int call_8c18e8a0(int, int);
extern float njCos_8c38c154(int);
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern int call_8c18e768(int, int);
extern int operation_8c13ba90(void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c13b64c(Object *o)
{
    int v8;
    int v6;
    int t1;
    float t2;
    float t3;
    int t4;
    int t5;
    int a;
    int mask;
    int off;
    if (o->f398 == -1) {
    } else {
        switch (o->f398) {
        case 0:
            o->f3a4 |= 0x10000;
            o->ff0 = 0;
            o->f60 = 0;
            o->f398 = 1;
            break;
        case 1:
            operation_8c01c5f0(o);
            *(int *)((char *)o + 0x3ac) -= g_8c4d9c0c->f18;
            *(int *)((char *)o + 0x3b0) -= g_8c4d9c0c->f18;
            mask = 0xffff;
            a = call_8c18e8a0((int)o->f3ac & mask, 0x2aaa) + -0x1555;
            if (((o->f3a4 & 0x20000)) != 0) {
                t2 = njCos_8c38c154(a);
                o->f3a8 = 134.0f / t2;
                o->f40 = 50.0f;
            } else {
                t3 = njCos_8c38c154(a);
                o->f3a8 = 128.0f / t3;
                o->f40 = 15.0f;
            }
            njPushMatrixEx_8c38ae68();
            o->f3c = o->f3a8;
            o->f44 = 0.0f;
            njUnitMatrix_8c37b5c4(0);
            njRotateY_8c37df90(0, (void *)(o->f3ac));
            call_8c3be38c(0, (void *)(&o->f3c), (void *)(&o->f3c));
            njPopMatrixEx_8c38ad10();
            off = 0x3b4;
            t4 = call_8c18e768((int)((unsigned short)o->f3ac), 0x2aaa);
            *(int *)((char *)o + off) = (int)((float)(t4 * 0x3c + 0x78) * 65536.0f / 360.0f);
            o->f64 = *(int *)((char *)o + off) + -0x4000;
            v6 = (int)o->f3dc;
            if (v6 > 1) {
                if (!(-0x238e >= o->f3b0)) {
                    goto L_8c13b7fa;
                }
                o->f3dc = v6 + -1;
                if (!(--*(int *)((char *)o + 0x3d8) >= 0)) {
                    o->f3d8 = 5;
                }
                t5 = operation_8c13ba90((void *)o);
                if (t5 != 1) {
                    goto L_8c13b80c;
                }
                o->f398 = 0;
            } else {
                if (-0x1555 > o->f3b0) {
                    o->f3ec = (int)(o->f3ac);
                    if (((o->f3a4 & 1)) == 0) {
                        v8 = (int)o->f30a;
                        if (v8 != 9) {
                            o->f39c = (int)(v8);
                            o->f390 = 9;
                        }
                    }
                }
L_8c13b7fa:;
                call_8c05fd7c(0x30005, o, (void *)(&o->f3c), 0, 0);
            }
        }
    }
L_8c13b80c:;
    if (g_8c4d9b70 >= 0) {
        minimap_add_marker_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
    }
}
