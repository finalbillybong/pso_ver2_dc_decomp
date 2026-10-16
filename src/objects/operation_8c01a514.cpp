typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c4627c0 S_g8c4627c0;
typedef struct S_vv2_c S_vv2_c;
class S_c8c021ef8;
class S_vv2;
struct S_g8c4627c0 {
    char unknown0[0x14];
    int f14;
};
class S_vv2 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv2Data {
    char unknown0[0x6];
    unsigned short f06;
    char unknown8[0x4];
    S_vv2_c *f0c;
    char unknown10[0x10];
    unsigned char f20;
    unsigned char f21;
    unsigned char f22;
    unsigned char f23;
} S_vv2Data;
struct Frame {
    char unknown0[0x80];
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern int g_8c418258;
extern int g_8c41bce4;
extern int g_8c41bce8;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c4627c0 *g_8c4627c0;
extern int g_8c4d8288;
extern int g_8c5049f0;
extern "C" char g_8c2e3014[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void call_8c12b154(void *, void *, int);
extern "C" void request_resource_release(void *);
extern "C" void clear_group_flag_08(void *);
extern "C" void operation_8c01a514(int a0, int a1, int a2)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int v1;
    S_vv2 *v2;
    g_8c418258 = a1;
    g_8c41bce8 = a2;
    t1 = lookup_low_id(a0);
    if (t1 != 0) {
        v1 = (int)g_8c4627c0->f14;
        v2 = (S_vv2 *)v1;
        while (v2 != 0) {
            if (((S_vv2Data *)v2)->f06 == a0) {
                if (v2 != 0) {
                    v2->v0(1);
                }
                call_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x12e)), (int)(((S_vv2Data *)v2)->f20), (int)(((S_vv2Data *)v2)->f21), (int)(((S_vv2Data *)v2)->f22), (int)(((S_vv2Data *)v2)->f23));
                operation_8c011efc((Frame *)((&frame)));
                v2 = (S_vv2 *)((char *)v2 + 32);
                goto L_8c01a5a2;
            }
            v2 = (S_vv2 *)((S_vv2Data *)v2)->f0c;
        }
L_8c01a5a2:;
        if (t1 != 0) {
            t1->v0(1);
        }
    }
    call_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (a0 << 4))), (void *)((g_8c2e3014 + 0x57)), 0x10);
    if (g_8c41bce4 == 0xe) {
        g_8c4d8288 = 1;
    }
    if (g_8c41c614 != 0) {
        request_resource_release(g_8c41c614);
        g_8c41c614 = (S_g8c41c614 *)0;
    }
    if (g_8c5049f0 == 0) {
        clear_group_flag_08((void *)((void *)0x8c44bec8));
    }
}
