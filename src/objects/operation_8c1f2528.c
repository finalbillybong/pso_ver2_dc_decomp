typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_64 Arg0_24_64;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    int f38;
    int f3c;
    int f40;
    char unknown44[0x88];
    float fcc;
};
struct Arg0_24 {
    char unknown0[0x64];
    Arg0_24_64 *f64;
    char unknown68[0x2a0];
    short f308;
};
struct Arg0_34 {
    char unknown0[0x1c];
    int f1c;
    int f20;
    int f24;
};
struct Frame {
    Vector3 f00;
};
extern int call_8c07f914(void *);
extern void call_8c38ade4(void *);
extern void call_8c382a40(void *);
extern int call_8c1f232c(Object *);
extern void call_8c37df90(int, int);
extern void call_8c37ddbc(int, int, int, int);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3be280(int, Frame *, int);
extern void call_8c38ad10(void);
int operation_8c1f2528(Object *o, int a1)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    t1 = call_8c07f914((void *)(o->f20));
    if (t1 == 0 && a1 != 0) {
        call_8c38ade4((void *)((void *)0x8c400500));
        call_8c382a40((void *)(((char *)o + 0xa4)));
        v1 = (int)(o->f24->f308 == 7);
        if (v1 != 0) {
            t2 = call_8c1f232c(o);
            call_8c37df90(0, t2);
        } else {
            call_8c37df90(0, (int)(o->f24->f64));
        }
        call_8c382a40((void *)(((char *)o + 0xb0)));
        if (o->f34 != 0) {
            call_8c37ddbc(0, (int)(o->f34->f1c + (int)o->f38), (int)(o->f34->f20 + (int)o->f3c), (int)(o->f34->f24 + (int)o->f40));
        }
        call_8c37e2e4(0, o->fcc, o->fcc, o->fcc);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c32c418;
        call_8c3be280(0, (Frame *)((&frame)), a1);
        call_8c38ad10();
        return 1;
    }
    return 0;
}
