typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x51376 S_x51376;
typedef struct S_x74736 S_x74736;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x30];
    short f30;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x51376 {
    Vector3 f00;
};
struct S_x74736 {
    Vector3 f00;
};
extern int g_8c46ed10;
void operation_8c059f94(Object *o)
{
    Frame frame;
    int v7;
    short v1;
    v1 = (short)o->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c059fc6;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x51376 *)(g_8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c059fc6:;
    if (v7 != 0) {
        (&frame)->f00.f00 = 0;
        (&frame)->f00.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x74736 *)(g_8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f00;
        }
    }
}
