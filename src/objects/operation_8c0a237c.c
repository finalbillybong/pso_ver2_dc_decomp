typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x7];
    int f08;
};
struct S_vv2 {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
struct Object {
    float tag;
    float f04;
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern S_L8c46efc8 g_8c46efc8;
void operation_8c0a237c(Object *o, Arg1 *a1)
{
    S_vv2 *v2;
    if ((((&g_8c46efc8)->f08 & 8)) == 0 && (((&g_8c46efc8)->f08 & 4)) == 0) {
        return;
    }
    v2 = (S_vv2 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + ((&g_8c46efc8)->f00 << 2));
    if (v2 != 0) {
        v2->f40 = o->tag;
        v2->f44 = o->f04;
        v2->f48 = o->f08;
        v2->f4c = a1->f00;
        v2->f50 = a1->f04;
        v2->f54 = a1->f08;
    }
}
