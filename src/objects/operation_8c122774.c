typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv5 S_vv5;
struct Object {
    int tag;
};
struct S_vv3 {
    S_vv3_0 *f00;
    int f04;
};
struct S_vv5 {
    int f00;
    int f04;
};
void operation_8c122774(Object *o, Arg1 *a1, int a2, int a3)
{
    int v1;
    int v2;
    S_vv3 *v3;
    S_vv5 *v5;
    if (a1 != 0) {
        v2 = -8;
        v1 = (int)a1 + v2;
        for (v3 = (S_vv3 *)o->tag; (unsigned int)v1 > (unsigned int)(v5 = (S_vv5 *)v3->f00); v3 = (S_vv3 *)v5) {
        }
        v1 += *(int *)((char *)a1 - 0x4);
        if (v1 == (int)v5) {
            *(int *)((char *)a1 + v2) = v5->f00;
            *(int *)((char *)a1 - 0x4) = *(int *)((char *)a1 - 0x4) + v5->f04;
        } else {
            *(S_vv5 **)((char *)a1 + v2) = v5;
        }
        if (((int)v3 + v3->f04) == ((int)a1 + -8)) {
            v3->f00 = (S_vv3_0 *)*(int *)((char *)a1 - 0x8);
            v3->f04 += *(int *)((char *)a1 - 0x4);
            return;
        }
        v3->f00 = (S_vv3_0 *)((int)a1 + -8);
    }
}
