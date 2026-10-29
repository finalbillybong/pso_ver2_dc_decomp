typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470640 S_g8c470640;
typedef struct S_g8c470640_42c S_g8c470640_42c;
typedef struct S_g8c470640_42c_c S_g8c470640_42c_c;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv1_8 S_vv1_8;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv2_8 S_vv2_8;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv3_8 S_vv3_8;
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x28];
    float f30;
};
struct S_g8c470640 {
    char unknown0[0x42c];
    S_g8c470640_42c *f42c;
};
struct Arg0_0 {
    char unknown0[0x410];
    int f410;
};
struct S_vv1 {
    S_vv1_0 *f00;
    S_vv1_4 *f04;
    S_vv1_8 *f08;
    S_vv1_c *f0c;
};
struct S_vv2 {
    S_vv2_0 *f00;
    S_vv2_4 *f04;
    S_vv2_8 *f08;
};
struct S_vv3 {
    S_vv3_0 *f00;
    S_vv3_4 *f04;
    S_vv3_8 *f08;
};
extern S_g8c470640 *g_8c470640;
void operation_8c1000a8(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    if (o->f04 != -1) {
        if (7 > o->f04) {
            int i = o->tag->f410;
            char *b = (char *)g_8c470640->f42c + 0xc;
            ((void (*)(void *))0x8c3827d8)(*(S_g8c470640_42c_c **)(b + (*(int *)((char *)0x8c30ae74 + (i << 2)) << 4)));
            ((void (*)(Arg0_0 *))0x8c01cc90)(o->tag);
            return;
        }
        if (9 > o->f04) {
            v1 = (S_vv1 *)((char *)o + 0x8);
            ((void (*)(void *))0x8c3827d8)(v1->f04);
            ((void (*)(void *, void *, void *, float))0x8c3adf38)(v1->f00, v1->f08, v1->f0c, o->f30);
            return;
        }
        v2 = (S_vv2 *)((char *)o + 0x8);
        ((void (*)(void *))0x8c3827d8)(v2->f04);
        ((void (*)(void *, void *, float))0x8c3addea)(v2->f00, v2->f08, o->f30);
        v3 = (S_vv3 *)((char *)o + 0x18);
        ((void (*)(void *))0x8c3827d8)(v3->f04);
        ((void (*)(void *, void *, float))0x8c3addea)(v3->f00, v3->f08, o->f30);
    }
}
