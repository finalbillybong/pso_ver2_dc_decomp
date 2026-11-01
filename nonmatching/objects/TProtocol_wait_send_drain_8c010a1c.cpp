/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c010a1c
 * function: TProtocol_wait_send_drain_8c010a1c
 * language: c++
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 22 of 125 reference instruction lines
 * differing bytes: 32
 * provenance: generator draft (mode bgotoext)
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
};
typedef struct ObjectData {
    char unknown0[0x28];
    short f28;
    char f2a;
} ObjectData;
extern int g_8c4621a8;
extern "C" int call_8c3ca534(int, int, void *);
extern "C" int operation_8c036544(void);
extern "C" void time_hierarchy_visit(void *);
extern "C" void hierarchy_output_cycle(void *);
extern "C" void call_8c2280f0(void);
extern "C" void wait_vsync_and_flip_8c380516(void);
extern "C" int TProtocol_wait_send_drain_8c010a1c(Object *o)
{
    short v7;
    short v8;
    int v6;
    int v24;
    int v9;
    int v1;
    int v3;
    int v4;
    int v5;
    int v2;
    int t1;
    int t2;
    v1 = (int)0x874;
    v2 = (int)0x4117;
    v3 = (int)0x888;
    v4 = (int)0xfff;
    v5 = (int)0x708;
    v24 = (int)0;
    goto L_8c010aee;
    v6 = (int)0;
L_8c010a3c:;
    v7 = (short)((ObjectData *)o)->f28;
    v8 = (short)-1;
    if ((short)v7 != v8) {
        *(short *)((char *)((char *)o + 0x0) + (v1)) = v7;
        g_8c4621a8 = 1;
        t2 = call_8c3ca534(v2, (int)((int)o + v1), (void *)(((char *)o + 0x884)));
        g_8c4621a8 = 0;
        v9 = (int)t2;
    } else {
        v9 = (int)0;
    }
    if ((short)v9 != 0) {
        o->v4(*(S_g8c2e2178 **)((char *)0x8c2e2178 + ((unsigned short)(-(short)v9 & 0xf) << 2)));
        ((ObjectData *)o)->f2a |= 1;
        return 1;
    }
    t1 = operation_8c036544();
    if (t1 == 0) {
        ((ObjectData *)o)->f2a |= 1;
        return 1;
    }
    if ((unsigned int)(*(unsigned short *)((char *)((char *)o + 0x0) + (v3)) & 0xffff) > (unsigned int)(unsigned short)v4) {
        return 0;
    }
    time_hierarchy_visit((void *)((void *)0x8c44bec8));
    hierarchy_output_cycle((void *)((void *)0x8c44bec8));
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
    v24 = (int)(v6 + 1);
L_8c010aee:;
    v6 = (int)v24;
    if (v5 > v24) {
        goto L_8c010a3c;
    }
    ((ObjectData *)o)->f2a |= 1;
    return 1;
}
