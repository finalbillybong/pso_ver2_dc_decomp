typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_x33968 S_x33968;
typedef struct Block_frame_14 {
    float f00;
    float f04;
    float f08;
} Block_frame_14;
struct Frame {
    S_frame_0 *f00;
    int f04;
    int f08;
    char unknownc[0x8];
    Block_frame_14 f14;
};
struct S_x33968 {
    Vector3 f00;
};
extern int operation_8c051ff4(void *, void *, void *);
extern void call_8c38ae68(void);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c0c5094(void *, void *, Frame *);
extern void call_8c37e02c(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c11a920(void);
extern void call_8c38ad10(void);
void operation_8c0fbdf0(int a0)
{
    Frame frame;
    int v3;
    int v1;
    int v2;
    int t1;
    v1 = (int)0x3b8;
    v3 = (int)0;
    v2 = (int)0x4000;
    while (4 > v3) {
        *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&((S_x33968 *)(a0 + v1 + v3 * 0xc))->f00;
        (&frame)->f14.f04 += 10.0f;
        t1 = operation_8c051ff4((void *)a0, (void *)(&(&frame)->f14), (void *)(&(&frame)->f08));
        if (t1 != 0) {
            call_8c38ae68();
            call_8c3829bc(0, (&frame)->f14.f00, (&frame)->f14.f04 + 0.1f, (&frame)->f14.f08);
            call_8c0c5094((void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
            call_8c37e02c(0, (void *)((&frame)->f00));
            call_8c37dd28(0, (int)((&frame)->f04 + v2));
            call_8c37e2e4(0, 0.75f, 0.75f, 0.75f);
            call_8c11a920();
            call_8c38ad10();
        }
        v3 = (int)(v3 + 1);
    }
}
