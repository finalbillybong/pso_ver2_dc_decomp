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
extern void call_8c382a40(int);
extern void call_8c37df90(int, void *);
extern void call_8c1b3dbc(Object *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c1b3c80(Object *o)
{
    call_8c1086fc();
    call_8c38ae68();
    call_8c382a40((int)((char *)o + 0x3c));
    call_8c37df90(0, o->f64);
    call_8c1b3dbc(o);
    call_8c38ad10();
    call_8c391cc4();
}
