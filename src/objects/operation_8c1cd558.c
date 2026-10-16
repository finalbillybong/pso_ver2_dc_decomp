typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4c];
    unsigned short f80;
    char unknown82[0x2];
    short f84;
    char unknown86[0xa];
    Arg0_90 *f90;
};
struct Arg0_30_0 {
    int f00;
};
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
void operation_8c1cd558(Object *o)
{
    int v1;
    v1 = (int)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f00;
    if (((v1 & 4)) == 0 || ((v1 & 0x80)) != 0) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    if (((o->f80 & 0xffff & 0x100)) == 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
    }
    o->f80 = (o->f80 & 0xffff) | 2;
    if (o->f90 != 0) {
        operation_8c19a044((void *)(o->f90), 2);
    }
}
