typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ca4 S_g8c469ca4;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x24];
    int f8c;
};
struct Arg0_38 {
    int f00;
    Arg0_38_4 *f04;
    char unknown8[0x24];
    Arg0_38_2c *f2c;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dc90(void *, int);
extern void call_8c3a9436(void *);
extern void call_8c391c94(void);
extern void call_8c3a944a(void *);
extern void call_8c391cc4(void);
extern void call_8c38ad10(void);
void operation_8c085f60(Object *o)
{
    if (o->f38 != 0) {
        call_8c3827d8((void *)(*(S_g8c469ca4 **)0x8c469ca4));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        if (o->f8c == 0) {
            call_8c382a40((void *)(((char *)o->f38 + 0x8)));
            call_8c37dc90((void *)(((char *)o->f38 + 0x14)), (int)(o->f38->f00 & 0x20));
            call_8c3a9436((void *)(o->f38->f04));
            if (o->f38->f2c == 0) {
                goto L_8c085fdc;
            }
            call_8c391c94();
            call_8c3a944a((void *)(o->f38->f2c));
            call_8c391cc4();
        } else {
            call_8c3a944a((void *)(o->f38));
        }
L_8c085fdc:;
        call_8c38ad10();
    }
}
