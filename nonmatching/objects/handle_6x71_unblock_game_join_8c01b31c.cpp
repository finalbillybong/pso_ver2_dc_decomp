/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01b31c
 * function: handle_6x71_unblock_game_join_8c01b31c
 * language: c++
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 18 of 140 reference instruction lines
 * differing bytes: 30
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
typedef struct S_vv6 S_vv6;
typedef struct S_x95312 S_x95312;
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
struct S_x95312 {
    Block8 f00;
};
struct S_vv6 {
    Block8 f00;
};
extern "C" char g_8c2e3014[];
extern "C" S_c8c01e790 *operation_8c01e790(int, int, int);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void call_8c01b1b0(int);
extern "C" void operation_8c01b488(int);
extern "C" void operation_8c02fa10(void *);
extern "C" void handle_6x71_unblock_game_join_8c01b31c(void)
{
    Frame frame;
    S_vv6 *v6;
    S_c8c01e790 *t1;
    int v3;
    int v1;
    int v2;
    char *v4;
    int v5;
    int t2;
    S_c8c01e790 *t3;
    if (*(int *)0x8c4d8288 == 0) {
        t1 = operation_8c01e790((int)(*(S_g8c418248 **)0x8c418248), 0, (int)(*(S_g8c4db9e0 **)0x8c4db9e0));
        *(Block8 *)&((S_c8c01e790Data *)t1)->fc74 = *(Block8 *)&(*(S_g8c418a00 **)0x8c418a00)->fa6c;
        t1->v7();
        t2 = t1->v13();
        strncpy_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (*(int *)0x8c418248 << 4))), t2, 0x10);
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x110)), *(S_g8c418248 **)0x8c418248);
        operation_8c011efc((Frame *)((&frame)));
        v1 = (int)0x43c;
        v2 = (int)0xc74;
        v3 = (int)0;
        while (4 > v3) {
            v4 = (char *)v3;
            v5 = (int)((int)(v4) << 2);
            if (*(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c41c730))) != 0) {
                call_8c01b1b0(v3);
                v6 = (S_vv6 *)(v3 * v1 + 0x8c418a0c);
                t3 = operation_8c01e790(v3, 4, (int)((int)v6 + 0x20));
                *(Block8 *)&((S_x95312 *)((int)t3 + v2))->f00 = *(Block8 *)&v6->f00;
                t3->v7();
                operation_8c01b488(v3);
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x194)), v3);
                operation_8c011efc((Frame *)((&frame)));
            }
            *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c41c730))) = 0;
            v3 = (int)(v3 + 1);
        }
        operation_8c02fa10((void *)(*(S_g8c418a00 **)0x8c418a00));
        *(int *)0x8c41bce4 = 0xf;
    }
}
