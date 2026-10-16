typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg1 Arg1;
typedef struct S_vv26 S_vv26;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0xc];
    float f40;
    float f44;
    char unknown48[0x3a];
    unsigned char f82;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Frame {
    float f00;
    float f04;
};
struct S_vv26 {
    char unknown0[0x10];
    float f10;
    float f14;
};
struct Arg1 {
    float f00;
    float f04;
};
extern void set_fields_8c1a654c(int, void *);
void operation_8c0e11f0(Object *o, Arg1 *a1)
{
    Frame frame;
    unsigned char v1;
    S_vv26 *v26;
    v1 = (unsigned char)o->f82;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c0e1244;
        }
        if (v1 == 2) {
            goto L_8c0e124c;
        }
    } else {
        v26 = (S_vv26 *)o->f30->f00;
        (&frame)->f00 = v26->f10 + 18.0f + 0.1f;
        (&frame)->f04 = v26->f14 + 26.0f + 0.1f;
        goto L_8c0e124c;
L_8c0e1244:;
        set_fields_8c1a654c((int)(((char *)o + 0x2c)), (void *)(&frame));
    }
L_8c0e124c:;
    if (o->f40 > (&frame)->f00) {
        a1->f00 = (&frame)->f00;
    } else {
        a1->f00 = o->f40;
    }
    if (o->f44 > (&frame)->f04) {
        a1->f04 = (&frame)->f04;
        return;
    }
    a1->f04 = o->f44;
}
