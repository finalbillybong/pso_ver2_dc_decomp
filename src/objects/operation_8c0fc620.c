typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x8];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x14];
    Vector3 f70;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv1 {
    char unknown0[0x10];
    float f10;
};
extern void call_8c0e196c(void *, void *);
extern void refresh_name_8c0e2b78(void *, int);
extern void initialize_fields_8c0e24e8(void *);
extern void call_8c0e2328(S_vv1 *, float);
void operation_8c0fc620(Object *o, Arg1 *a1)
{
    S_vv1 *v1;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c30a87c));
    *(Vector3 *)&o->f70 = *(Vector3 *)&*(Vector3 *)0x8c30aa24;
    v1 = (S_vv1 *)o->f30->f04;
    refresh_name_8c0e2b78((void *)v1, (int)(a1->f20));
    initialize_fields_8c0e24e8((void *)v1);
    call_8c0e2328(v1, 1000000.0f);
    o->f40 = v1->f10 + 34.0f;
    o->f44 = 56.0f;
    o->f40 += 38.0f;
    o->f3c = 444.0f - o->f44;
    o->f58 = 0;
}
