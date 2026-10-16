typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv27 S_vv27;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    int f34;
    char unknown38[0x8];
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x8];
    float f70;
    float f74;
    char unknown78[0x8];
    char f80;
    unsigned char f81;
    unsigned char f82;
    char unknown83[0xd];
    float f90;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct S_vv27 {
    char unknown0[0x10];
    float f10;
    float f14;
};
extern void set_fields_8c1a654c(int, void *);
extern void call_8c0e0104(Object *);
extern void operation_8c0dc854(void *);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c0e13a0(Object *o)
{
    unsigned char v1;
    S_vv27 *v27;
    unsigned char v26;
    o->f80 = 4;
    o->f81 |= 0x40;
    v1 = (unsigned char)o->f82;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c0e1404;
        }
        if (v1 == 2) {
            goto L_8c0e140e;
        }
    } else {
        v27 = (S_vv27 *)o->f30->f00;
        o->f40 = v27->f10 + 18.0f + 0.1f;
        o->f44 = v27->f14 + 26.0f + 0.1f;
        goto L_8c0e140e;
L_8c0e1404:;
        set_fields_8c1a654c((int)(((char *)o + 0x2c)), (void *)(&o->f40));
    }
L_8c0e140e:;
    call_8c0e0104(o);
    o->f81 |= 4;
    o->f34 |= 0x100;
    operation_8c0dc854((void *)o);
    o->f90 = 1.0f;
    o->f70 = o->f90;
    o->f74 = o->f90;
    o->f64 = 0x186a0;
    v26 = (unsigned char)o->f82;
    if (v26 != 0) {
        if (v26 == 1) {
            return;
        }
        if (v26 == 2) {
            return;
        }
        return;
    }
    initialize_fields_8c0e24e8((void *)(o->f30->f00));
}
