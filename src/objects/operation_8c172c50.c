typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
};
void operation_8c172c50(Object *o, float f0, float f1)
{
    o->tag += f0;
    if (f0 > 0.0f && !(f1 > o->tag)) {
        o->tag = f1;
        return;
    }
    if (f1 > o->tag) {
        o->tag = f1;
    }
}
