typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0263a4 S_c8c0263a4;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct Arg1 {
    char unknown0[0x3b8];
    int f3b8;
};
struct S_c8c0263a4 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    float f2c;
    float f30;
    float f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x5c];
    int fa0;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    int f30;
};
struct S_vv3 {
    short f00;
    short f02;
};
struct S_vv4 {
    short f00;
    short f02;
};
extern void call_8c1aab30(void *);
extern S_c8c0263a4 *call_8c0263a4(Arg1 *);
int operation_8c1aa840(Object *o, Arg1 *a1)
{
    int v1;
    char *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_c8c0263a4 *t1;
    if (a1->f3b8 == 0) {
        return 0;
    }
    call_8c1aab30((void *)(&o->f30));
    t1 = call_8c0263a4(a1);
    if (t1 == 0) {
        return 0;
    }
    if (t1->f04 != 2) {
        return 0;
    }
    o->f20 = t1->f2c;
    o->f24 = t1->f30;
    o->f28 = t1->f34;
    o->f2c = t1->f40;
    v1 = (int)t1->fa0;
    o->f30 = (int)(v1);
    v2 = (char *)v1;
    v3 = (S_vv3 *)((char *)o + 0x34);
    v4 = (S_vv4 *)((int)((char *)t1 + 0xa0) + 4);
    while (v2-- != 0) {
        v3->f00 = v4->f00;
        v3->f02 = v4->f02;
        v4 = (S_vv4 *)((char *)v4 + 8);
        v3 = (S_vv3 *)((char *)v3 + 4);
    }
    return (int)(&o->f30);
}
