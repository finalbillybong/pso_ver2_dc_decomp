typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33ff6c S_L8c33ff6c;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c18e8a0 S_c8c18e8a0;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    unsigned char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    float f08;
};
struct S_L8c33ff6c {
    float f00;
    float f04;
    int f08;
    float f0c;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c33ff6c g_8c33ff6c;
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c18e8a0(void *, int);
extern void operation_8c0368a8(void *);
extern void operation_8c256dcc(Object *);
void operation_8c256c7c(Object *o)
{
    Frame frame;
    int flags;
    float b;
    float a;
    float c;
    float d;
    int v;
    int sel;
    if (--o->f20 < 0) {
        o->f20 = 0;
    }
    if (o->f20 == 0) {
        flags = g_8c41cba0.f20;
        if ((flags & 0x30000) != 0) {
            frame.f00 = 0x92;
            frame.f01 = 3;
            frame.f04 = call_8c18e8a0(g_8c418248, 4);
            sel = frame.f04;
            switch (sel) {
            case 0:
            case 1:
            case 3:
                switch (sel) {
                case 0:
                    a = 0.0933333337f;
                    b = g_8c33ff6c.f00;
                    c = 0.5f;
                    d = 0.0333333351f;
                    break;
                case 1:
                    a = 0.2f;
                    d = 1.0f;
                    c = 2.0f;
                    b = g_8c33ff6c.f04;
                    break;
                case 3:
                    a = 5.8f;
                    c = 32.0f;
                    b = g_8c33ff6c.f0c;
                    d = 3.0f;
                    break;
                }
                if ((flags & 0x10000) != 0) {
                    b += a;
                    if (b > c) {
                        b = c;
                    }
                } else {
                    b -= a;
                    if (d > b) {
                        b = d;
                    }
                }
                frame.f08 = b;
                break;
            case 2:
                v = g_8c33ff6c.f08;
                if ((flags & 0x10000) != 0) {
                    v += 0x1999;
                } else {
                    v -= 0x1999;
                }
                frame.f08 = (float)(unsigned short)v;
                break;
            }
            operation_8c0368a8((void *)&frame);
            o->f20 = 0x1e;
        }
    }
    operation_8c256dcc(o);
}
