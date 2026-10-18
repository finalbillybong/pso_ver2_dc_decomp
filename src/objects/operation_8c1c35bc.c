typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_18 S_g8c467180_18;
typedef struct S_g8c467180_18_0 S_g8c467180_18_0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x18];
    int f18;
    char unknown1c[0x8];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4db9e0 {
    char unknown0[0x34c];
    Block36 f34c;
};
struct Object {
    char unknown0[0x164];
    char f164;
    char f165;
    char f166;
};
struct S_g8c467180 {
    char unknown0[0x18];
    S_g8c467180_18 *f18;
};
struct S_g8c4db9e4 {
    char unknown0[0xc];
    int f0c;
};
extern char g_8c3289d4[];
extern void call_8c12b048(void *, void *, ...);
extern int operation_8c04c66c(int);
extern int call_8c18e808(int, int);
void operation_8c1c35bc(Object *o)
{
    int v9;
    Frame frame;
    char *v5;
    int v6;
    int v7;
    int v8;
    int t1;
    int t2;
    int t3;
    *(Block36 *)&(&frame)->f00 = *(Block36 *)&(*(S_g8c4db9e0 **)0x8c4db9e0)->f34c;
    call_8c12b048((void *)(((char *)o + 0x188)), (void *)((g_8c3289d4 + 0xc)), (int)((&frame)->f00.f18 + 1));
    if (((o->f166 & 2)) != 0) {
        call_8c12b048((void *)(((char *)o + 0x190)), (void *)((g_8c3289d4 + 0x11)), (int)(g_8c3289d4 + 0x15));
    } else {
        call_8c12b048((void *)(((char *)o + 0x190)), (void *)((g_8c3289d4 + 0x11)), (int)(*(S_g8c467180_18_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f18 + 0x0) + (o->f165 << 2))));
    }
    if (((o->f166 & 1)) != 0) {
        call_8c12b048((void *)(((char *)o + 0x1ae)), (void *)((g_8c3289d4 + 0x11)), (int)(g_8c3289d4 + 0x15));
    } else {
        t1 = operation_8c04c66c((int)(o->f164));
        call_8c12b048((void *)(((char *)o + 0x1ae)), (void *)((g_8c3289d4 + 0x11)), t1);
    }
    v5 = (char *)(*(S_g8c4db9e4 **)0x8c4db9e4)->f0c;
    t2 = call_8c18e808((int)(v5), 0xe10);
    v6 = (int)(v5 - (unsigned short)t2 * 0xe10);
    t3 = call_8c18e808(v6, 0x3c);
    v7 = (int)t2;
    v9 = 0x270f;
    if ((unsigned int)(unsigned short)t2 > (unsigned int)(unsigned short)v9) {
        v7 = v9;
    }
    v8 = (int)t3;
    if ((unsigned int)(unsigned char)t3 > (unsigned int)0x3b) {
        v8 = (int)0x3b;
    }
    call_8c12b048((void *)(((char *)o + 0x1cc)), (void *)((g_8c3289d4 + 0x1b)), (int)((unsigned short)v7), (unsigned char)v8);
}
