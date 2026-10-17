typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
    char unknown6c[0x3c];
    Arg0_a8 *fa8;
    char unknownac[0x4];
    int fb0;
    int fb4;
    int fb8;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
struct Arg0_a8 {
    char unknown0[0x1];
    char f01;
};
extern void call_8c1f5406(void *, Frame *);
extern int operation_8c257e2c(int);
extern void call_8c1e1db4(Object *, Arg0_a8 *);
extern void call_8c1e1d04(Object *, void *);
extern void call_8c1e1a54(Object *);
void operation_8c1e2e84(Object *o)
{
    Frame frame;
    unsigned short v1;
    int v4;
    int t1;
    v1 = (unsigned short)o->f68;
    if (((v1 & 4)) != 0) {
        if (((o->f6a & 1)) != 0) {
            if (((v1 & 0x10)) != 0) {
                return;
            }
            do {
                call_8c1f5406((void *)(&(&frame)->f45), (Frame *)((&frame)));
                o->fb0 += 1;
                if (o->fb0 > o->fb4) {
                    o->fb0 = 1;
                }
                v4 = (int)o->fa8->f01;
                t1 = operation_8c257e2c((int)(&(&frame)->f45));
            } while (!(o->fb8 >= (t1 - v4)));
            call_8c1e1db4(o, (Arg0_a8 *)(o->fa8));
            call_8c1e1d04(o, (void *)(&(&frame)->f45));
            return;
        }
        call_8c1e1a54(o);
    }
}
