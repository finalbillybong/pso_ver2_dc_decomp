typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
    float f08;
};
void operation_8c03bf8c(Object *o)
{
    o->tag = o->f04 * o->f08;
}
