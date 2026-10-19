typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x1c];
} Block_frame_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct Frame {
    Block_frame_0 f00;
};
extern Block44 g_8c300d08;
extern float g_8c300d60;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c0a2858(Frame *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c099c2c(Object *o, int a1)
{
    Frame frame;
    if (o != 0) {
        o->dispatch = (void *)0x8c26574c;
        *(Block44 *)&(&frame)->f00 = *(Block44 *)&g_8c300d08;
        (&frame)->f00.f0c = 422.400024f;
        call_8c0a2858((Frame *)((&frame)));
        g_8c300d60 = 1.0f;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
