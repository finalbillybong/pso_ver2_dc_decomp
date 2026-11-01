/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c123020
 * function: operation_8c123020
 * language: c++
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 14 of 123 reference instruction lines
 * differing bytes: 15
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
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_f4 Arg0_f4;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x8];
    float f74;
    char unknown78[0x70];
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    Arg0_100 *f100;
    char unknown104[0x34];
    unsigned char f138;
    char unknown139[0x3];
    float f13c;
} ObjectData;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c37ddbc(int, void *, void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" int operation_8c0eea7c(Object *, float);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c3adf38(void *, void *, void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c123020(Object *o)
{
    int t1;
    int t2;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37ddbc(0, *(void **)((char *)o + 0x60), *(void **)((char *)o + 0x64), *(void **)((char *)o + 0x68));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        switch (((ObjectData *)o)->f138) {
        case 4:
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            if (0.0f > ((ObjectData *)o)->f13c) {
                ((ObjectData *)o)->f138 = 3;
                goto L_8c1230da;
            }
            ((ObjectData *)o)->f13c -= 0.01f;
            break;
        default:
            t2 = operation_8c0eea7c(o, ((ObjectData *)o)->f74 * ((ObjectData *)o)->f74);
            if (t2 == 0) {
                if (0.0f > ((ObjectData *)o)->f13c) {
                    ((ObjectData *)o)->f13c = 1.0f;
                }
            }
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            break;
        }
L_8c1230da:;
        call_8c38c0f0((void *)(((char *)o + 0x13c)));
        call_8c3adf38((void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4), (void *)(((ObjectData *)o)->f100), ((ObjectData *)o)->fe8);
        call_8c38c0f0((void *)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
    }
}
