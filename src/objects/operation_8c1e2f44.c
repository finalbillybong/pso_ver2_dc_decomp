typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_b0 Arg0_b0;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
    char unknown6c[0x3c];
    Arg0_a8 *fa8;
    char unknownac[0x4];
    Arg0_b0 *fb0;
    int fb4;
    int fb8;
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
    char f00;
    char f01;
    char f02;
};
extern void call_8c1f53e8(void *, void *);
extern int operation_8c257e2c(int);
extern void call_8c1e1db4(Object *, Arg0_a8 *);
extern void call_8c1e1d04(Object *, void *);
extern int call_8c1f556c(void *, Frame *);
extern void operation_8c1e2058(int, unsigned int);
void operation_8c1e2f44(Object *o)
{
    Frame frame;
    unsigned short v1;
    int v4;
    int v5;
    int t1;
    int t2;
    v1 = (unsigned short)o->f68;
    if (((v1 & 4)) != 0) {
        if (((o->f6a & 1)) != 0) {
            if (((v1 & 0x10)) != 0) {
                return;
            }
            do {
                call_8c1f53e8((void *)(&(&frame)->fcf), (void *)(&(&frame)->f8a));
                o->fb0 = (Arg0_b0 *)((int)o->fb0 + -1);
                if (!((int)(o->fb0) > 0)) {
                    o->fb0 = (Arg0_b0 *)o->fb4;
                }
                v4 = (int)o->fa8->f01;
                t1 = operation_8c257e2c((int)(&(&frame)->fcf));
            } while (!(o->fb8 >= (t1 - v4)));
            call_8c1e1db4(o, (Arg0_a8 *)(o->fa8));
            call_8c1e1d04(o, (void *)(&(&frame)->fcf));
            return;
        }
        if (((v1 & 0x10)) == 0) {
            t2 = call_8c1f556c((void *)(&(&frame)->f45), (Frame *)((&frame)));
            if (t2 != 0) {
                o->fb4 = (int)(t2);
                o->fa8->f02 = (int)(o->fb0);
                o->fa8 = (Arg0_a8 *)((int)o->fa8 - (o->fa8->f00 + 3));
                v5 = (int)o->fa8->f02;
                o->fb0 = (Arg0_b0 *)(unsigned char)v5;
                operation_8c1e2058((int)o, (unsigned int)(o->fb0));
            }
        }
    }
}
