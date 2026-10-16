typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x9c];
    float f104;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c391c94(void);
extern void call_8c3827d8(void *);
extern int operation_8c03d338(void);
extern void call_8c38c0f0(Frame *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e390(void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c11f2e4(Object *o)
{
    Frame frame;
    int t1;
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c391c94();
        call_8c3827d8((void *)(o->f28));
        g_8c46f560 = (int)(g_8c575570);
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
        g_8c575570 |= 0x20;
        (&frame)->f0c = 0.0f;
        t1 = operation_8c03d338();
        if (t1 == 1) {
            (&frame)->f00 = 0.0f;
        } else {
            (&frame)->f00 = o->f104;
        }
        call_8c38c0f0((Frame *)((&frame)));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        call_8c37e390((void *)(((char *)o + 0x10c)));
        call_8c3aa716((void *)(o->f38));
        call_8c38ad10();
        call_8c38c0f0((Frame *)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
        call_8c391cc4();
    }
}
