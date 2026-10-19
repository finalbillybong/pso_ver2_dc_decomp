typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_4 S_vv3_4;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
};
extern int g_8c4e30c0;
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa702(void *);
extern void call_8c3a9436(void *);
extern void call_8c38ad10(void);
extern void call_8c391c94(void);
extern void call_8c391cc4(void);
void operation_8c1e4a20(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    if (g_8c4e30c0 != 0) {
        switch (o->f30a) {
        case 0:
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(o->f64));
            call_8c3827d8((void *)(o->f28));
            v1 = (S_vv1 *)o->f38;
            call_8c38ae68();
            call_8c382a40((void *)((int)v1 + 8));
            call_8c3aa702((void *)(v1->f04));
            v2 = (S_vv2 *)v1->f2c;
            call_8c38ae68();
            call_8c382a40((void *)((int)v2 + 8));
            call_8c3a9436((void *)(v2->f04));
            call_8c38ad10();
            v3 = (S_vv3 *)v2->f30;
            call_8c38ae68();
            call_8c382a40((void *)((int)v3 + 8));
            call_8c391c94();
            call_8c3aa702((void *)(v3->f04));
            call_8c391cc4();
            call_8c38ad10();
            call_8c38ad10();
            call_8c38ad10();
        }
    }
}
