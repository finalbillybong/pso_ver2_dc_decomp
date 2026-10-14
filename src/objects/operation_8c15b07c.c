typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dab60 S_g8c4dab60;
typedef struct S_g8c4dab64 S_g8c4dab64;
typedef struct S_g8c4dab68 S_g8c4dab68;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x2c];
    float f2c;
    float f30;
    Arg0_34 *f34;
};
extern void call_8c1086fc(void);
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c37df90(int, void *);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c3a9436(void *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c15b07c(Object *o)
{
    call_8c1086fc();
    call_8c3827d8((void *)(*(S_g8c4dab68 **)0x8c4dab68));
    call_8c38ae68();
    *(int *)0x8c575570 &= -0x401;
    call_8c37df90(0, (void *)(o->f34));
    call_8c38ae68();
    call_8c3829bc(0, 0.0f, 0.0f, o->f30);
    call_8c3a9436((void *)(*(S_g8c4dab64 **)0x8c4dab64));
    call_8c3829bc(0, 0.0f, o->f2c, 0.0f);
    call_8c3a9436((void *)(*(S_g8c4dab60 **)0x8c4dab60));
    call_8c38ad10();
    call_8c38ad10();
    call_8c391cc4();
}
