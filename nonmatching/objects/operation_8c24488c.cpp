/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24488c
 * function: operation_8c24488c
 * language: c++
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 12 of 156 reference instruction lines
 * differing bytes: 187
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
typedef struct Frame Frame;
typedef struct S_g8c33ab10 S_g8c33ab10;
typedef struct Object Object;
class S_c8c021ef8;
struct Object {
    char unknown0[0x270];
    int f270;
};
struct Frame {
    char unknown0[0x40];
    char f40;
    char f41;
    char unknown42[0x2];
    char f44;
    char unknown45[0x13];
};
class S_c8c021ef8 {
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
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" char g_8c33ab28[];
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c243cd4(void);
extern "C" void operation_8c0ddb5c(int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void operation_8c25eef4(int, int);
extern "C" void operation_8c24488c(Object *o, int a1)
{
    Frame frame;
    int t1;
    int v2;
    int v6;
    int v1;
    int v7;
    int v8;
    S_c8c021ef8 *t2;
    int t3;
    switch (o->f270) {
    case 0:
        if (*(int *)0x8c418248 != *(int *)0x8c418258) {
            return;
        }
        t1 = call_8c18e768(a1, 0x3c);
        v1 = (int)0x268;
        v2 = (int)0;
        while (8 > v2) {
            if (*(char *)((char *)((char *)((int)o + v1) + 0x0) + (v2)) != 0) {
                if (t1 == *(short *)((char *)0x8c510ce8 + (v2 << 1))) {
                    *(char *)((char *)((char *)((int)o + v1) + 0x0) + (v2)) = 0;
                    (&frame)->f40 = 0x7d;
                    (&frame)->f41 = 6;
                    (&frame)->f44 = 5;
                    operation_8c0368a8((void *)(&(&frame)->f40));
                }
            }
            v2 = (int)(v2 + 1);
        }
        return;
    case 1:
        if (!(*(int *)0x8c510cbc >= *(int *)0x8c467874)) {
        } else {
            o->f270 = 2;
        }
        return;
    case 2:
        o->f270 = 0;
        *(int *)0x8c510cbc = 0;
        call_8c243cd4();
        operation_8c0ddb5c((int)(g_8c33ab28 + 0x304));
        v6 = (int)0;
        while (4 > v6) {
            v7 = (int)(v6 << 2);
            v8 = (int)(v7 << 1);
            t2 = lookup_low_id((int)(*(unsigned short *)((char *)((char *)v8 + 0x0) + ((int)((void *)0x8c510c9c))) & 0xffff));
            if (t2 != 0) {
                t3 = t2->v13();
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c33ab28 + 0x30a)), *(S_g8c33ab10 **)((char *)0x8c33ab10 + (*(short *)((char *)(short *)((char *)0x8c510c9c + 2) + (v8)) << 2)), t3);
                operation_8c0ddb5c((int)(&frame));
            }
            v6 = (int)(v6 + 1);
        }
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c33ab28 + 0x310));
        operation_8c25eef4(-0x32, 0x3c);
    }
}
