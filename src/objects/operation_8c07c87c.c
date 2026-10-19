typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a60 S_g8c469a60;
typedef struct S_g8c469a60_42c S_g8c469a60_42c;
typedef struct S_g8c469a60_42c_18 S_g8c469a60_42c_18;
typedef struct S_g8c469a64 S_g8c469a64;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
struct S_g8c469a60 {
    char unknown0[0x42c];
    S_g8c469a60_42c *f42c;
};
struct S_g8c469a60_42c {
    char unknown0[0x18];
    S_g8c469a60_42c_18 *f18;
};
extern S_g8c469a60 *g_8c469a60;
extern S_g8c469a64 *g_8c469a64;
extern void call_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c07c87c(Object *o)
{
    call_8c38ae68();
    call_8c3827d8(g_8c469a64);
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    call_8c3aa716((void *)(g_8c469a60->f42c->f18));
    call_8c38ad10();
}
