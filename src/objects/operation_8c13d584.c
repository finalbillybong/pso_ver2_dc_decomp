typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv3 S_vv3;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct S_vv3 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c467874;
extern void call_8c37f6f0(Frame *, int);
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, Frame *);
void operation_8c13d584(int a0)
{
    Frame frame;
    S_vv3 *v3;
    int v2;
    int v1;
    v2 = (int)0;
    v1 = (int)0x1000;
    while (g_8c467874 > v2) {
        v3 = (S_vv3 *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2));
        if (v3 == 0) {
            break;
        }
        if (!(v3->f20 < (unsigned short)v1)) {
            break;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v3->f3c;
        call_8c37f6f0((Frame *)((&frame)), (int)(a0 + 0x3c));
        if (!(((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08) > 64.0f)) {
            (&frame)->f00.f04 = 0.0f;
            scale_vector_to_length((void *)(&frame), 13.0f);
            call_8c3bdf60((void *)((int)v3 + 0x3c), (Frame *)((&frame)));
        }
        v2 = (int)(v2 + 1);
    }
}
