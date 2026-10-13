typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fac4 S_g8c46fac4;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_f8 Arg0_f8;
struct Object {
    char unknown0[0xf8];
    Arg0_f8 *ff8;
    char unknownfc[0x4];
    Arg0_100 *f100;
    char unknown104[0xc];
    Arg0_110 *f110;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c0e8cf8(Object *o)
{
    call_8c3827d8((void *)(*(S_g8c46fac4 **)0x8c46fac4));
    call_8c3827d8((void *)(o->f110));
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x128)));
    call_8c37df90(0, (void *)(o->ff8));
    call_8c37e2e4(0, 1.3f, 1.3f, 1.3f);
    *(int *)0x8c575570 &= -0x401;
    call_8c3aa716((void *)(o->f100));
    call_8c38ad10();
}
