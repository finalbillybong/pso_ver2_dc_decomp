typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern void call_8c1086fc(void);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c1b13f4(Object *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c1b12bc(Object *o)
{
    call_8c1086fc();
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    call_8c1b13f4(o);
    call_8c38ad10();
    call_8c391cc4();
}
