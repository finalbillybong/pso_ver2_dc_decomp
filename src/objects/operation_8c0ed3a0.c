typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
};
struct S_vv1 {
    char unknown0[0x10];
    int f10;
};
int operation_8c0ed3a0(Object *o)
{
    int v8;
    S_vv1 *v1;
    int v10;
    v1 = (S_vv1 *)*(S_g8c41cba0 **)((char *)0x8c41cba0 + (o->f28 << 2));
    v10 = (int)0;
    if (((v1->f10 & 0x10)) != 0) {
        o->f24 -= 1;
    }
    if (((v1->f10 & 0x20)) != 0) {
        o->f24 += 1;
    }
    if (o->f24 >= 3) {
        o->f24 = 2;
    }
    if (!(o->f24 >= 0)) {
        o->f24 = 0;
    }
    v8 = (int)v1->f10;
    if (((v8 & 4)) != 0) {
        v10 = (int)(v10 | 1);
    }
    if (((v8 & 2)) != 0) {
        v10 = (int)(v10 | 2);
    }
    if (((v8 & 0x400)) != 0) {
        v10 = (int)(v10 | 4);
    }
    if (((v8 & 0x200)) != 0) {
        v10 = (int)(v10 | 8);
    }
    return (int)(v10);
}
