typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_5c_2c Arg0_5c_2c;
typedef struct Arg0_5c_2c_30 Arg0_5c_2c_30;
typedef struct Arg0_60 Arg0_60;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x2c];
    int f2c;
    Arg0_30 *f30;
    char unknown34[0x28];
    Arg0_5c *f5c;
    Arg0_60 *f60;
};
struct Arg0_5c {
    char unknown0[0x2c];
    Arg0_5c_2c *f2c;
};
struct Arg0_5c_2c {
    char unknown0[0x30];
    Arg0_5c_2c_30 *f30;
};
struct S_vv1 {
    int f00;
    char unknown4[0x1c];
    float f20;
};
extern void call_8c38ae68(int);
extern void apply_resource_3827d8(void *);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c3aa716(Arg0_5c *);
extern void call_8c38ad10(void);
void operation_8c23bf90(Object *o)
{
    S_vv1 *v1;
    if (o->f5c != 0 && o->f60 != 0) {
        v1 = (S_vv1 *)o->f5c->f2c->f30;
        v1->f00 &= -5;
        v1->f20 = 10.0f;
        call_8c38ae68(-5);
        apply_resource_3827d8((void *)(o->f60));
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37df90(0, (void *)(o->f30));
        call_8c37dd28(0, (int)((int)o->f2c + -0x4000));
        call_8c3aa716((Arg0_5c *)(o->f5c));
        call_8c38ad10();
        v1->f20 = 1.0f;
    }
}
