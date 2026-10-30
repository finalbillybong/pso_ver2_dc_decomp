typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x3b8];
    int f3b8;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
    short f06;
};
S_vv3 *operation_8c0263a4(Object *o)
{
    int v4;
    S_vv3 *v3;
    int pm2;
    int v1;
    int v2;
    char *pm3;
    int pm1;
    int pm6;
    if (!(0 != o->f3b8)) {
        return 0;
    }
    v1 = 0x6d4;
    v2 = 0x6d6;
    pm6 = (int)o->f3b8 + 0x40;
    pm2 = pm6;
    pm1 = 0;
    pm6 = (int)pm1;
    v3 = (S_vv3 *)(pm2);
    v4 = pm6;
    while (v4 < 4) {
        char *pm5;
        pm5 = (char *)o;
        if ((int)(int)v3->f04 == *(short *)((char *)(pm5 + 0x0) + (v1)) && !(v3->f06 != *(short *)((char *)((0x0 + (char *)o)) + (v2)))) {
            return v3;
        }
        pm3 = (char *)v3 + 252;
        pm1 = v4 + 1;
        pm2 = (pm1);
        v4 = pm2;
        v3 = (S_vv3 *)(pm3);
    }
    return 0;
}
