typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0xe];
    char f0e;
};
struct Arg1 {
    char unknown0[0x30];
    char f30;
};
int count_mismatch_8c09c920(Object *o, Arg1 *a1)
{
    int v1;
    int v2;
    int v3;
    int v4;
    v2 = (int)0;
    v1 = (int)0;
    while (4 >= v1) {
        v3 = (int)v2;
        if (*(short *)((char *)((char *)o + 0x4) + (v1 << 1)) != *(short *)((char *)((char *)a1 + 0x38) + (v1 << 1))) {
            v3 = (int)(v2 + 1);
        }
        v1 = (int)(v1 + 1);
        v2 = (int)v3;
    }
    v4 = (int)v2;
    if (o->f0e != a1->f30) {
        v4 = (int)(v2 + 1);
    }
    return v4;
}
