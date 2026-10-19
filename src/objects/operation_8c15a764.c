typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0x60];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x7c];
    Arg0_e4 *fe4;
    Arg0_e8 *fe8;
};
extern int g_8c575570;
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37dd28(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c15a764(Object *o)
{
    call_8c3827d8((void *)(o->fe8));
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37dd28(0, (void *)(o->f60));
    call_8c37df90(0, (void *)(o->f64));
    g_8c575570 &= -0x401;
    call_8c3a944a((void *)(o->fe4));
    call_8c38ad10();
}
