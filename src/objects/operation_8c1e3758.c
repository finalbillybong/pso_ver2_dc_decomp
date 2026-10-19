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
    char unknown6a[0x3e];
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
    int f114;
    char unknown118[0x41];
    char f159;
    char unknown15a[0x46];
};
extern void call_8c1e1784(Object *);
extern int call_8c1f5530(void *, void *);
extern void call_8c1e1e2c(Object *, void *);
extern void call_8c1e1bb8(Object *, void *, void *);
extern void call_8c1f55a8(void *, void *);
extern void call_8c1e1db4(Object *, void *);
extern void call_8c1e1d04(Object *, void *);
extern void call_8c1f55c6(void *, Frame *);
void operation_8c1e3758(Object *o)
{
    Frame frame;
    char *v1;
    int t1;
    if (((o->f68 & 2)) != 0) {
        if (((o->f68 & 4)) == 0) {
            call_8c1e1784(o);
            if (((o->f68 & 0x10)) != 0) {
                return;
            }
            v1 = (char *)o->fb4;
            do {
                o->fb4 = (int)(v1);
                t1 = call_8c1f5530((void *)(&(&frame)->f114), (void *)(&(&frame)->f159));
                v1 = (char *)t1;
            } while (v1 != 0);
            call_8c1e1e2c(o, (void *)(&(&frame)->f114));
            *(char *)&(&frame)->f114 = 0;
            call_8c1e1bb8(o, (void *)(&(&frame)->f114), (void *)(&(&frame)->f114));
        }
        if (o->fb0 != 0xf1) {
            call_8c1f55a8((void *)(&(&frame)->fcf), (void *)(&(&frame)->f8a));
            o->fb0 = 0xf1;
            call_8c1e1db4(o, (void *)(o->fa8));
            call_8c1e1d04(o, (void *)(&(&frame)->fcf));
            return;
        }
        call_8c1f55c6((void *)(&(&frame)->f45), (Frame *)((&frame)));
        o->fb0 = 0xf0;
        call_8c1e1db4(o, (void *)(o->fa8));
        call_8c1e1d04(o, (void *)(&(&frame)->f45));
    }
}
