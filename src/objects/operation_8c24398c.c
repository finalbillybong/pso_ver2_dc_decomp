typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    int tag;
    char f04;
    char f05;
    short f06;
    int f08;
    char unknownc[0x41c];
    int f428;
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
Object *operation_8c24398c(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v1;
    o->f04 = 0;
    o->f05 = 0;
    o->f06 = 0;
    o->f08 = 0;
    operation_8c1acbc0((void *)(((char *)o + 0x3cc)));
    operation_8c1acbc0((void *)(((char *)o + 0x3f0)));
    v2 = (int)0;
    v1 = (int)-1;
    while (0x1e > v2) {
        v3 = (S_vv3 *)((char *)((char *)(int *)((char *)o + 0xc) + v2 * 0x1c) + 4);
        v3->f00 = 0;
        v3->f01 = v1;
        v3->f04 = 0;
        v3->f03 = 0;
        v3->f02 = 0;
        operation_1c7dd4((void *)((int)v3 + 8));
        v2 = (int)(v2 + 1);
    }
    o->f428 = 0;
    o->tag = 0;
    return o;
}
