typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x2c];
    int f2c;
    Arg0_30 *f30;
    char unknown34[0x28];
    Arg0_5c *f5c;
    Arg0_60 *f60;
    Arg0_64 *f64;
};
extern void call_8c38ae68(void);
extern void call_8c391c94(void);
extern void apply_resource_3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c3aa716(void *);
extern void call_8c391cc4(void);
extern void call_8c38ad10(void);
void operation_8c23da5c(Object *o)
{
    if (o->f5c != 0) {
        call_8c38ae68();
        call_8c391c94();
        apply_resource_3827d8((void *)(o->f60));
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37df90(0, (void *)(o->f30));
        call_8c37dd28(0, (int)((int)o->f2c + 0x4000));
        call_8c37df90(0, (void *)(o->f64));
        call_8c3aa716((void *)(o->f5c));
        call_8c391cc4();
        call_8c38ad10();
    }
}
