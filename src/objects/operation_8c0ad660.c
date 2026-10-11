typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Vector3 f24;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    char unknown4c[0x1c];
    float f68;
    char unknown6c[0x8];
    float f74;
    int f78;
    short f7c;
    short f7e;
    int f80;
    float f84;
    float f88;
    float f8c;
    char unknown90[0x40];
    unsigned short fd0;
    char unknownd2[0x2];
    int fd4;
    float fd8;
    float fdc;
    float fe0;
    float fe4;
    float fe8;
    int fec;
    int ff0;
    char unknownf4[0x10];
    Arg0_104 *f104;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg0_20 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x78e];
    int f7b0;
};
extern void call_8c0a0058(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c051eb8(int, Object *);
extern void copy_actor_records(void *, void *, int);
Object *operation_8c0ad660(Object *o, int a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c0a0058((int)o);
    o->dispatch = (void *)0x8c265df0;
    o->fd0 = 0xffff;
    o->f24 = a2->f00;
    o->f84 = 0.0f;
    o->f88 = 0.0f;
    o->f8c = 0.0f;
    o->fd4 = 0;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f78 = 0;
    o->f20 = (Arg0_20 *)a1;
    o->f7e = a3;
    if (!(o->f7e >= 0)) {
        o->f7e = 0;
    } else {
        if (o->f7e >= 0x1e) {
            o->f7e = 0x1e;
        } else {
            o->f7e = a3;
        }
    }
    if (!(a3 >= 0)) {
        o->f7c = 0;
    } else {
        if (a3 >= 0xf) {
            o->f7c = 0xe;
        } else {
            o->f7c = a3;
        }
    }
    o->f80 = 0;
    o->f30 = 0.2f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->f68 = 3.0f;
    o->f74 = 150.0f;
    o->fd8 = 0.0f;
    o->fdc = 0.0f;
    o->fe0 = 0.0f;
    o->fe4 = 10.0f;
    o->fe8 = 1.0f;
    o->fec = 0;
    if ((unsigned int)4 > (unsigned int)o->f20->f20) {
        if (o->f20->f7b0 != 0) {
            o->ff0 = 0x80007;
            goto L_8c0ad7be;
        }
        o->ff0 = 0x80207;
    } else {
        o->ff0 = 0x80007;
    }
L_8c0ad7be:;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xe4);
    if (t1 != 0) {
        call_8c051eb8(t1, o);
    }
    o->f104 = (Arg0_104 *)t1;
    if (o->f104 != 0) {
        copy_actor_records(o->f104, &o->fd8, 1);
    }
    return o;
}
