typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db408 S_g8c4db408;
class S_c8c122700;
typedef struct Record {
    char unknown0[0x8];
    int f08;
    char f0c[0x10];
    char unknown1c[0x4];
    char f20[0x200];
} Record;
struct Frame {
    char f000[0x400];
    Record f400;
};
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c122700Data {
    char unknown0[0x10a0];
    int f10a0;
} S_c8c122700Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db408 *g_8c4db408;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_buffer_node_8c032bd8(void *, int, int, int);
extern "C" void call_8c12b154(void *, int, int);
extern "C" void call_8c032b70(Frame *);
extern "C" void call_8c032d18(S_c8c122700 *, Frame *);
extern "C" void call_8c20a6d0(void *);
extern "C" void operation_8c1717d4(int a0, int a1)
{
    Frame frame;
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x10ac);
    if (t1 != 0) {
        initialize_buffer_node_8c032bd8((void *)t1, 0, 0, 0);
    }
    call_8c12b154(frame.f000, a1, 0x3ff);
    call_8c032b70((Frame *)((&frame)));
    call_8c032d18(t1, (Frame *)((&frame)));
    if (((S_c8c122700Data *)t1)->f10a0 > 2) {
        if (t1 == 0) {
            goto L_8c171888;
        }
        t1->v0(1);
    } else {
        frame.f400.f08 = (int)(*(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a0 << 2)));
        call_8c12b154(frame.f400.f0c, (int)(((char *)t1 + 0x20)), 0xf);
        frame.f400.f0c[0xf] = 0;
        call_8c12b154(frame.f400.f20, (int)(((char *)t1 + 0x40)), 0x1ff);
        frame.f400.f20[0x1ff] = 0;
        call_8c20a6d0((void *)&frame.f400);
        if (t1 != 0) {
            t1->v0(1);
        }
    }
L_8c171888:;
}
