/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02bc00
 * function: operation_8c02bc00
 * language: c++
 * reference size: 320 bytes
 * compiled size: 316 bytes (-1.2%)
 * differing lines: 6 of 124 reference instruction lines
 * differing bytes: 244
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg1;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x6c2];
    float f6e4;
    char unknown6e8[0xcc];
    int f7b4;
};
class Arg1 {
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
    virtual void v11();
    virtual void v12();
    virtual int v13();
};
typedef struct Arg1Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x77c];
    int f7b4;
} Arg1Data;
extern "C" char g_8c2e75bc[];
extern "C" int operation_2391f4(void *);
extern "C" int operation_239288(void *);
extern "C" void operation_23959c(void *, void *, int);
extern "C" void reset_text_cursor_8c18ea38(void);
extern "C" void operation_8c18ea4c(int);
extern "C" void operation_8c18eb44(int);
extern "C" void operation_8c0ddb68(int, int);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" void operation_8c02bc00(Object *o, Arg1 *a1, int a2)
{
    unsigned short v1;
    int v2;
    int v15;
    int t3;
    int t1;
    int t2;
    int v3;
    v1 = (unsigned short)o->f20;
    v2 = (int)((int)v1 == *(int *)0x8c418248);
    if (v2 != 0) {
        v3 = (int)0;
        if (*(int *)0x8c2e2ad8 != 0) {
            t1 = operation_2391f4((void *)((void *)0x8c41ce5c));
            if ((char)t1 == 1) {
                v3 = (int)1;
            }
        }
        if (v3 == 0) {
            goto out;
        }
        if (((((Arg1Data *)a1)->f34 & 0x10000000)) != 0) {
            t2 = operation_239288((void *)((void *)0x8c41ce5c));
            if ((unsigned char)t2 == 1 && o->f7b4 == ((Arg1Data *)a1)->f7b4) {
                return;
            }
        }
        operation_23959c((void *)(&o->f6e4), (void *)a1, a2);
        v15 = (int)(int)o->f6e4;
        t3 = a1->v13();
        if (t3 != 0) {
            reset_text_cursor_8c18ea38();
            operation_8c18ea4c((int)(g_8c2e75bc + 0x43));
            operation_8c18ea4c(t3);
            operation_8c18ea4c((int)(g_8c2e75bc + 0x3b));
            operation_8c18eb44(a2);
            operation_8c18ea4c((int)(g_8c2e75bc + 0x3b));
            operation_8c18ea4c((int)(g_8c2e75bc + 0x3d));
            operation_8c18ea4c((int)(g_8c2e75bc + 0x3b));
            operation_8c18eb44(v15);
            operation_8c18ea4c((int)(g_8c2e75bc + 0x3b));
            operation_8c0ddb68((int)((void *)0x8c4dbe40), 0x200);
        }
        play_se_8c05fbf8(0x4000a, 0, 0, 0);
    }
out:;
}
