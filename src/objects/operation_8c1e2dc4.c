typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_b0 Arg0_b0;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
    char unknown6c[0x4];
    Arg0_70 *f70;
    char unknown74[0x34];
    Arg0_a8 *fa8;
    char unknownac[0x4];
    Arg0_b0 *fb0;
    int fb4;
    char unknownb8[0x4];
    int fbc;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
struct Arg0_a8 {
    char f00;
    char unknown1[0x1];
    char f02;
};
struct Arg0_70 {
    char unknown0[0x4];
    int f04;
};
extern int call_8c1f556c(void *, Frame *);
extern void operation_8c1e2058(int, unsigned int);
extern void call_8c1e1988(Object *);
void operation_8c1e2dc4(Object *o)
{
    int v9;
    Frame frame;
    unsigned short v1;
    int t1;
    v1 = (unsigned short)o->f68;
    if (((v1 & 4)) != 0) {
        if (((o->f6a & 1)) != 0 && ((o->fbc & 0x20)) == 0) {
            if (((v1 & 0x10)) != 0) {
                return;
            }
            t1 = call_8c1f556c((void *)(&(&frame)->f45), (Frame *)((&frame)));
            if (t1 == 0) {
                return;
            }
            o->fb4 = (int)(t1);
            o->fa8->f02 = (int)(o->fb0);
            o->fa8 = (Arg0_a8 *)((int)o->fa8 - (o->fa8->f00 + 3));
            v9 = o->fa8->f02;
            o->fb0 = (Arg0_b0 *)(unsigned char)v9;
            operation_8c1e2058((int)o, (unsigned int)(o->fb0));
            return;
        }
        call_8c1e1988(o);
        return;
    }
    if (o->f70->f04 != 0) {
        o->f70->f04 -= 1;
    }
}
