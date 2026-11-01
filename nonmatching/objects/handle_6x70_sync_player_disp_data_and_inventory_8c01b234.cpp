/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01b234
 * function: handle_6x70_sync_player_disp_data_and_inventory_8c01b234
 * language: c++
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 8 of 76 reference instruction lines
 * differing bytes: 9
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
typedef struct Object Object;
class S_c8c01e814;
class S_c8c021ef8;
struct Object {
    char unknown0[0x8];
    unsigned short f08;
};
class S_c8c01e814 {
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
typedef struct S_c8c01e814Data {
    char unknown0[0x20];
    unsigned short f20;
} S_c8c01e814Data;
struct Frame {
    char unknown0[0x40];
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern int g_8c41bce4;
extern int g_8c4d8288;
extern "C" char g_8c2e3014[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" S_c8c01e814 *operation_8c01e814(int);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" void operation_8c01b488(int);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void handle_6x70_sync_player_disp_data_and_inventory_8c01b234(Object *o)
{
    Frame frame;
    S_c8c01e814 *t2;
    S_c8c021ef8 *t1;
    short v4;
    int t3;
    if (g_8c4d8288 == 0 && (unsigned int)1 >= (unsigned int)(g_8c41bce4 + -0xe)) {
        unsigned short *p = &o->f08;
        t1 = lookup_low_id((int)(*p));
        if (t1 != 0 && t1 != 0) {
            t1->v0(1);
        }
        t2 = operation_8c01e814((int)p);
        v4 = (short)((S_c8c01e814Data *)t2)->f20;
        t3 = t2->v13();
        strncpy_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + ((unsigned short)v4 << 4))), t3, 0x10);
        operation_8c01b488((int)(*p));
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x15d)), ((S_c8c01e814Data *)t2)->f20);
        operation_8c011efc((Frame *)((&frame)));
    }
}
