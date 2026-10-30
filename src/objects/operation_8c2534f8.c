typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block40 {
    int words[10];
} Block40;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct Frame {
    Block40 f00;
};
struct Object {
    Block40 tag;
};
struct S_vv2 {
    int f00;
    int f04;
};
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv5 {
    unsigned short f00;
    unsigned short f02;
};
struct S_vv4 {
    int f00;
    int f04;
};
extern int call_8c2535dc(Frame *, unsigned short);
extern int call_8c25361c(Arg1 *, unsigned short, int);
void operation_8c2534f8(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv2 *v2;
    int v1;
    unsigned short v7;
    int v6;
    int v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    int t2;
    *(Block40 *)&(&frame)->f00 = *(Block40 *)&o->tag;
    v1 = (int)0;
    v2 = (S_vv2 *)o;
    while (5 > v1) {
        v2->f00 = 0;
        v2->f04 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
    {
        Object *base = o;
        v3 = (int)a1->f01;
        v4 = (S_vv4 *)base;
        v5 = (S_vv5 *)((char *)a1 + 0x4);
        v6 = (int)0;
        while (v3 > v6) {
            if (v5->f00 == 0) {
                v7 = (int)v5->f02;
                v4->f00 = (int)(v7);
                t1 = call_8c2535dc((Frame *)((&frame)), v7);
                t2 = call_8c25361c(a1, v7, t1);
                v4->f04 = (unsigned short)t2;
                v4 = (S_vv4 *)((char *)v4 + 8);
            }
            v6 = (int)(v6 + 1);
            v5 = (S_vv5 *)((char *)v5 + 32);
        }
    }
}
