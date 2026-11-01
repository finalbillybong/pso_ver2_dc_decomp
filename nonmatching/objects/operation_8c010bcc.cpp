/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c010bcc
 * function: operation_8c010bcc
 * language: c++
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 54 of 210 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c2e2178 S_g8c2e2178;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x28];
    short f28;
    char f2a;
    char unknown2b[0x5];
    int f30;
    char unknown34[0xa28];
    int fa5c;
} ObjectData;
struct Frame {
    short f00;
    char unknown2[0x2];
    void *f04;
    char unknown8[0x1];
    char f09;
    char unknowna[0x2];
    short f0c;
    char unknowne[0x2];
    int f10;
};
extern int g_8c4621a8;
extern "C" void call_8c037eb8(void *, int, int);
extern "C" int operation_8c036544(void);
extern "C" int call_8c3ca534(int, int, int);
extern "C" void call_8c2280f0(void);
extern "C" void wait_vsync_and_flip_8c380516(void);
extern "C" void operation_8c010dac();
extern "C" int operation_8c010bcc(Object *o, int a1, int a2)
{
    Frame frame;
    short v1;
    int v33;
    int v7;
    int v8;
    int v9;
    int v10;
    int v18;
    int v12;
    int v26;
    int v11;
    char *v31;
    short v17;
    int t1;
    int t2;
    int t3;
    v1 = (short)-1;
    if (((ObjectData *)o)->f28 == v1) {
    } else {
        if (((ObjectData *)o)->fa5c != 0) {
            call_8c037eb8((void *)(((char *)o + 0x88c)), a1, a2);
        }
        v26 = (int)0;
        (&frame)->f00 = ((ObjectData *)o)->f28;
        (&frame)->f04 = (void *)operation_8c010dac;
        (&frame)->f09 = 1;
        v7 = (int)0x874;
        (&frame)->f0c = a2;
        (&frame)->f10 = a1;
        v8 = (int)0x884;
        v9 = (int)0x4117;
        v10 = (int)0x4b0;
        v11 = (int)-1;
        goto L_8c010cd8;
        v12 = (int)0;
L_8c010c2e:;
        if (((ObjectData *)o)->f2a == 0) {
            t1 = operation_8c036544();
            if (t1 != 0) {
                goto L_8c010c48;
            }
        }
        return -6;
L_8c010c48:;
        v17 = (short)((ObjectData *)o)->f28;
        if ((short)v17 != (short)v11) {
            *(short *)((char *)((char *)o + 0x0) + (v7)) = v17;
            g_8c4621a8 = 1;
            t3 = call_8c3ca534(v9, (int)((int)o + v7), (int)((int)o + v8));
            g_8c4621a8 = 0;
            v18 = (int)t3;
        } else {
            v18 = (int)0;
        }
        if ((short)v18 != 0) {
            o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-(short)v18 & 0xf) << 2)));
            ((ObjectData *)o)->f2a |= 1;
            return 1;
        }
        if (v12 > v10) {
            ((ObjectData *)o)->f2a |= 1;
            o->v6();
            return -6;
        }
        call_8c2280f0();
        wait_vsync_and_flip_8c380516();
        v26 = (int)(v12 + 1);
L_8c010cd8:;
        v12 = (int)v26;
        v31 = (char *)((ObjectData *)o)->f30;
        if (v31 != 0) {
            goto L_8c010c2e;
        }
        ((ObjectData *)o)->f30 = 1;
        g_8c4621a8 = 1;
        t2 = call_8c3ca534(0x4118, (int)(&frame), 0);
        g_8c4621a8 = 0;
        if ((short)t2 != -0xc) {
            if ((short)t2 == -1) {
                goto L_8c010d56;
            }
            if ((short)t2 == 0) {
                goto L_8c010d56;
            }
            v33 = (int)(short)t2;
        } else {
            o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-(short)t2 & 0xf) << 2)));
            goto L_8c010d56;
            v33 = (int)/* ? clobbered */ 0;
        }
        ((ObjectData *)o)->f2a |= 1;
        o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-v33 & 0xf) << 2)));
        o->v6();
L_8c010d56:;
        return (int)(t2);
    }
    return -0xa;
}
