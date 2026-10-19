typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
};
struct Object {
    float tag;
    float f04;
};
int operation_8c0137d8(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v4;
    (&frame)->f04 = o->tag;
    v1 = (int)0x7f800000;
    v2 = (int)((v1 & *(int *)&(&frame)->f04) == v1);
    v4 = (int)1;
    if (v2 == 0) {
        (&frame)->f00 = o->f04;
        v3 = (int)((*(int *)&(&frame)->f00 & v1) == v1);
        v4 = (int)1;
        if (v3 == 0) {
            v4 = (int)0;
        }
    }
    return (int)(v4);
}
