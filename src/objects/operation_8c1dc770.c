typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c418a00_sa6c S_g8c418a00_sa6c;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    int tag;
    int f04;
    char unknown8[0x17];
    char f1f;
    char unknown20[0x59];
    char f79;
    char f7a;
    char f7b;
    char f7c;
};
struct S_vv1 {
    char unknown0[0x30];
    char f30;
    char f31;
};
struct S_g8c418a00_sa6c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c418a00 {
    char unknown0[0xa6c];
    int fa6c;
};
extern S_g8c418a00 *g_8c418a00;
extern int g_8c467188;
extern int g_8c4db9e0;
extern void call_8c12b154(void *, S_vv1 *, int);
void operation_8c1dc770(Object *o)
{
    int v47;
    S_vv1 *v1;
    int v2;
    S_g8c418a00_sa6c *p;
    v47 = (int)g_8c4db9e0;
    if (v47 != 0 && (v47 + 0x370) != 0) {
        o->f79 |= 1;
        v1 = (S_vv1 *)(v47 + 0x370);
        call_8c12b154((void *)(((char *)o + 0x8)), v1, 0x17);
        o->f1f = 0;
        o->f7c = v1->f31;
        o->f7b = v1->f30;
        o->f7a = g_8c467188;
        p = (S_g8c418a00_sa6c *)g_8c418a00;
        if (p != 0) {
            p = (S_g8c418a00_sa6c *)((char *)p + 0xa6c);
            v2 = p->f04;
            if (v2 != 0) {
                o->tag = *(int *)p;
                o->f04 = (int)(v2);
            }
        }
    }
}
