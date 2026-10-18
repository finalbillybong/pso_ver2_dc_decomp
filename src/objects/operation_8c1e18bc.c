typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_b0 Arg0_b0;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x46];
    Arg0_b0 *fb0;
    int fb4;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
extern int call_8c1f5530(Frame *, void *);
extern void call_8c1e1e2c(Object *, Frame *);
extern void call_8c1f5406(Frame *, void *);
extern void call_8c1f554e(Frame *, void *);
extern void operation_8c1e2058(int, unsigned int);
extern void call_8c1e1c68(Object *, void *);
extern int call_8c1e1b64(Object *, Frame *, void *);
extern void call_8c1e1bb8(Object *, Frame *, void *);
void operation_8c1e18bc(Object *o)
{
    Frame frame;
    int t1;
    int v44;
    int v45;
    int t2;
    if (((o->f68 & 0x10)) == 0) {
        t1 = call_8c1f5530((Frame *)((&frame)), (void *)(&(&frame)->f45));
        if (t1 != 0) {
            v44 = (int)t1;
            v45 = (int)1;
            call_8c1e1e2c(o, (Frame *)((&frame)));
            goto L_8c1e192c;
L_8c1e18fa:;
            call_8c1f5406((Frame *)((&frame)), (void *)(&(&frame)->f45));
            v45 = (int)(v45 + 1);
            if (v44 >= v45) {
                goto L_8c1e192c;
            }
            call_8c1f554e((Frame *)((&frame)), (void *)(&(&frame)->f45));
            operation_8c1e2058((int)o, (unsigned int)(o->fb0));
            call_8c1e1c68(o, (void *)(&(&frame)->f45));
            return;
L_8c1e192c:;
            t2 = call_8c1e1b64(o, (Frame *)((&frame)), (void *)(&(&frame)->f45));
            if (t2 == 0) {
                goto L_8c1e18fa;
            }
            o->fb0 = (Arg0_b0 *)v45;
            o->fb4 = (int)(t1);
            call_8c1e1bb8(o, (Frame *)((&frame)), (void *)(&(&frame)->f45));
        }
    }
}
