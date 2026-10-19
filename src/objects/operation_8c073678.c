typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_124 Arg0_124;
typedef struct Arg0_128 Arg0_128;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x7c];
    short fe4;
    char unknowne6[0x3e];
    Arg0_124 *f124;
    Arg0_128 *f128;
};
extern void call_8c391c94(void);
extern void apply_resource_3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c073678(Object *o)
{
    if (((o->f34 & 0x8000000)) == 0 && o->fe4 == 0 && o->f128 != 0) {
        call_8c391c94();
        apply_resource_3827d8((void *)(o->f124));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        call_8c3aa716((void *)(o->f128));
        call_8c38ad10();
        call_8c391cc4();
    }
}
