typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    unsigned char f00;
    unsigned char f01;
};
struct Object {
    unsigned char tag;
    unsigned char f01;
};
extern int g_8c4dbdc8;
extern int call_8c12b748(Object *, S_vv3 *, int);
int operation_8c18b6e8(Object *o)
{
    int v2;
    int v1;
    S_vv3 *v3;
    int v4;
    int v7;
    int t1;
    if (g_8c4dbdc8 == 0) {
        return 1;
    }
    v1 = (int)(void *)0x8c4dbc84;
    v2 = (int)0;
    v3 = (S_vv3 *)v1;
    v4 = (int)0;
    while (g_8c4dbdc8 > v4) {
        t1 = call_8c12b748(o, v3, 0x14);
        if (t1 == 0) {
            return 0;
        }
        if (v3->f00 == o->tag && v3->f01 == o->f01) {
            v2 = (int)(v2 + 1);
        }
        v4 = (int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 20);
    }
    v7 = (int)(1 >= v2);
    return (int)(v7);
}
