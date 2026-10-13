typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed84 S_g8c46ed84;
typedef struct S_g8c46ed84_42c S_g8c46ed84_42c;
typedef struct S_g8c46ed84_42c_8 S_g8c46ed84_42c_8;
typedef struct S_g8c46ed84_42c_c S_g8c46ed84_42c_c;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct S_g8c46ed84 {
    char unknown0[0x42c];
    S_g8c46ed84_42c *f42c;
};
struct S_g8c46ed84_42c {
    char unknown0[0x8];
    S_g8c46ed84_42c_8 *f08;
    S_g8c46ed84_42c_c *f0c;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern void call_8c391c94(void);
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c09f328(Object *o)
{
    call_8c391c94();
    call_8c3827d8((void *)((*(S_g8c46ed84 **)0x8c46ed84)->f42c->f0c));
    call_8c38ae68();
    call_8c37df90(0, (void *)(o->f64));
    call_8c3a944a((void *)((*(S_g8c46ed84 **)0x8c46ed84)->f42c->f08));
    call_8c38ad10();
    call_8c391cc4();
}
