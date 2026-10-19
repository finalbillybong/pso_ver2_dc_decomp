typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
struct Object {
    Arg0_0 *tag;
    char unknown4[0xc];
    int f10;
};
struct S_vv2 {
    unsigned short f00;
};
struct S_vv6 {
    short f00;
};
struct S_vv4 {
    short f00;
};
void operation_8c04be80(Object *o, int a1, int a2)
{
    S_vv2 *v2;
    int v1;
    int v3;
    S_vv6 *v6;
    S_vv4 *v4;
    char *v5;
    v1 = (int)0;
    v2 = (S_vv2 *)&*(int *)((char *)((char *)o->tag + 0x0) + (a1 << 1));
    while (v2->f00 != 0) {
        v2 = (S_vv2 *)((char *)v2 + 2);
        v1 = (int)(v1 + 1);
    }
    v3 = (int)v2;
    v3 = (int)(v3 + (a2 << 1));
    v4 = (S_vv4 *)v2;
    v5 = (char *)v1;
    v6 = (S_vv6 *)v3;
    do {
        v6->f00 = v4->f00;
        v4--;
        v6--;
    } while (v5-- != 0);
    o->f10 += a2;
}
