typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_0 S_g8c467180_44_0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv61 S_vv61;
typedef struct S_vv61_90 S_vv61_90;
struct Object {
    char unknown0[0x58];
    Arg0_58 *f58;
    char unknown5c[0x28];
    Arg0_84 *f84;
    char unknown88[0xc];
    int f94;
};
struct S_vv61 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv61_90 *f90;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    S_g8c467180_44_0 *f00;
};
extern void call_8c011ec0(void *);
extern void operation_8c19a044(void *, int);
extern void clear_global_8c22fff0(void);
extern void call_8c22e8e4(Object *, void *, int);
void operation_8c22e7c8(Object *o)
{
    S_vv61 *v61;
    if (o->f58 != 0) {
        call_8c011ec0((void *)(o->f58));
        o->f58 = (Arg0_58 *)0;
    }
    v61 = (S_vv61 *)o->f84;
    if (v61 != 0) {
        v61->f80 = (v61->f80 & 0xffff) & -3;
        if (v61->f90 != 0) {
            operation_8c19a044((void *)(v61->f90), 1);
        }
    }
    clear_global_8c22fff0();
    call_8c22e8e4(o, (void *)((*(S_g8c467180 **)0x8c467180)->f44->f00), 1);
    o->f94 = 4;
    *(int *)0x8c5064f8 = 0;
}
