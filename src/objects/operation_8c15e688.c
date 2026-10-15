typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_p0_3c0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x358];
    Block_p0_3c0 f3c0;
    char unknown3cc[0x30];
    Vector3 f3fc;
};
struct Frame {
    S_frame_0 *f00;
    int f04;
    int f08;
    char unknownc[0x8];
};
extern int operation_8c051ff4(void *, void *, void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c0c5094(void *, void *, Frame *);
extern void call_8c37e02c(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c11a920(void);
extern void call_8c38ad10(void);
void operation_8c15e688(Object *o)
{
    Frame frame;
    int t1;
    *(Vector3 *)&o->f3c0 = *(Vector3 *)&o->f3fc;
    t1 = operation_8c051ff4((void *)o, (void *)(&o->f3c0), (void *)(&(&frame)->f08));
    if (t1 != 0) {
        call_8c38ae68();
        o->f3c0.f04 += 0.2f;
        call_8c382a40((void *)(&o->f3c0));
        call_8c0c5094((void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        call_8c37e02c(0, (void *)((&frame)->f00));
        call_8c37df90(0, (void *)(o->f64));
        call_8c37dd28(0, (int)((&frame)->f04 + 0x4000));
        call_8c37e2e4(0, 2.0f, 2.0f, 1.0f);
        call_8c11a920();
        call_8c38ad10();
    }
}
