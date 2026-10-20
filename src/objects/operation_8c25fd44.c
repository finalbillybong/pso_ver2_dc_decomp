typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct CBlock12 {
    char bytes[12];
} CBlock12;
typedef struct S_L8c340720 S_L8c340720;
typedef struct Frame Frame;
typedef struct S_frame_10 S_frame_10;
typedef struct S_x5744 S_x5744;
typedef struct S_x6416 S_x6416;
typedef struct Block_frame_10 {
    int f00;
    int f04;
} Block_frame_10;
typedef struct Block_frame_18 {
    int f00;
    int f04;
} Block_frame_18;
struct Frame {
    char unknown0[0xa];
    char f0a;
    char f0b;
    char unknownc[0x4];
    Block_frame_10 f10;
    Block_frame_18 f18;
    char f20;
    char unknown21[0xb];
    char f2c;
    char unknown2d[0xb];
    char f38;
    char unknown39[0xb];
    char f44;
    char unknown45[0xb];
};
struct S_L8c340720 {
    Block8 f00;
    Block8 f08;
};
struct S_x6416 {
    char f00;
};
struct S_x5744 {
    char f00;
};
extern char g_8c3406f0;
extern char g_8c3406fc;
extern char g_8c340708;
extern char g_8c340714;
extern S_L8c340720 g_8c340720;
extern void call_8c12b880(Frame *, int, int);
extern void call_8c12b77c(Frame *, void *, int);
extern int operation_8c01018c(int);
typedef struct Block16x {
    int w[4];
} Block16x;
int operation_8c25fd44(void)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int t1;
    int t2;
    *(CBlock12 *)&(&frame)->f44 = *(CBlock12 *)&g_8c3406f0;
    *(CBlock12 *)&(&frame)->f38 = *(CBlock12 *)&g_8c3406fc;
    *(CBlock12 *)&(&frame)->f2c = *(CBlock12 *)&g_8c340708;
    *(CBlock12 *)&(&frame)->f20 = *(CBlock12 *)&g_8c340714;
    *(Block16x *)&(&frame)->f10 = *(Block16x *)&(&g_8c340720)->f00;
    v1 = (int)0;
    (&frame)->f10.f00 = (int)(&(&frame)->f44);
    (&frame)->f10.f04 = (int)(&(&frame)->f38);
    (&frame)->f18.f00 = (int)(&(&frame)->f2c);
    (&frame)->f18.f04 = (int)(&(&frame)->f20);
    while (v1 != 4) {
        call_8c12b880((Frame *)((&frame)), 0, 0xd);
        call_8c12b77c((Frame *)((&frame)), (void *)(*(S_frame_10 **)((char *)&(&frame)->f10 + (v1 << 2))), 0xc);
        v2 = (int)0;
        while (v2 != 0xc) {
            ((S_x6416 *)(v2 + (int)(&frame)))->f00 += 0x20;
            v2 = (int)(v2 + 1);
        }
        t1 = operation_8c01018c((int)(&frame));
        v3 = (int)1;
        if (!((unsigned int)1 >= (unsigned int)(t1 + 2))) {
            v3 = (int)0;
        }
        v4 = (int)(v3 == 0);
        if (v4 == 1) {
            return 1;
        }
        v1 = (int)(v1 + 1);
    }
    call_8c12b880((Frame *)((&frame)), 0, 0xd);
    call_8c12b77c((Frame *)((&frame)), (void *)(&(&frame)->f44), 0xc);
    v5 = (int)0;
    while (v5 != 0xc) {
        ((S_x5744 *)(v5 + (int)(&frame)))->f00 += 0x20;
        v5 = (int)(v5 + 1);
    }
    v6 = (int)0;
    while ((char)v6 != 0xa) {
        (&frame)->f0a = v6 + 0x30;
        v7 = (int)0;
        while ((char)v7 != 0xa) {
            (&frame)->f0b = v7 + 0x30;
            t2 = operation_8c01018c((int)(&frame));
            v8 = (int)1;
            if (!((unsigned int)1 >= (unsigned int)(t2 + 2))) {
                v8 = (int)0;
            }
            v9 = (int)(v8 == 0);
            if (v9 == 1) {
                return 1;
            }
            v7 = (int)(v7 + 1);
        }
        v6 = (int)(v6 + 1);
    }
    return 0;
}
