typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv52 S_vv52;
typedef struct S_vv55 S_vv55;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x3e];
    S_vv52 *fa8;
    int fac;
    int fb0;
    int fb4;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
struct S_vv52 {
    char unknown0[0x1];
    char f01;
    char f02;
};
struct S_vv55 {
    char unknown0[0x2];
    unsigned char f02;
};
extern int call_8c1f558a(Frame *, void *);
extern void call_8c1e1e2c(Object *, Frame *);
extern void call_8c1f5406(Frame *, void *);
extern void call_8c1f556c(Frame *, void *);
extern void operation_8c1e2058(int, unsigned int);
extern int operation_8c1e1b64(void *, int, int);
extern void call_8c1e1bb8(Object *, Frame *, void *);
void operation_8c1e1a54(Object *o)
{
    Frame frame;
    int t1;
    int v51;
    int v53;
    S_vv52 *v52;
    S_vv52 *v55;
    int t2;
    if (((o->f68 & 0x10)) == 0) {
        t1 = call_8c1f558a((Frame *)((&frame)), (void *)(&(&frame)->f45));
        if (t1 != 0) {
            v51 = t1;
            v52 = (S_vv52 *)o->fa8;
            o->fa8 = (S_vv52 *)((char *)v52 + (v52->f01 + 3));
            v55 = (S_vv52 *)o->fa8;
            if ((unsigned int)v55 > (unsigned int)o->fac) {
                v53 = 1;
                call_8c1e1e2c(o, (Frame *)((&frame)));
                while (operation_8c1e1b64((void *)o, (int)(&frame), (int)(&(&frame)->f45)) == 0) {
                    call_8c1f5406((Frame *)((&frame)), (void *)(&(&frame)->f45));
                    v53++;
                    if (!(v51 >= v53)) {
                        o->fa8 = v52;
                        call_8c1f556c((Frame *)((&frame)), (void *)(&(&frame)->f45));
                        operation_8c1e2058((int)o, (unsigned int)(o->fb0));
                        return;
                    }
                }
                v52->f02 = o->fb0;
                o->fb0 = v53;
                call_8c1e1bb8(o, (Frame *)((&frame)), (void *)(&(&frame)->f45));
            } else {
                v53 = v55->f02;
                t2 = (unsigned char)v53;
                v52->f02 = o->fb0;
                o->fb0 = t2;
                operation_8c1e2058((int)o, (unsigned int)t2);
            }
            o->fb4 = t1;
        }
    }
}
