typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469bc0 S_g8c469bc0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x8c];
    Arg0_f4 *ff4;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(int);
extern void call_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c0814c0(Object *o)
{
    call_8c3827d8(*(S_g8c469bc0 **)0x8c469bc0);
    call_8c38ae68();
    call_8c382a40((int)((char *)o + 0x3c));
    call_8c37df90(0, o->f64);
    call_8c3a944a(o->ff4);
    call_8c38ad10();
}
