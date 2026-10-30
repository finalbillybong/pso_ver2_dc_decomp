typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x302];
    short f302;
    short f304;
};
struct S_vv3 {
    char f00;
    char f01;
};
void operation_8c075b90(Object *o)
{
    S_vv3 *v3;
    int v1;
    int v4;
    int v2;
    v4 = 0x13c;
    (*(Arg0_13c **)((char *)o + v4))->f302 = 0;
    (*(Arg0_13c **)((char *)o + v4))->f304 = 0;
    v2 = 0x2fc;
    for (v1 = 0; v1 != 3; v1++) {
        v3 = *(S_vv3 **)((char *)o + v4);
        if (3 > v1) {
            v3 = (S_vv3 *)((char *)v3 + (v1 << 1) + v2);
        } else {
            v3 = (S_vv3 *)0;
        }
        v3->f00 = 0;
        v3->f01 = 0;
    }
}
