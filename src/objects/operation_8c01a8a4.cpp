typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class S_c8c021ef8;
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
extern "C" char g_8c2e3014[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void call_8c12b154(void *, void *, int);
extern "C" void operation_8c01a8a4(int a0, int a1)
{
    Frame frame;
    S_c8c021ef8 *t1;
    *(int *)0x8c418258 = a1;
    t1 = lookup_low_id(a0);
    if (t1 != 0) {
        if (t1 != 0) {
            t1->v0(1);
        }
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x1a4)), a0);
        operation_8c011efc((Frame *)((&frame)));
    }
    call_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (a0 << 4))), (void *)((g_8c2e3014 + 0x57)), 0x10);
}
