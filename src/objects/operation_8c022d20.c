typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_118 Arg0_118;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x118];
    Arg0_118 *f118;
};
extern void call_8c38ade4(int);
extern void call_8c384610(int);
extern void call_8c38a714(int, void *);
extern void call_8c3be280(int, Frame *, int);
extern void call_8c38ad10(void);
void operation_8c022d20(Object *o, int a1, int a2)
{
    Frame frame;
    (&frame)->f08 = 0.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f00 = 0.0f;
    call_8c38ade4(0);
    call_8c384610(0);
    call_8c38a714(0, (void *)(&*(int *)((char *)((char *)o->f118 + 0x0) + (a1 << 6))));
    call_8c3be280(0, (Frame *)((&frame)), a2);
    call_8c38ad10();
}
