typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
void operation_8c172be8(Object *o, int a1)
{
    int v2;
    if (((o->tag & -0x1000000)) != 0) {
        v2 = o->tag;
        if ((unsigned int)(a1 << 0x18) > (unsigned int)(o->tag & -0x1000000)) {
            o->tag &= 0xffffff;
            return;
            v2 = o->tag & 0xffffff;
        }
        o->tag = v2 - (a1 << 0x18);
    }
}
