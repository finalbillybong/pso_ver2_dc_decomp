typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
};
struct Object {
    char unknown0[0x2c];
    float f2c;
};
void operation_8c22c8dc(Object *o, float f0)
{
    int v3;
    float v7;
    int v1;
    v3 = (int)0;
    v1 = (int)-2;
    while (!(v3 == 2)) {
        S_vv4 *v4;
        v4 = (S_vv4 *)*(Arg0_20 **)((char *)((char *)o + 0x20) + (v3 << 2));
        if (!(v4 == 0)) {
            int v5;
            int pm1;
            pm1 = ((v4->f30 & 1)) != 0;
            v5 = (int)(pm1);
            if (!(v5 == 0)) {
                v4->f30 &= v1;
            }
            v4->f30 |= 2;
            if (f0 != 0.0f) {
                v4->f3c = (v4->f38 - v4->f20) / f0;
                v7 = (float)((v4->f38 - v4->f24) / f0);
                v4->f40 = v7;
                v4->f44 = v7;
                v4->f48 = v7;
            }
        }
        v3 = (int)(v3 + 1);
    }
    if (f0 != 0.0f) {
        o->f2c = -1.0f / f0;
        v3 = (int)0;
    }
}
