typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    unsigned char tag;
};
struct S_vv1 {
    char unknown0[0x33];
    char f33;
};
extern void call_8c1c9f04(int, int);
extern void call_8c1c9730(int);
void operation_8c073f9c(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v3;
    if (o != 0) {
        v1 = (S_vv1 *)((char *)o + 0x370);
        v2 = (int)((char *)o + 0x4);
        v3 = (int)0;
        while ((unsigned char)v3 != o->tag) {
            call_8c1c9f04((int)(v2 + 8), (int)(v1->f33));
            call_8c1c9730((int)(v2 + 8));
            v2 = (int)(v2 + 0x1c);
            v3 = (int)(v3 + 1);
        }
    }
}
