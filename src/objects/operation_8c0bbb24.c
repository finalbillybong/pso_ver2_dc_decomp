typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_8 S_vv1_8;
struct Object {
    char unknown0[0x3c];
    int f3c;
};
struct S_vv1 {
    short f00;
    char unknown2[0x6];
    S_vv1_8 *f08;
};
void operation_8c0bbb24(Object *o)
{
    S_vv1 *v1;
    int v3;
    int v4;
    int v2;
    v1 = (S_vv1 *)*(S_g8c44be0c **)0x8c44be0c;
    o->f3c = 0;
    if (v1 != 0) {
        v2 = (int)-1;
        v3 = (int)0;
        while (v1->f00 > v3) {
            v4 = (int)*(int *)((char *)((char *)v1->f08 + 0x0) + (v3 * 0x3c));
            if (v4 != v2) {
                o->f3c += 1;
            }
            v3 = (int)(v3 + 1);
        }
    }
}
