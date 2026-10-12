typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_8 S_frame_8;
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
    S_frame_8 *f08;
};
extern void call_8c0c5094(int, Frame *, void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(int);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c37e02c(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c37df90(int, int);
extern void call_8c37e390(int);
extern void call_8c11a920(void);
extern void call_8c38ad10(void);
void operation_8c05b9f4(int a0, int a1, int a2, int a3)
{
    Frame frame;
    call_8c0c5094(a1, (&frame), &(&frame)->f08);
    call_8c38ae68();
    call_8c382a40(a0);
    call_8c3829bc(0, 0.0f, 0.3f, 0.0f);
    call_8c37e02c(0, (&frame)->f08);
    call_8c37dd28(0, (&frame)->f00);
    call_8c37df90(0, a2);
    if (a3 != 0) {
        call_8c37e390(a3);
    }
    call_8c37dd28(0, (void *)-0x4000);
    call_8c11a920();
    call_8c38ad10();
}
