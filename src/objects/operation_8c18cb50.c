typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x52];
    short f52;
    short f54;
    char unknown56[0x22];
    int f78;
};
struct S_vv1 {
    short f00;
    char unknown2[0x2];
    int f04;
};
void operation_8c18cb50(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (o->f52 << 3))) + 0x7c);
    if (v1->f04 != o->f78) {
        o->f54 = o->f52;
        return;
    }
    o->f54 = v1->f00;
}
