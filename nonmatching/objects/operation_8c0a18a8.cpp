/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a18a8
 * function: operation_8c0a18a8
 * language: c++
 * reference size: 284 bytes
 * compiled size: 280 bytes (-1.4%)
 * differing lines: 2 of 117 reference instruction lines
 * differing bytes: 137
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c3032d8 S_g8c3032d8;
class S_vv1;
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x7];
    int f08;
};
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};
typedef struct S_vv1Data {
    char unknown0[0x3c];
    int f3c;
} S_vv1Data;
extern int g_8c46f080;
extern S_L8c46efc8 g_8c46efc8;
extern "C" void hs_8c0a0b6c(S_vv1 *);
extern "C" void hs_8c0a2478(int);
extern "C" void resolve_contact_position(int);
extern "C" void operation_8c0a23e8(int);
extern "C" void operation_8c0a2534(int);
extern "C" void advance_contact_position(int, S_vv1 *);
extern "C" void operation_8c0a19f0(int);
extern "C" void operation_8c0a18a8(int a0)
{
    S_vv1 *v1;
    int v2;
    int v8;
    int v21;
    int v26;
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + ((&g_8c46efc8)->f00 << 2));
    if (v1 != 0) {
        v2 = (int)0x800;
        if ((((&g_8c46efc8)->f08 & v2)) == 0) {
            v1->v1();
        }
        if (g_8c46f080 == 0) {
            v8 = (int)(&g_8c46efc8)->f08;
            if (((v8 & 2)) != 0) {
                v1->v5(0);
            } else {
                if (((v8 & 0x80)) != 0) {
                    v1->v5(1);
                }
            }
        }
        hs_8c0a0b6c(v1);
        v21 = (int)(&g_8c46efc8)->f08;
        if (((v21 & 0x20)) != 0 || ((v21 & 0x800)) != 0) {
            hs_8c0a2478(a0);
            goto L_8c0a1980;
        }
        if (((((S_vv1Data *)v1)->f3c & 1)) != 0) {
            resolve_contact_position(a0);
        }
        v26 = (int)((S_vv1Data *)v1)->f3c;
        if (((v26 & 4)) != 0) {
            operation_8c0a23e8(a0);
        } else {
            if (((v26 & 8)) != 0) {
                operation_8c0a2534(a0);
            } else {
                hs_8c0a2478(a0);
            }
        }
        if (((((S_vv1Data *)v1)->f3c & 1)) != 0) {
            advance_contact_position(a0, v1);
        }
        operation_8c0a19f0(a0);
L_8c0a1980:;
        v1->v10();
    }
}
