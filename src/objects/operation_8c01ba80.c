typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_8 S_vv2_8;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv2 {
    char unknown0[0x4];
    int f04;
    S_vv2_8 *f08;
};
extern int lookup_low_id(int);
extern void operation_8c02c930(void *, int);
void operation_8c01ba80(Object *o)
{
    S_vv2 *v2;
    int v3;
    int v4;
    int v1;
    int t1;
    v1 = (int)0xc78;
    v2 = (S_vv2 *)((char *)o + 0x4);
    v3 = (int)0;
    while (o->f01 > v3) {
        v4 = (int)0;
        while (0xc > v4) {
            t1 = lookup_low_id(v4);
            if (t1 != 0 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == (int)v2->f04) {
                operation_8c02c930((void *)t1, (int)(v2->f08));
            }
            v4 = (int)(v4 + 1);
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 12);
    }
}
