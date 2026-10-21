typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x10a0];
    int f10a0;
    char unknown10a4[0x8];
    int f10ac;
    int f10b0;
};
struct S_vv1 {
    char unknown0[0x10];
    int f10;
};
int operation_8c032e7c(Object *o)
{
    int v10;
    S_vv1 *v1;
    int v12;
    v12 = 0;
    v1 = (S_vv1 *)*(S_g8c41cba0 **)((char *)0x8c41cba0 + (o->f10b0 << 2));
    if (((v1->f10 & 0x10)) != 0) {
        o->f10ac -= 1;
    }
    if (((v1->f10 & 0x20)) != 0) {
        o->f10ac += 1;
    }
    if (o->f10a0 <= o->f10ac) {
        o->f10ac = (int)o->f10a0 + -1;
    }
    if (!(o->f10ac >= 0)) {
        o->f10ac = 0;
    }
    v10 = (int)v1->f10;
    if (((v10 & 4)) != 0) {
        v12 = (int)(v12 | 1);
    }
    if (((v10 & 2)) != 0) {
        v12 = (int)(v12 | 2);
    }
    if (((v10 & 0x400)) != 0) {
        v12 = (int)(v12 | 4);
    }
    if (((v10 & 0x200)) != 0) {
        v12 = (int)(v12 | 8);
    }
    return (int)(v12);
}
