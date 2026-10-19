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
    char unknown6c[0x1];
    char f6d;
    char unknown6e[0x3a];
    Arg0_a8 *fa8;
    char unknownac[0x4];
    int fb0;
    int fb4;
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
extern void call_8c1e1784(Object *);
extern int call_8c1f5530(void *, void *);
extern void call_8c1e1e2c(Object *, void *);
extern void call_8c1e1bb8(Object *, void *, void *);
extern void call_8c1f55a8(void *, Frame *);
extern void call_8c1e1db4(Object *, void *);
extern void call_8c1e1d04(Object *, void *);
extern int call_8c21c718(int);
void operation_8c1e334c(Object *o)
{
    Frame frame;
    char *v1;
    int t1;
    int t2;
    if (((o->f68 & 2)) != 0) {
        if (((o->f68 & 4)) == 0) {
            call_8c1e1784(o);
            if (((o->f68 & 0x10)) != 0) {
                return;
            }
            v1 = (char *)o->fb4;
            do {
                o->fb4 = (int)(v1);
                t1 = call_8c1f5530((void *)(&(&frame)->f8a), (void *)(&(&frame)->fcf));
                v1 = (char *)t1;
            } while (v1 != 0);
            call_8c1e1e2c(o, (void *)(&(&frame)->f8a));
            (&frame)->f8a = 0;
            call_8c1e1bb8(o, (void *)(&(&frame)->f8a), (void *)(&(&frame)->f8a));
        }
        call_8c1f55a8((void *)(&(&frame)->f45), (Frame *)((&frame)));
        o->fb0 = 0xf1;
        call_8c1e1db4(o, (void *)(o->fa8));
        call_8c1e1d04(o, (void *)(&(&frame)->f45));
        return;
    }
    if (((o->f6a & 8)) == 0) {
        t2 = call_8c21c718(0xe);
        if (t2 != 0) {
            o->f6d = 0xe;
            o->f68 |= 0x81;
        }
    }
}
