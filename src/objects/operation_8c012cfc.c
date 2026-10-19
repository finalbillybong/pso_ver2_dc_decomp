typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x22320 S_x22320;
typedef struct S_x81968 S_x81968;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0x2];
    short f06;
    char f08;
    char f09;
    char f0a;
    char f0b;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x160];
    short f198;
    char unknown19a[0x146];
    int f2e0;
    char unknown2e4[0x8];
    int f2ec;
    char unknown2f0[0x40];
    short f330;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x22320 {
    Vector3 f00;
};
struct S_x81968 {
    Vector3 f00;
};
extern int g_8c46ed10;
extern void call_8c012e2c(Object *, Frame *);
int operation_8c012cfc(Object *o, int a1)
{
    Frame frame;
    unsigned short v1;
    int v11;
    v1 = (unsigned short)o->f20;
    v11 = (int)0;
    if (v1 >= (unsigned int)0x1000) {
        v11 = (int)0;
        if ((unsigned int)0x4000 > v1) {
            if (o->f30 >= 0 && !(o->f30 > 0xb4f)) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x22320 *)(g_8c46ed10 + o->f30 * 0xc))->f00;
            }
            (&frame)->f00.f06 = o->f198 - o->f330;
            (&frame)->f00.f00 = (int)(o->f34);
            switch (a1) {
            case 9:
            case 11:
                (&frame)->f00.f08 = a1;
                (&frame)->f00.f09 = (int)(((float)o->f2e0 / 30.0f - 40.0f) * 0.1f);
                break;
            case 10:
            case 12:
                (&frame)->f00.f0a = a1;
                (&frame)->f00.f0b = (int)(((float)o->f2ec / 30.0f - 40.0f) * 0.1f);
            }
            if (o->f30 < 0 || o->f30 > 0xb4f) {
                v11 = (int)0;
                goto L_8c012de8;
            }
            v11 = (int)1;
            *(Vector3 *)&((S_x81968 *)(g_8c46ed10 + o->f30 * 0xc))->f00 = *(Vector3 *)&(&frame)->f00;
L_8c012de8:;
            if (v11 != 0) {
                call_8c012e2c(o, (Frame *)((&frame)));
            }
        }
    }
    return (int)(v11);
}
