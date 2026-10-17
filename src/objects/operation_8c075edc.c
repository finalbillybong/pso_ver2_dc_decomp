typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c284de0 S_L8c284de0;
typedef struct S_c8c1931b0 S_c8c1931b0;
typedef struct Object Object;
typedef struct Arg0_1c4 Arg0_1c4;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0xfa];
    unsigned char f136;
    char unknown137[0x8d];
    Arg0_1c4 *f1c4;
    int f1c8;
    int f1cc;
    int f1d0;
    int f1d4;
    char unknown1d8[0x24];
    int f1fc;
    char unknown200[0x8];
    short f208;
    short f20a;
};
struct S_c8c1931b0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
struct S_L8c284de0 {
    char unknown0[0x1];
    char f01;
};
extern S_L8c284de0 g_8c284de0;
extern S_c8c1931b0 *operation_8c1931b0(int);
void operation_8c075edc(Object *o)
{
    unsigned char v1;
    S_c8c1931b0 *t1;
    t1 = operation_8c1931b0((int)(o->f1c4));
    if (t1 != 0) {
        o->f38 = (int)(t1->f00);
        o->f1d4 = (int)(t1->f04);
        o->f28 = (int)(t1->f10);
        o->f1c8 = (int)(t1->f14);
        o->f1cc = (int)(t1->f08);
        o->f1d0 = (int)(t1->f0c);
        o->f1fc |= 4;
        v1 = (unsigned char)o->f136;
        if ((unsigned int)0x89 > v1) {
            o->f208 = *(char *)((char *)&g_8c284de0 + (v1 << 1));
            o->f20a = *(char *)((char *)&g_8c284de0.f01 + (v1 << 1));
            return;
        }
        o->f208 = -1;
        o->f20a = -1;
    }
}
