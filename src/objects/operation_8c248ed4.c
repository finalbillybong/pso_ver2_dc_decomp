typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_60 Arg0_60;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x24];
    Arg0_5c *f5c;
    Arg0_60 *f60;
};
extern void call_8c38ae68(void);
extern void call_8c391c94(void);
extern void apply_resource_3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37e0c8(int, void *, void *, void *);
extern void call_8c3aa716(void *);
extern void call_8c391cc4(void);
extern void call_8c38ad10(void);
void operation_8c248ed4(Object *o)
{
    if (o->f5c != 0 && o->f60 != 0) {
        call_8c38ae68();
        call_8c391c94();
        apply_resource_3827d8((void *)(o->f60));
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37e0c8(0, (void *)(o->f2c), (void *)(o->f30), (void *)(o->f34));
        call_8c3aa716((void *)(o->f5c));
        call_8c391cc4();
        call_8c38ad10();
    }
}
