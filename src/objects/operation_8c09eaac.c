typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec50 S_g8c46ec50;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct Object Object;
typedef struct S_vv15 S_vv15;
typedef struct S_vv16 S_vv16;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct Object {
    int tag;
    char unknown4[0x4];
    int f08;
};
struct S_vv3 {
    short f00;
    short f02;
};
struct S_vv4 {
    short f00;
};
struct S_vv15 {
    short f00;
    short f02;
};
struct S_vv16 {
    short f00;
};
extern S_g8c46ec50 *g_8c46ec50;
extern S_g8c46ec54 *g_8c46ec54;
void operation_8c09eaac(Object *o)
{
    S_vv4 *v4;
    S_vv3 *v3;
    short v2;
    int n;
    int v6;
    int v1;
    S_vv16 *v16;
    S_vv15 *v15;
    short v14;
    int v18;
    int v13;
    int n2;
    n = 0;
    v4 = (S_vv4 *)((int)o + (int)o->tag);
    v3 = (S_vv3 *)g_8c46ec50;
    v2 = -1;
    v1 = 0xba0;
    v6 = n;
    while (v1 > v6) {
        if (v3->f00 != v2) {
            n++;
            v3->f02 = v4->f00;
            v4 = (S_vv4 *)((int)v4 + 2);
        }
        v6++;
        v3 = (S_vv3 *)((int)v3 + 0x44);
    }
    v16 = (S_vv16 *)((int)o + (int)o->f08);
    n2 = 0;
    v15 = (S_vv15 *)g_8c46ec54;
    v14 = -1;
    v13 = 0x5a8;
    v18 = n2;
    while (v13 > v18) {
        if (v15->f00 != v14) {
            n2++;
            v15->f02 = v16->f00;
            v16 = (S_vv16 *)((int)v16 + 2);
        }
        v18++;
        v15 = (S_vv15 *)((int)v15 + 0x48);
    }
}
