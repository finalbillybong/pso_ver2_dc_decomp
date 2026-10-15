typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x10];
    float f14;
    int dispatch;
    float f1c;
    float f20;
    float f24;
    short f28;
    short f2a;
};
extern int call_8c0f7928(Object *);
extern int call_8c05fbf8(int, int, int, int);
extern void emit_control_60320(int, int, int);
extern void call_8c0e15a8(Object *);
void operation_8c0f72e4(Object *o)
{
    float v23;
    int t1;
    int t2;
    if (((o->tag & 0x80)) != 0) {
        t1 = call_8c0f7928(o);
        o->dispatch = (int)(t1);
    }
    if ((float)o->f28 != o->f24) {
        if (o->f20 <= 0.0f || (float)o->f28 <= 0.0f) {
            v23 = (float)0.0f;
            goto L_8c0f7330;
        }
        v23 = (float)((float)o->f28 * o->f14 / o->f20);
L_8c0f7330:;
        o->f1c = v23;
        if (((o->tag & 0x40)) != 0 && o->f14 < o->f1c) {
            o->f1c = o->f14;
        }
        o->f28 = (int)o->f24;
        o->f2a = 0x24;
    }
    o->tag &= -9;
    if (o->f2a != 0) {
        o->f2a -= 1;
        if (o->f2a != 0) {
            return;
        }
        if (((o->tag & 0x20)) == 0) {
            return;
        }
        t2 = call_8c05fbf8(0x20025, 0, 0, 0);
        emit_control_60320(t2, -0x100, 0);
        return;
    }
    call_8c0e15a8(o);
}
