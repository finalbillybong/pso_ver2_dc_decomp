/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c216840
 * function: TWindowDD_WS_Word_render_8c216840
 * language: c++
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 4 of 122 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowDD_WS_Word.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_88 Arg0_88;
typedef struct S_vv13 S_vv13;
typedef struct S_vv3 S_vv3;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    int f68;
    char unknown6c[0x4];
    int f70;
    int f74;
    char unknown78[0xc];
    int f84;
    Arg0_88 *f88;
    char unknown8c[0x8];
    int f94;
} ObjectData;
struct S_vv3 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x14];
    int f24;
};
struct S_vv13 {
    char unknown0[0x24];
    int f24;
};
struct S_c0 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c2e16f0;
extern int g_8c2e16f4;
extern "C" void call_8c20b098(Object *, S_c0 *);
extern "C" void call_8c21648c(Object *, S_c0 *);
extern "C" int operation_8c20b040(short);
extern "C" void call_8c0e2278(S_vv3 *, int, int);
extern "C" void operation_8c0e2328(S_vv3 *, float);
extern "C" void initialize_fields_8c0e24e8(void *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowDD_WS_Word_render_8c216840(Object *o)
{
    S_vv3 *v3;
    S_c0 *t1;
    int v2;
    int v1;
    int v11;
    int v12;
    S_vv13 *v13;
    int t2;
    t1 = (S_c0 *)o->v5();
    call_8c20b098(o, t1);
    call_8c21648c(o, t1);
    if (((ObjectData *)o)->f94 != 0) {
        ((ObjectData *)o)->f94 = 0;
        for (v1 = 0, v2 = ((ObjectData *)o)->f70 - ((ObjectData *)o)->f74; ((ObjectData *)o)->f84 > v1; v1++, v2++) {
            v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((ObjectData *)o)->f30 + (v1 << 2));
            t2 = operation_8c20b040(*(short *)((char *)((ObjectData *)o)->f88 + (v2 << 1)));
            call_8c0e2278(v3, t2, 0xc0);
            v3->f0c = (float)(v1 * 0x14);
            operation_8c0e2328(v3, 1000000.0f);
            initialize_fields_8c0e24e8((void *)v3);
            v3->f24 = (int)(g_8c2e16f0);
        }
        v11 = !(((ObjectData *)o)->f68 & 1);
        if (v11 != 0) {
            for (v12 = 0; ((ObjectData *)o)->f84 > v12; v12++) {
                v13 = (S_vv13 *)*(Arg0_30_0 **)((char *)((ObjectData *)o)->f30 + (v12 << 2));
                if (v12 == ((ObjectData *)o)->f74) {
                    v13->f24 = (int)(g_8c2e16f4);
                }
            }
        }
    }
    t1->f14 += 1.0f;
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
