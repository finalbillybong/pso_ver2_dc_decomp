typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv3 {
    unsigned short f00;
    unsigned short f02;
};
unsigned short operation_8c25361c(Object *o, int a1, int a2)
{
    S_vv3 *v3;
    int v2;
    int v1;
    unsigned short k;
    unsigned char pm2;
    unsigned short pm1;
    if (a2 == 0) {
        return 0;
    }
    pm2 = o->f01;
    v1 = (unsigned char)(int)pm2;
    v2 = 0;
    v3 = (S_vv3 *)((char *)o + 0x4);
    k = (unsigned short)a1;
    for (; v1 > v2; ) {
        pm1 = v3->f00;
        if (pm1 == k && (int)v3->f02 == a2) {
            return (int)(int)v3->f02;
        }
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 32);
    }
    return 0;
}
