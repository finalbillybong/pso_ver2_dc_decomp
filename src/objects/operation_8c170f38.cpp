typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c122700;
struct Frame {
    char unknown0[0x200];
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
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void initialize_buffer_node_8c032bd8(void *, int, int, int);
extern "C" void call_8c12b154(Frame *, int, int);
extern "C" void call_8c032b70(Frame *);
extern "C" void call_8c032d18(S_c8c122700 *, Frame *);
extern "C" void call_8c247fd4(void *, void *, int);
extern "C" void operation_8c170f38(int a0, int a1)
{
    Frame frame;
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x10ac);
    if (t1 != 0) {
        initialize_buffer_node_8c032bd8((void *)t1, 0, 0, 0);
    }
    call_8c12b154((Frame *)((&frame)), a1, 0x1ff);
    call_8c032b70((Frame *)((&frame)));
    call_8c032d18(t1, (Frame *)((&frame)));
    if (((S_c8c122700Data *)t1)->f10a0 == 2) {
        call_8c247fd4((void *)(((char *)t1 + 0x20)), (void *)(((char *)t1 + 0x40)), a0);
    }
    if (t1 != 0) {
        t1->v0(1);
    }
}
