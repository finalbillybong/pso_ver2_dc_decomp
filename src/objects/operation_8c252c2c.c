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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
};
void operation_8c252c2c(Object *o)
{
    o->tag = (int)(*(int *)0x8c33fa90);
    o->size = 0x234;
    o->f1e0 = 4;
    o->f1e1 = 3;
}
