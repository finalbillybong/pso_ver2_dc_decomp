typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
extern void create_related_object_8c21b564(void *, void *);
void operation_8c1b5dd4(Object *o)
{
    create_related_object_8c21b564((void *)o, (void *)(((char *)o + 0x3c0)));
    o->f3a0 = 0x4b;
}
