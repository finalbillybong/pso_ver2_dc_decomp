typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    unsigned char f82;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_vv2 {
    char unknown0[0x10];
    float f10;
    float f14;
};
extern void set_fields_8c1a654c(int, void *);
void operation_8c0e118c(Object *o, Arg1 *a1)
{
    unsigned char v1;
    S_vv2 *v2;
    v1 = (unsigned char)o->f82;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c0e11d0;
        }
        if (v1 == 2) {
            return;
        }
        return;
    }
    v2 = (S_vv2 *)o->f30->f00;
    a1->f00 = v2->f10 + 18.0f + 0.1f;
    a1->f04 = v2->f14 + 26.0f + 0.1f;
    return;
L_8c0e11d0:;
    set_fields_8c1a654c((int)(((char *)o + 0x2c)), (void *)a1);
}
