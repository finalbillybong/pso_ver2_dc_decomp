typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37e0c8(int, void *, void *, void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c0803ec(Object *o)
{
    void *pm1;
    void *pm2;
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x3c)));
    pm1 = (void *)(o->f68);
    pm2 = (void *)(o->f60);
    call_8c37e0c8(0, pm2, (void *)(o->f64), pm1);
    call_8c3a944a((void *)(o->f38));
    call_8c38ad10();
}
