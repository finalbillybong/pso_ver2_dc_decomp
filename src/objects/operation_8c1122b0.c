typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct S_g8c4d7bbc_42c_68 S_g8c4d7bbc_42c_68;
typedef struct S_g8c4d7bbc_42c_6c S_g8c4d7bbc_42c_6c;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
};
struct S_g8c4d7bbc_42c {
    char unknown0[0x68];
    S_g8c4d7bbc_42c_68 *f68;
    S_g8c4d7bbc_42c_6c *f6c;
};
struct Object {
    char unknown0[0x60];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x9c];
    Arg0_104 *f104;
    char unknown108[0x4];
    float f10c;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37dd28(int, void *);
extern void call_8c37df90(int, void *);
extern float call_8c37eb0c(void *);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c1122b0(Object *o)
{
    float t1;
    call_8c3827d8((void *)((*(S_g8c4d7bbc **)0x8c4d7bbc)->f42c->f6c));
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37dd28(0, (void *)(o->f60));
    call_8c37df90(0, (void *)(o->f64));
    t1 = call_8c37eb0c((void *)(o->f104));
    call_8c3829bc(0, 0.0f, o->f10c * t1, 0.0f);
    *(int *)0x8c575570 &= -0x401;
    call_8c3a944a((void *)((*(S_g8c4d7bbc **)0x8c4d7bbc)->f42c->f68));
    call_8c38ad10();
}
