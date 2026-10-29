typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0ddf28 S_c8c0ddf28;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x29];
    unsigned char f81;
    char unknown82[0x1];
    char f83;
};
struct S_c8c0ddf28 {
    float f00;
    float f04;
};
struct Frame {
    float f00;
    float f04;
};
extern float g_8c4e2ba8;
extern float g_8c4e2bac;
extern float g_8c4e2bb0;
extern float g_8c4e2bb4;
extern int call_8c0dfe4c(Object *);
extern int call_8c0dde00(Object *);
extern S_c8c0ddf28 *operation_8c0ddf28(char);
extern void operation_8c0ddef0(void *);
extern void call_8c0e0060(Object *, int, Frame *);
void operation_8c0e0f6c(Object *o)
{
    Frame frame;
    float v5;
    int t1;
    int t2;
    S_c8c0ddf28 *t3;
    t1 = call_8c0dfe4c(o);
    if (t1 != 0) {
        if (o->f83 == -1) {
            o->f81 |= 1;
            o->f34 |= 0x200;
            t2 = call_8c0dde00(o);
            o->f83 = t2;
        }
        t3 = operation_8c0ddf28(o->f83);
        o->f38 = t3->f00 - o->f40 * 0.5f;
        o->f3c = t3->f04 - o->f44 * 0.5f;
        {
            float lim;
            lim = g_8c4e2ba8 + 20.0f;
            if (lim > o->f38) {
                o->f38 = lim;
            }
            {
                float s;
                lim = g_8c4e2bb0 - 20.0f;
                v5 = o->f50;
                s = 1.0f;
                lim -= v5 * s;
            }
            if (o->f38 > lim) {
                o->f38 = lim;
            }
            lim = g_8c4e2bac + 40.0f;
            if (lim > o->f3c) {
                o->f3c = lim;
            }
            {
                float s;
                lim = g_8c4e2bb4 - 40.0f;
                v5 = o->f54;
                s = 1.0f;
                lim -= v5 * s;
            }
            if (!(o->f3c > lim)) {
                return;
            }
            o->f3c = lim;
        }
        return;
    }
    if (o->f83 != -1) {
        o->f81 = (unsigned int)o->f81 >> 1 << 1;
        o->f34 &= -0x201;
        operation_8c0ddef0((void *)(&o->f83));
    }
    call_8c0e0060(o, 0, (Frame *)((&frame)));
    o->f38 = (&frame)->f00 - o->f40 * 0.5f;
    o->f3c = (&frame)->f04 - o->f44 * 0.5f;
}
