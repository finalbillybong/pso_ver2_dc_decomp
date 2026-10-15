typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
};
struct Frame {
    S_frame_0 *f00;
};
extern int operation_8c232480(void);
extern void call_8c12b00c(void *, void *, ...);
extern void call_8c232538(void *);
extern int operation_8c2324c0(void);
extern void call_8c2325a8(void *);
extern void request_resource_release(void *);
void operation_8c231ebc(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    if (v1 > 0x3c) {
        (&frame)->f00 = (S_frame_0 *)0;
        t1 = operation_8c232480();
        if (t1 == 0) {
            call_8c12b00c((void *)((void *)0x8c513400), (void *)((void *)0x8c338c18), (Frame *)((&frame)));
            call_8c232538((void *)((&frame)->f00));
        }
        (&frame)->f00 = (S_frame_0 *)0;
        t2 = operation_8c2324c0();
        if (t2 == 0) {
            call_8c12b00c((void *)((void *)0x8c4e3120), (void *)((void *)0x8c338c18), (Frame *)((&frame)));
            call_8c2325a8((void *)((&frame)->f00));
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        o->f24 = 0;
        o->f20 = 2;
    }
}
