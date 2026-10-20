typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
};
extern int g_8c4d9aa8;
extern char g_8c4d9aac;
extern char g_8c312a8c[];
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c38c5aa(int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c133cf0(Object *o)
{
    Frame frame;
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    if (g_8c4d9aac == 0) {
        g_8c4d9aa8 = 0;
        g_8c4d9aac = 1;
    }
    (&frame)->f00 = o->f3c;
    (&frame)->f04 = o->f40;
    (&frame)->f08 = o->f44;
    switch (g_8c4d9aa8) {
    case 0:
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x80, 6, 1) != 0) {
            (&frame)->f00 += 0.01f;
        }
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x40, 6, 1) != 0) {
            (&frame)->f00 -= 0.01f;
        }
        if (((*(int *)((char *)(g_8c41cba0 + 0x28) + (o->f34 * 0x3c)) & 0x400)) != 0) {
            (&frame)->f00 = 0.0f;
        }
        break;
    case 1:
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x80, 6, 1) != 0) {
            (&frame)->f04 += 0.01f;
        }
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x40, 6, 1) != 0) {
            (&frame)->f04 -= 0.01f;
        }
        if (((*(int *)((char *)(g_8c41cba0 + 0x28) + (o->f34 * 0x3c)) & 0x400)) != 0) {
            (&frame)->f04 = 0.0f;
        }
        break;
    case 2:
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x80, 6, 1) != 0) {
            (&frame)->f08 += 0.01f;
        }
        if (operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x40, 6, 1) != 0) {
            (&frame)->f08 -= 0.01f;
        }
        if (((*(int *)((char *)(g_8c41cba0 + 0x28) + (o->f34 * 0x3c)) & 0x400)) != 0) {
            (&frame)->f08 = 0.0f;
        }
        break;
    }
    o->f3c = (&frame)->f00;
    o->f40 = (&frame)->f04;
    o->f44 = (&frame)->f08;
    t7 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x20, 6, 1);
    if (t7 != 0) {
        g_8c4d9aa8 += 1;
    }
    t8 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x10, 6, 1);
    if (t8 != 0) {
        g_8c4d9aa8 -= 1;
    }
    if (!(g_8c4d9aa8 >= 0)) {
        g_8c4d9aa8 = 2;
    }
    if (g_8c4d9aa8 > 2) {
        g_8c4d9aa8 = 0;
    }
    call_8c38c5aa(0xe);
    call_8c38c5b6(-0xff0001);
    v4 = g_8c4d9aa8;
    call_8c38cf80((int)(v4 + 0xf | 0xc0000), (void *)((g_8c312a8c + 0x13)), *(float *)((char *)&(&frame)->f00 + (v4 << 2)));
    call_8c38c5b6(-0xf0f10);
}
