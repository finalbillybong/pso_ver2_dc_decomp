typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8_s7e4 S_c8c021ef8_s7e4;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_24 S_g8c467180_24;
typedef struct S_g8c467180_24_0 S_g8c467180_24_0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct Arg0_30_c Arg0_30_c;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv10 S_vv10;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct Arg0_30 {
    int f00;
    int f04;
    Arg0_30_8 *f08;
    Arg0_30_c *f0c;
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
    int f18;
};
struct S_g8c467180 {
    char unknown0[0x24];
    S_g8c467180_24 *f24;
};
struct Arg0_70 {
    char unknown0[0x4];
    unsigned char f04;
};
struct S_c8c021ef8_s7e4 {
    char unknown0[0x34];
    int f34;
};
struct S_vv6 {
    int f00;
};
struct S_vv7 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
struct S_vv8 {
    int f00;
};
struct S_vv9 {
    int f00;
};
struct S_vv10 {
    int f00;
};
extern int lookup_low_id(int);
extern void call_8c0e196c(void *, void *);
extern void reset_text_cursor_8c18ea38(void);
extern int call_8c1c7b68(Arg0_70 *);
extern void operation_8c18ea4c(int);
extern void call_8c0e2278(int, void *, int);
extern void initialize_fields_8c0e24e8(void *);
extern void normalize_rectangle_fields(void *, float, float);
extern int operation_8c1c9300(void *);
void operation_8c1d767c(Object *o)
{
    int v1;
    char *v11;
    int v5;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv8 *v8;
    S_vv9 *v9;
    S_vv10 *v10;
    int t1;
    S_c8c021ef8_s7e4 *v12;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && (v12 = (S_c8c021ef8_s7e4 *)((char *)t1 + 0x7e4)) != 0) {
        call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329f3c));
        *(Vector3 *)&o->fac = *(Vector3 *)&*(Vector3 *)0x8c32a204;
        v1 = (int)o->f30->f00;
        reset_text_cursor_8c18ea38();
        t2 = call_8c1c7b68((Arg0_70 *)(o->f70));
        operation_8c18ea4c(t2);
        if (*(int *)0x8c467188 == 0) {
            operation_8c18ea4c((int)(*(S_g8c467180_24_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f24 + 0x0) + (o->f70->f04 << 2))));
        }
        call_8c0e2278(v1, (void *)((void *)0x8c4dbe40), 0x20);
        initialize_fields_8c0e24e8((void *)v1);
        v5 = (int)o->f30->f04;
        v6 = (S_vv6 *)o->f30->f08;
        v7 = (S_vv7 *)o->f30->f0c;
        v8 = (S_vv8 *)o->f30->f10;
        v9 = (S_vv9 *)o->f30->f14;
        v11 = (char *)o->f30->f18;
        if (((v12->f34 & 0x10)) != 0) {
            v10 = (S_vv10 *)v11;
            normalize_rectangle_fields((void *)v5, 0.0f, 152.0f);
            v6->f00 |= 2;
            v7->f00 |= 2;
            v8->f00 |= 2;
            v9->f00 |= 2;
            v10->f00 |= 2;
            return;
        }
        normalize_rectangle_fields((void *)v5, 0.0f, 192.0f);
        initialize_fields_8c0e24e8((void *)v6);
        initialize_fields_8c0e24e8((void *)v8);
        initialize_fields_8c0e24e8((void *)v11);
        t3 = operation_8c1c9300((void *)(o->f70));
        v7->f20 = (short)t3;
    }
}
