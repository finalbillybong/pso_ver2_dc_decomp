typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_a8 Arg0_a8;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x6];
    Arg0_70 *f70;
    char unknown74[0x34];
    Arg0_a8 *fa8;
    char unknownac[0x4];
    int fb0;
    int fb4;
    int fb8;
    int fbc;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x44];
    char f8a;
    char unknown8b[0x44];
    char fcf;
    char unknownd0[0x44];
};
struct Arg0_a8 {
    char unknown0[0x1];
    char f01;
};
extern void call_8c1f53e8(void *, void *);
extern int operation_8c257e2c(int);
extern void call_8c1e1db4(Object *, Arg0_a8 *);
extern void call_8c1e1d04(Object *, void *);
extern void call_8c1f5406(void *, Frame *);
extern void call_8c1e1784(Object *);
extern void call_8c04bfc8(void *, int);
void operation_8c1e2890(Object *o)
{
    Frame frame;
    unsigned short v1;
    int v4;
    int v7;
    int t1;
    int t2;
    v1 = (unsigned short)o->f68;
    if (((v1 & 4)) != 0) {
        if (((o->fbc & 0x20)) != 0) {
            if (((v1 & 0x10)) != 0) {
                return;
            }
            do {
                call_8c1f53e8((void *)(&(&frame)->fcf), (void *)(&(&frame)->f8a));
                o->fb0 -= 1;
                if (!(o->fb0 > 0)) {
                    o->fb0 = (int)(o->fb4);
                }
                v4 = (int)o->fa8->f01;
                t1 = operation_8c257e2c((int)(&(&frame)->fcf));
            } while (!(o->fb8 >= (t1 - v4)));
            call_8c1e1db4(o, (Arg0_a8 *)(o->fa8));
            call_8c1e1d04(o, (void *)(&(&frame)->fcf));
            return;
        }
        if (((v1 & 0x10)) != 0) {
            return;
        }
        do {
            call_8c1f5406((void *)(&(&frame)->f45), (Frame *)((&frame)));
            o->fb0 += 1;
            if (o->fb0 > o->fb4) {
                o->fb0 = 1;
            }
            v7 = (int)o->fa8->f01;
            t2 = operation_8c257e2c((int)(&(&frame)->f45));
        } while (!(o->fb8 >= (t2 - v7)));
        call_8c1e1db4(o, (Arg0_a8 *)(o->fa8));
        call_8c1e1d04(o, (void *)(&(&frame)->f45));
        return;
    }
    if (((v1 & 2)) != 0) {
        call_8c1e1784(o);
        return;
    }
    if (((o->fbc & 0x80)) == 0) {
        call_8c04bfc8((void *)(o->f70), 0x20);
    }
}
