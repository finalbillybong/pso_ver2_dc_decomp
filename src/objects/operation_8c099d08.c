typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x1c];
} Block_frame_8;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    int f24;
    int f28;
    float f2c;
};
struct Frame {
    float f00;
    S_frame_4 *f04;
    Block_frame_8 f08;
};
struct Arg0_20 {
    char unknown0[0x48];
    float f48;
    float f4c;
};
struct Arg0_10 {
    char unknown0[0x30];
    int f30;
};
extern void call_8c0a2858(void *);
extern void call_8c09a658(void *, Frame *);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern float call_8c12c714(float);
extern int operation_8c09a64c(int);
extern int operation_8c09a640(int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c099d08(Object *o)
{
    Frame frame;
    float v;
    float t;
    float dx;
    float dy;
    v = *(float *)0x8c300d60;
    if (o->f28 != 0) {
        if (o->f2c == 1.0f) {
            v += -0.0333333351f;
            if (0.0f > v) {
                v = 0.0f;
            }
        }
    } else {
        t = 1.0f - o->f2c;
        v = v > t ? v : t;
    }
    *(Block44 *)&(&frame)->f08 = *(Block44 *)0x8c300d08;
    (&frame)->f08.f0c = (v * 0.160000026f + 0.5f) * 640.0f;
    call_8c0a2858((void *)(&(&frame)->f08));
    *(float *)0x8c300d60 = v;
    if (o->f24 == 0) {
        o->f24 = 1;
        return;
    }
    if (o->f28 == 0) {
        if ((o->f2c += -0.0833333358f) <= 0.0f) {
            o->f2c = 0.0f;
            o->f04 |= 1;
        }
        return;
    }
    if ((o->f2c += 0.166666672f) > 1.0f) {
        o->f2c = 1.0f;
    }
    call_8c09a658((void *)(&(&frame)->f04), (Frame *)((&frame)));
    dx = (&frame)->f00 * call_8c37eb0c((void *)((&frame)->f04)) * 0.0166666675f;
    dy = (&frame)->f00 * -call_8c38c154((void *)((&frame)->f04)) * 0.0166666675f;
    if ((call_8c12c714(dx) + call_8c12c714(dy)) == 0.0f) {
        if (operation_8c09a64c(0x80) != 0) {
            dx = 0.0133333346f;
        } else if (operation_8c09a64c(0x40) != 0) {
            dx = -0.0133333346f;
        }
        if (operation_8c09a64c(0x20) != 0) {
            dy = 0.0133333346f;
        } else if (operation_8c09a64c(0x10) != 0) {
            dy = -0.0133333346f;
        }
    }
    o->f20->f48 += dx;
    o->f20->f4c += dy;
    if (o->f20->f48 > 0.99f) {
        o->f20->f48 -= 0.99f;
    } else if (0.0f > o->f20->f48) {
        o->f20->f48 += 0.99f;
    }
    if (o->f20->f4c > 0.99f) {
        o->f20->f4c = 0.99f;
    } else if (0.0f > o->f20->f4c) {
        o->f20->f4c = 0.0f;
    }
    if (operation_8c09a640(6) != 0) {
        call_8c05fbf8(0x50004, 0, 0, 0);
        o->f10->f30 = 0;
        o->f28 = 0;
    }
}
