typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct Object Object;
struct Frame {
    int f00;
    S_frame_4 *f04;
};
struct Object {
    short tag;
};
extern void call_8c2452b8(void *, Frame *);
extern void call_8c245398(Object *, void *);
extern void call_8c2454f0(Object *);
int operation_8c245260(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    call_8c2452b8((void *)(&(&frame)->f04), (Frame *)((&frame)));
    v1 = (int)-1;
    v2 = (int)(&frame)->f04;
    if (v2 != v1 && (&frame)->f00 != -1) {
        o->tag = *(int *)((char *)0x8c2e1e60 + ((&frame)->f00 << 2));
        call_8c245398(o, (void *)((&frame)->f04));
        call_8c2454f0(o);
        return 0;
    }
    return 1;
}
