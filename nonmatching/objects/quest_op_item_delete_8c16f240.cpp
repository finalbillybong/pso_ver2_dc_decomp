/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16f240
 * function: quest_op_item_delete_8c16f240
 * language: c++
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 56 of 190 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    unsigned char f06;
    signed char f07;
    unsigned char f08;
    signed char f09;
    unsigned char f0a;
    signed char f0b;
    char pad[8];
} Frame;
typedef struct Low {
    char unknown0[0xbc8];
    void *fbc8;
} Low;
class Unit {
public:
    char data[0x18];
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(Frame *);
};
extern int g_8c418248;
extern int *g_8c4db408;
extern "C" Low *lookup_low_id(int);
extern "C" int operation_8c16a18c(void *, int);
extern "C" Unit *operation_8c169508(int);
extern "C" void operation_8c023b3c(void *, int, int);
extern "C" void quest_op_item_delete_8c16f240(unsigned char a0, unsigned char a1)
{
    Frame frame;
    Low *t;
    int r;
    Unit *u;
    int k;
    if (a1 > 0xf4) {
        return;
    }
    t = lookup_low_id(g_8c418248);
    if (t != 0) {
        k = a0 << 2;
        r = operation_8c16a18c(t->fbc8, *(int *)((char *)g_8c4db408 + k));
        if (r != 0) {
            u = operation_8c169508(r);
            if (u != 0) {
                u->v31(&frame);
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f00;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f01;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f02;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f03;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f04;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f05;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f06;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f07;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f08;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f09;
                *(int *)((char *)g_8c4db408 + (a1++ << 2)) = frame.f0a;
                *(int *)((char *)g_8c4db408 + (a1 << 2)) = frame.f0b;
                operation_8c023b3c(t, *(int *)((char *)g_8c4db408 + k), 1);
            } else {
                *(int *)((char *)g_8c4db408 + (a1 << 2)) = -1;
            }
        } else {
            *(int *)((char *)g_8c4db408 + (a1 << 2)) = -1;
        }
    } else {
        *(int *)((char *)g_8c4db408 + (a1 << 2)) = -1;
    }
}
