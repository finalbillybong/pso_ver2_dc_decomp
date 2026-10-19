typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_fc Arg0_fc;
struct Object {
    char unknown0[0xf4];
    Arg0_f4 *ff4;
    Arg0_f8 *ff8;
    Arg0_fc *ffc;
    Arg0_100 *f100;
};
extern int g_8c575570;
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c111c98(Object *o)
{
    call_8c3827d8((void *)(o->f100));
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->ff4));
    call_8c37dd28(0, (void *)(o->ff8));
    g_8c575570 &= -0x401;
    call_8c3a944a((void *)(o->ffc));
    call_8c38ad10();
}
