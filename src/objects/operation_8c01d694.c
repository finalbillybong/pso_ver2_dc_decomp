typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0xe];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    Vector3 f60;
    Vector3 f6c;
};
struct Arg1 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    short f08;
    char unknowna[0x2];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
void TObjectShared_vslot06_8c01d694(Object *o, Arg1 *a1)
{
    int n;
    int v1;
    o->f20 = a1->f04;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f0c;
    *(Vector3 *)&o->f54 = *(Vector3 *)&a1->f0c;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a1->f18;
    *(Vector3 *)&o->f6c = *(Vector3 *)&a1->f24;
    o->f2c = a1->f08;
    v1 = (int)0;
    n = 3;
    while (n > v1) {
        *(int *)((char *)((char *)o + 0x88) + (v1 << 2)) = (int)(*(int *)((char *)((char *)a1 + 0x30) + (v1 << 2)));
        v1 = (int)(v1 + 1);
    }
}
