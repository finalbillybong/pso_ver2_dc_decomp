typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
};
void operation_8c25456c(Object *o)
{
    o->tag = (int)(*(int *)0x8c33fc70);
    o->size = 0x234;
}
