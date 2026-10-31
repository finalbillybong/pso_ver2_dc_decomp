typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c32528c S_L8c32528c;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_dc S_vv6_dc;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct S_L8c32528c {
    char unknown0[0xc];
    float f0c;
    char unknown10[0xc];
    float f1c;
};
struct S_vv6 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x94];
    S_vv6_dc *fdc;
};
struct S_vv6_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c467870;
extern int g_8c467874;
extern int g_8c467878;
extern S_L8c32528c g_8c32528c;
extern float call_8c38d7d8(void *, void *);
extern void call_8c37f6f0(Frame *, int);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern void call_8c3bdf60(Frame *, int);
extern void transform_actor_records(void *);
void operation_8c1ae374(int a0, int a1)
{
    Frame frame;
    int v8;
    char *r;
    int v1;
    int v3;
    float v2;
    int v5;
    int v7;
    float v9;
    float v4;
    S_vv6 *v6;
    float t1;
    float t2;
    float t3;
    r = (char *)&g_8c32528c + (a1 << 5);
    v1 = (int)(r + 0x10);
    v2 = *(float *)((char *)&g_8c32528c.f0c + (a1 << 5));
    v3 = g_8c467874 + g_8c467878;
    v4 = *(float *)((char *)&g_8c32528c.f1c + (a1 << 5));
    for (v5 = v3; g_8c467870 > v5; v5++) {
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
        if (v6 != 0 && v6->fdc != 0 && ((v6->fdc->f18 & 0x40000)) != 0) {
            t1 = call_8c38d7d8((void *)r, (void *)((int)v6 + 0x3c));
            if (t1 > v2) {
                for (v7 = 0; 3 > v7; v7++) {
                    v8 = (int)((char *)&g_8c32528c + (v7 << 5));
                    v9 = *(float *)((char *)&g_8c32528c.f0c + (v7 << 5));
                    if (v7 != a1) {
                        t2 = call_8c38d7d8((void *)((int)v6 + 0x3c), (void *)v8);
                        if (!(t2 > v9)) {
                            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v6->f3c;
                            call_8c37f6f0((Frame *)((&frame)), v8);
                            (&frame)->f00.f04 = 0.0f;
                            t3 = call_8c37e480((Frame *)((&frame)));
                            if (!(t3 > 0.01f)) {
                                (&frame)->f00.f00 = 0.0f;
                                (&frame)->f00.f08 = 1.0f;
                            } else {
                                call_8c37b630((Frame *)((&frame)));
                            }
                            break;
                        }
                    }
                }
                if (v7 != 3) {
                    (&frame)->f00.f00 *= v4;
                    (&frame)->f00.f08 *= v4;
                    (&frame)->f00.f04 = 7.5f;
                    call_8c3bdf60((Frame *)((&frame)), v1);
                    *(Vector3 *)&v6->f3c = *(Vector3 *)&(&frame)->f00;
                    transform_actor_records((void *)v6);
                }
            }
        }
    }
}
