typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char tag;
    char unknown1[0x3];
    float f04;
    float f08;
    short f0c;
};
struct S_vv1 {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xe];
    float f3c;
    char unknown40[0x4];
    float f44;
};
S_vv1 *operation_8c162de4(Object *o, int a1)
{
    S_vv1 *v1;
    char *v2;
    int v3;
    int v4;
    int t1;
    v1 = (S_vv1 *)0;
    if (o != 0) {
        v2 = (char *)*(int *)0x8c44be04;
        t1 = ((int (*)(void))0x8c163958)();
        v4 = (int)v1;
        if (o->tag == (char)v2) {
            v3 = (int)v1;
            if (t1 != 1) {
                v3 = (int)1;
            }
            v4 = (int)v3;
        }
        if (v4 != 0) {
            v1 = (S_vv1 *)((int (*)(void *))0x8c1631c8)(((char *)o + 0x10));
            if (v1 != 0) {
                v1->f3c = o->f04;
                v1->f44 = o->f08;
                v1->f2c = o->f0c;
                ((void (*)(S_vv1 *, int, void *, int))0x8c073710)(v1, o->tag, (void *)((int)v1 + 0x3c), 1);
            }
        }
        if (a1 == 0) {
            ((void (*)(int, float, float, short, void *))0x8c194db0)(o->tag, o->f04, o->f08, o->f0c, ((char *)o + 0x10));
        }
    }
    return v1;
}
