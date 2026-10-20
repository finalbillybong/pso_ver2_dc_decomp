typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern char g_8c418280[];
extern void call_8c3be38c(int, void *, void *);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern void call_8c37e864(int, float, float, float);
void operation_8c01476c(int a0)
{
    Frame frame;
    float t1;
    Vector3 *p;
    p = (Vector3 *)(g_8c418280 + 0xc);
    call_8c3be38c(0, (void *)((void *)g_8c418280), (void *)p);
    (&frame)->f00 = *(float *)(g_8c418280 + 0xc);
    (&frame)->f04 = *(float *)(g_8c418280 + 0x10);
    (&frame)->f08 = *(float *)(g_8c418280 + 0x14);
    t1 = call_8c37e480((Frame *)((&frame)));
    if (t1 != 0.0f) {
        call_8c37b630((Frame *)((&frame)));
    }
    *(float *)(g_8c418280 + 0xc) = (&frame)->f00;
    *(float *)(g_8c418280 + 0x10) = (&frame)->f04;
    *(float *)(g_8c418280 + 0x14) = (&frame)->f08;
    call_8c37e864((int)(a0 + 0x20), p->x, p->y, p->z);
}
