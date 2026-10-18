typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct Object Object;
typedef struct Block_g8c46ee80_90 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_g8c46ee80_90;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18;
    float f1c;
    float f20;
    int f24;
    char unknown28[0x8];
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x4c];
    float f94;
    float f98;
    int f9c;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Block_g8c46ee80_90 f90;
    char unknown9c[0x10];
    S_g8c46ee80_ac *fac;
};
extern Vector3 g_8c33b1f4;
extern S_g8c46ee80 *g_8c46ee80;
extern float call_8c37e494(void *);
extern void call_8c37b630(void *);
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void call_8c38ad10(void);
extern float call_8c3845f0(void *, void *);
extern float call_8c12c714(float);
extern int operation_8c011214(int, int, int);
void operation_8c249a50(Object *o)
{
    Frame frame;
    float v9;
    float t1;
    float t2;
    float t3;
    int t5;
    if (g_8c46ee80 == 0) {
        return;
    }
    (&frame)->f18 = o->f3c - g_8c46ee80->f90.f00;
    (&frame)->f1c = 0.0f;
    (&frame)->f20 = o->f44 - g_8c46ee80->f90.f08;
    t1 = call_8c37e494((void *)(&(&frame)->f18));
    if (t1 != 0.0f) {
        call_8c37b630((void *)(&(&frame)->f18));
    }
    call_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c33b1f4;
    call_8c37df90(0, (void *)(g_8c46ee80->fac));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f24));
    call_8c38ad10();
    t2 = call_8c3845f0((void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
    o->f98 = t2;
    t3 = call_8c12c714(o->f98);
    if (!(0.0f > o->f98)) {
        v9 = call_8c12c714(1.0f - t3);
        if (v9 > 0.6f) {
            v9 = 0.6f;
        }
    } else {
        v9 = 0.0f;
    }
    o->f94 = v9 * 50.0f + 25.0f;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c46ee80->f90;
    t5 = operation_8c011214((int)(&frame), (int)(&o->f3c), 0x100);
    if (t5 != 0) {
        o->f9c = 1;
        return;
    }
    o->f9c = 0;
}
