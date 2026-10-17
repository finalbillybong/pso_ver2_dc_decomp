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
    char unknown68[0x74];
    int fdc;
    int fe0;
};
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void call_8c38ad10(void);
void operation_8c05b0ec(Object *o)
{
    int v1;
    int v2;
    call_8c38ae68();
    call_8c37b5c4(0);
    call_8c382a40((void *)(((char *)o + 0x3c)));
    call_8c37df90(0, (void *)(o->f64));
    v1 = (int)0;
    while (o->fe0 > v1) {
        v2 = (int)((int)o->fdc + v1 * 0x2c);
        call_8c3be280(0, v2, (int)(v2 + 0x1c));
        v1 = (int)(v1 + 1);
    }
    call_8c38ad10();
}
