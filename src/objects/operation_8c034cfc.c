typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
};
int operation_8c034cfc(Object *o)
{
    if (0.0f > o->tag || 1.0f <= o->tag || 0.0f > o->f04 || 1.0f <= o->f04) {
        o->tag = 0.0f;
        o->f04 = 0.0f;
        return 1;
    }
    return 0;
}
