typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    int tag;
};
struct S_vv1 {
    float f00;
    float f04;
};
void process_entries_8c03bb2c(Object *o)
{
    int v2;
    S_vv1 *v1;
    o->tag = 0;
    v1 = (S_vv1 *)((char *)o + 0x4);
    v2 = 0;
    while (0x10 > v2) {
        v1->f04 = 0.0f;
        v1->f00 = 0.0f;
        v1 = (S_vv1 *)((char *)v1 + 8);
        v2 = v2 + 1;
    }
}
