typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct S_vv6 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_vv4 {
    Vector3 f00;
};
extern int g_8c467874;
extern int g_8c467878;
extern void call_8c37f6f0(Frame *, int);
unsigned short operation_8c04a638(int a0, S_vv4 *a1, float f0)
{
    Frame frame;
    short v21;
    unsigned short v1;
    unsigned short v7;
    unsigned short v67;
    unsigned short v68;
    int v3;
    float v8;
    float v13;
    float v5;
    float v18;
    S_vv6 *v6;
    Vector3 *out;
    int v2;
    v1 = (unsigned short)0xffff;
    v3 = (int)g_8c467874;
    v5 = (float)(f0 * f0);
    v2 = (int)0x2000800;
    while ((g_8c467874 + g_8c467878) > v3) {
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
        if (v6 == 0) {
            goto L_8c04a708;
        }
        v7 = (unsigned short)v6->f20;
        v67 = (unsigned short)0x1000;
        if (v7 >= v67 && (v68 = (unsigned short)0x4000, v68 > v7) && ((v6->f34 & v2)) == 0) {
            out = (Vector3 *)&(&frame)->f0c;
            if (v6 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v6->f3c;
                call_8c37f6f0((Frame *)((&frame)), (int)(a0 + 0x3c));
                (&frame)->f00.f04 = 0.01f;
                v18 = (&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08;
                if (out != 0) {
                    *out = *(Vector3 *)&(&frame)->f00;
                }
            } else {
                v18 = 100000000.0f;
            }
            if (v5 > v18) {
                v21 = (short)v6->f20;
                v5 = (float)v18;
                if (a1 != 0) {
                    *(Vector3 *)&a1->f00 = *(Vector3 *)&(&frame)->f0c;
                }
                v1 = (unsigned short)v21;
            }
        }
        v3 = (int)(v3 + 1);
    }
L_8c04a708:;
    return v1;
}
