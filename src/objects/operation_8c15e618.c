typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_3f8 Arg0_3f8;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x390];
    Arg0_3f8 *f3f8;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(int);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c161c78(void *);
extern void call_8c01cc90(Object *);
extern void call_8c161ce4(void *);
extern void call_8c38ad10(void);
void operation_8c15e618(Object *o)
{
    call_8c38ae68();
    call_8c382a40((int)((char *)o + 0x3c));
    call_8c37df90(0, o->f64);
    call_8c3827d8(o->f28);
    call_8c161c78(o->f3f8);
    call_8c01cc90(o);
    call_8c161ce4(o->f3f8);
    call_8c38ad10();
}
