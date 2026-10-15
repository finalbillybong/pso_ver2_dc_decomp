typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22c4 Arg0_22c4;
typedef struct S_vv64 S_vv64;
typedef struct S_vv64_90 S_vv64_90;
typedef struct S_vv65 S_vv65;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2290];
    Arg0_22b8 *f22b8;
    char unknown22bc[0x8];
    Arg0_22c4 *f22c4;
};
struct S_vv65 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv64 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv64_90 *f90;
};
struct Arg0_22b8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void call_8c220c40(int, int);
extern void operation_8c223228(void *);
void operation_8c223078(Object *o)
{
    S_vv65 *v65;
    S_vv64 *v64;
    v65 = (S_vv65 *)o->f22b8;
    if (v65 != 0 && ((v65->f80 & 0xffff & 4)) != 0) {
        if (o->f22c4 != 0) {
            request_resource_release((void *)(o->f22c4));
            o->f22c4 = (Arg0_22c4 *)0;
        }
        v64 = (S_vv64 *)o->f22b8;
        if (v64 != 0) {
            v64->f80 = (v64->f80 & 0xffff) & -3;
            if (v64->f90 != 0) {
                operation_8c19a044((void *)(v64->f90), 1);
            }
            o->f22b8->f80 = (o->f22b8->f80 & 0xffff) | 8;
        }
        call_8c220c40(0x19, 1);
        operation_8c223228((void *)o);
        o->f24 = 5;
        return;
    }
    if (v65 != 0 && ((v65->f80 & 0xffff & 2)) != 0) {
        o->f24 = 0x11;
    }
}
