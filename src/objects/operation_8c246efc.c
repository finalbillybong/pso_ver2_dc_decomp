typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_38_2c_30_30_30 Arg0_38_2c_30_30_30;
typedef struct Arg0_38_2c_30_4 Arg0_38_2c_30_4;
typedef struct Arg0_38_2c_30_4_4 Arg0_38_2c_30_4_4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x1f8];
    int f260;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_4 *f04;
    char unknown8[0x28];
    Arg0_38_2c_30_30 *f30;
};
struct Arg0_38_2c_30_4 {
    char unknown0[0x4];
    Arg0_38_2c_30_4_4 *f04;
};
struct Arg0_38_2c_30_30 {
    int f00;
    char unknown4[0x2c];
    Arg0_38_2c_30_30_30 *f30;
};
struct S_vv7 {
    int f00;
};
extern void call_8c0344f0(void *, int, int, int);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(Arg0_38 *);
extern void call_8c38ad10(void);
void operation_8c246efc(Object *o)
{
    S_vv7 *v7;
    if (*(int *)0x8c510e80 != 0) {
        if (*(int *)0x8c510e84 == 0) {
            call_8c0344f0((void *)(o->f38->f2c->f30->f04->f04), -8, 0, 0);
            *(int *)0x8c510e84 = 1;
        }
        v7 = (S_vv7 *)o->f38->f2c->f30->f30->f30;
        if (((o->f260 & 0x10)) != 0) {
            o->f38->f2c->f30->f30->f00 &= -9;
            v7->f00 |= 8;
        } else {
            o->f38->f2c->f30->f30->f00 |= 8;
            v7->f00 &= -9;
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa716((Arg0_38 *)(o->f38));
        call_8c38ad10();
    }
}
