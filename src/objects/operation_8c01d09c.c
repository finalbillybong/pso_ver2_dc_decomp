typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cb74 S_g8c41cb74;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct S_vv14 S_vv14;
typedef struct S_vv35 S_vv35;
typedef struct S_vv56 S_vv56;
struct S_g8c41cb74 {
    Object *f00;
    int f04;
};
struct Object {
    int tag;
    Arg0_4 *f04;
    char unknown8[0x24];
    int f2c;
    int f30;
};
struct S_vv56 {
    int f00;
    int f04;
};
struct S_vv14 {
    char unknown0[0x4];
    int f04;
};
struct S_vv35 {
    char unknown0[0x4];
    int f04;
};
extern void call_8c01d09c(int);
void operation_8c01d09c(Object *o)
{
    S_vv56 *v56;
    char *v57;
    S_vv14 *v14;
    char *v58;
    S_vv35 *v35;
    (*(S_g8c41cb74 **)0x8c41cb74)->f00 = o;
    (*(S_g8c41cb74 **)0x8c41cb74)->f04 = 0;
    if (((o->tag & 1)) == 0) {
        (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 1;
    }
    if (((o->tag & 2)) == 0) {
        (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 2;
    }
    if (((o->tag & 4)) == 0) {
        (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 4;
    }
    v56 = (S_vv56 *)o->f04;
    if (v56 != 0) {
        (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 8;
        if (v56->f00 != 0) {
            (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 0x10;
        }
        if (v56->f04 != 0) {
            (*(S_g8c41cb74 **)0x8c41cb74)->f04 |= 0x20;
        }
    }
    v57 = (char *)o->f2c;
    if (v57 != 0) {
        v14 = (S_vv14 *)*(S_g8c41cb74 **)0x8c41cb74;
        v14->f04 |= 0x40;
        *(int *)0x8c41cb74 += 8;
        call_8c01d09c((int)(v57));
    }
    v58 = (char *)o->f30;
    if (v58 != 0) {
        v35 = (S_vv35 *)*(S_g8c41cb74 **)0x8c41cb74;
        v35->f04 |= 0x80;
        *(int *)0x8c41cb74 += 8;
        call_8c01d09c((int)(v58));
    }
}
