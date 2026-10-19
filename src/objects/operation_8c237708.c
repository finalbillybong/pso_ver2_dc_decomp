typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339628 S_L8c339628;
typedef struct S_L8c339628_1c S_L8c339628_1c;
typedef struct S_L8c339628_20 S_L8c339628_20;
typedef struct S_g8c510b28 S_g8c510b28;
typedef struct S_g8c510b28_42c S_g8c510b28_42c;
typedef struct S_g8c510b28_42c_18 S_g8c510b28_42c_18;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_2c S_vv10_2c;
typedef struct S_vv10_2c_30 S_vv10_2c_30;
typedef struct S_vv10_2c_30_30 S_vv10_2c_30_30;
typedef struct S_vv10_2c_30_30_4 S_vv10_2c_30_30_4;
typedef struct S_vv10_2c_30_4 S_vv10_2c_30_4;
typedef struct S_vv10_2c_4 S_vv10_2c_4;
typedef struct S_vv10_4 S_vv10_4;
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0xc];
    int f3c;
    int f40;
};
struct S_g8c510b28 {
    char unknown0[0x42c];
    S_g8c510b28_42c *f42c;
};
struct S_g8c510b28_42c {
    char unknown0[0x18];
    S_g8c510b28_42c_18 *f18;
};
struct S_L8c339628 {
    char unknown0[0x1c];
    S_L8c339628_1c *f1c;
    S_L8c339628_20 *f20;
};
struct S_vv10 {
    char unknown0[0x4];
    S_vv10_4 *f04;
    char unknown8[0x24];
    S_vv10_2c *f2c;
};
struct S_vv10_2c {
    char unknown0[0x4];
    S_vv10_2c_4 *f04;
    char unknown8[0x28];
    S_vv10_2c_30 *f30;
};
struct S_vv10_2c_30 {
    char unknown0[0x4];
    S_vv10_2c_30_4 *f04;
    char unknown8[0x28];
    S_vv10_2c_30_30 *f30;
};
struct S_vv10_2c_30_30 {
    char unknown0[0x4];
    S_vv10_2c_30_30_4 *f04;
};
extern S_g8c510b28 *g_8c510b28;
extern S_L8c339628 g_8c339628;
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c3a9436(void *);
extern void call_8c37e02c(int, int);
extern void call_8c38ad10(void);
void operation_8c237708(Object *o)
{
    S_vv10 *v10;
    if (o->f40 != 0) {
        o->f3c += 0x38e;
        {
            int lim = 0x4000;
            if (o->f3c >= lim) {
                o->f3c = lim;
            }
        }
    } else {
        o->f3c -= 0x38e;
        if (!(o->f3c > 0)) {
            o->f3c = 0;
        }
    }
    v10 = (S_vv10 *)g_8c510b28->f42c->f18;
    if (v10 != 0) {
        if (o->f2c != 0) {
            call_8c3827d8((void *)((&g_8c339628)->f1c));
        } else {
            call_8c3827d8((void *)((&g_8c339628)->f20));
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c3a9436((void *)(v10->f04));
        call_8c38ae68();
        call_8c37e02c(0, -o->f3c);
        call_8c3a9436((void *)(v10->f2c->f04));
        call_8c38ad10();
        call_8c38ae68();
        call_8c37e02c(0, o->f3c);
        call_8c3a9436((void *)(v10->f2c->f30->f04));
        call_8c38ad10();
        call_8c38ae68();
        call_8c3a9436((void *)(v10->f2c->f30->f30->f04));
        call_8c38ad10();
        call_8c38ad10();
    }
}
