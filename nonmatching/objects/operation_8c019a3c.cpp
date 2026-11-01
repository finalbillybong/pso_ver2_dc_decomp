/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c019a3c
 * function: operation_8c019a3c
 * language: c++
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 6 of 74 reference instruction lines
 * differing bytes: 19
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
class S_c8c01e790;
class S_c8c01e790 {
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
typedef struct S_c8c01e790Data {
    char unknown0[0xc74];
    Block8 fc74;
} S_c8c01e790Data;
struct S_g8c418a00 {
    char unknown0[0xa6c];
    Block8 fa6c;
};
struct Frame {
    char unknown0[0x80];
};
extern "C" char g_8c2e3014[];
extern "C" S_c8c01e790 *operation_8c01e790(int, int, int);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void operation_8c02fa10(void *);
extern int g_8c418248;
extern "C" void operation_8c019a3c(void)
{
    Frame frame;
    int v22;
    S_c8c01e790 *t1;
    int t2;
    v22 = (int)g_8c418248;
    if ((int)v22 == *(int *)0x8c418258) {
        t1 = operation_8c01e790(v22, 0, (int)(*(S_g8c4db9e0 **)0x8c4db9e0));
        *(Block8 *)&((S_c8c01e790Data *)t1)->fc74 = *(Block8 *)&(*(S_g8c418a00 **)0x8c418a00)->fa6c;
        t1->v7();
        t2 = t1->v13();
        strncpy_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (g_8c418248 << 4))), t2, 0x10);
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x110)), (S_g8c418248 *)g_8c418248);
        operation_8c011efc((Frame *)((&frame)));
        operation_8c02fa10((void *)(*(S_g8c418a00 **)0x8c418a00));
        *(int *)0x8c41bce4 = 0xf;
    }
}
