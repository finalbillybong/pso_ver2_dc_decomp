typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1931b0 S_c8c1931b0;
typedef struct Object Object;
typedef struct Arg0_1c4 Arg0_1c4;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x188];
    Arg0_1c4 *f1c4;
    char unknown1c8[0xc];
    int f1d4;
};
struct S_c8c1931b0 {
    int f00;
    int f04;
    char unknown8[0x8];
    int f10;
};
extern int operation_193348(unsigned int);
extern S_c8c1931b0 *operation_8c1931b0(int);
void operation_8c2552f8(Object *o)
{
    char *v61;
    int t1;
    S_c8c1931b0 *t2;
    if (o->f38 == 0) {
        v61 = (char *)o->f1c4;
        if ((int)(v61) != -1) {
            t1 = operation_193348((unsigned int)v61);
            if (t1 == 1) {
                t2 = operation_8c1931b0((int)(o->f1c4));
                if (t2 != 0) {
                    o->f38 = (int)(t2->f00);
                    o->f1d4 = (int)(t2->f04);
                    o->f28 = (int)(t2->f10);
                }
            }
        }
    }
}
