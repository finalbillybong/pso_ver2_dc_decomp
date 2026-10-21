typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x7c];
    Arg0_7c *f7c;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x1c];
    float f34;
};
struct Frame {
    float f00;
    float f04;
};
struct Arg0_7c {
    char unknown0[0xbc];
    int fbc;
};
extern int g_8c467188;
extern char g_8c32b540[];
extern void operation_8c19a370(int, int, int, float, float);
extern void call_8c19a3a0(Frame *, void *, int, float);
void operation_8c1dfee8(Object *o, Arg1 *a1)
{
    Frame frame;
    float v42;
    int v1;
    if (o->f7c != 0 && g_8c467188 == 0) {
        v42 = (float)(-1.0f / a1->f34);
        (&frame)->f00 = a1->f10;
        (&frame)->f04 = a1->f14;
        operation_8c19a370((int)a1, 0, 0, v42, 100000.0f);
        v1 = (int)o->f7c->fbc;
        if (((v1 & 1)) == 0) {
            call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x23)), -1, 1000000.0f);
            return;
        }
        if (((v1 & 2)) != 0) {
            call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x2a)), -1, 1000000.0f);
            return;
        }
        if (((v1 & 4)) != 0) {
            if (((v1 & 8)) != 0) {
                call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x31)), -1, 1000000.0f);
            } else {
                call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x3e)), -1, 1000000.0f);
            }
            return;
        }
        if (((v1 & 8)) != 0) {
            call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x4b)), -1, 1000000.0f);
            return;
        }
        call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32b540 + 0x52)), -1, 1000000.0f);
    }
}
