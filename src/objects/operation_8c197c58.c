typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_38 Arg0_30_38;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x35];
    char f69;
    char f6a;
};
struct Arg0_30 {
    char unknown0[0x38];
    Arg0_30_38 *f38;
};
struct S_vv2 {
    char unknown0[0x18];
    float f18;
};
struct S_vv1 {
    char unknown0[0x18];
    float f18;
};
extern void set_fields_8c197cb0(void *, void *);
void operation_8c197c58(Object *o)
{
    S_vv2 *v2;
    S_vv1 *v1;
    v2 = (S_vv2 *)o->f30->f38;
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (*(unsigned char *)((char *)0x8c2878d0 + ((char)(o->f69 + o->f6a * 3))) << 2));
    set_fields_8c197cb0((void *)v2, (void *)v1);
    v2->f18 = v1->f18 + 0.1f;
}
