typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv66 S_vv66;
typedef struct S_vv66_s11c4 S_vv66_s11c4;
typedef struct S_vv67 S_vv67;
typedef struct S_vv67_s11c4 S_vv67_s11c4;
typedef struct S_vv7 S_vv7;
struct S_vv4 {
    int f00;
    int f04;
};
struct S_vv66 {
    char unknown0[0x11c4];
    int f11c4;
};
struct S_vv66_s11c4 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    char unknown6[0x2];
    int f08;
    char unknownc[0x9c];
};
struct S_vv7 {
    int f00;
    int f04;
};
struct S_vv67 {
    char unknown0[0x11c4];
    int f11c4;
};
struct S_vv67_s11c4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c418248;
extern S_g8c4db9e4 *g_8c4db9e4;
extern int g_8c510ba0;
extern char g_8c339ca0[];
extern void operation_8c0368a8(void *);
typedef struct Blk160 {
    int w[40];
} Blk160;
void operation_8c248664(void)
{
    Frame frame;
    int v1;
    char *v66;
    char *d;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        d = g_8c418248 * 0xa4 + g_8c339ca0 + 0x274;
        v66 = (char *)g_8c4db9e4;
        if (v66 != 0) {
            *(Blk160 *)(d + 4) = *(Blk160 *)(v66 + 0x11c4);
            if (g_8c510ba0 != 0) {
                (&frame)->f00 = 0x7c;
                (&frame)->f01 = 0x2a;
                (&frame)->f04 = g_8c418248;
                *(Blk160 *)&(&frame)->f08 = *(Blk160 *)((char *)g_8c4db9e4 + 0x11c4);
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
