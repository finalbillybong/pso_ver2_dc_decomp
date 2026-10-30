typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
typedef struct S_x2368 S_x2368;
struct Object {
    char unknown0[0x110];
    int f110;
};
struct S_x2368 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_vv4 {
    float f00;
};
void operation_8c185e30(Object *o, Arg1 *a1)
{
    char *pm3;
    int pm2;
    char *pm12;
    Vector3 *pm6;
    Vector3 *pm4;
    char *pm8;
    Vector3 *pm7;
    int pm11;
    char *pm5;
    char *pm9;
    char *pm1;
    pm7 = &a1->f00;
    pm6 = pm7;
    pm4 = pm6;
    pm8 = (char *)o + (int)((unsigned short)0x20);
    pm3 = pm8;
    pm2 = o->f110;
    pm11 = 0xc;
    pm1 = (pm3) + pm2 * pm11;
    pm9 = pm1;
    pm8 = pm9;
    pm6 = &((S_x2368 *)(pm8))->f00;
    pm7 = pm6;
    *pm7 = *pm4;
    pm12 = (char *)(int *)((char *)o + 0x24);
    pm5 = 0xc * o->f110 + pm12;
    ((S_vv4 *)(pm5))->f00 = 5.0f + ((S_vv4 *)(pm5))->f00;
    pm11 = o->f110;
    o->f110 = 1 + pm11;
    pm2 = o->f110;
    if (pm2 >= 0x14) {
        o->f110 = 0;
    }
}
