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
    unsigned short f6a;
    char unknown6c[0x4];
    Arg0_70 *f70;
    char unknown74[0x34];
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
struct Arg0_70 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
    int f10;
};
extern void call_8c1f53e8(void *, Frame *);
extern int operation_8c257e2c(int);
extern void call_8c1e1db4(Object *, Arg0_a8 *);
extern void operation_8c1e1d04(void *, int);
extern void call_8c04beb4(Arg0_70 *);
extern void call_8c04bd00(void *);
void operation_8c1e2bcc(Object *o)
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
                call_8c1f53e8((void *)(&(&frame)->f45), (Frame *)((&frame)));
                o->fb0 -= 1;
                if (!(o->fb0 > 0)) {
                    o->fb0 = (int)(o->fb4);
                }
                v4 = (int)o->fa8->f01;
                t1 = operation_8c257e2c((int)(&(&frame)->f45));
            } while (!(o->fb8 >= (t1 - v4)));
            call_8c1e1db4(o, (Arg0_a8 *)(o->fa8));
            operation_8c1e1d04((void *)o, (int)(&(&frame)->f45));
        } else {
            o->f68 &= -5;
        }
        return;
    }
    if (o->f70->f04 != 0) {
        o->f70->f04 -= 1;
        call_8c04beb4((Arg0_70 *)(o->f70));
        if (((o->f68 & 2)) != 0 && o->f70->f10 == 0) {
            call_8c04bd00((void *)(((char *)o + 0x8c)));
            o->f70 = (Arg0_70 *)((char *)o + 0x74);
            o->f68 &= -0x27;
        }
    }
}
