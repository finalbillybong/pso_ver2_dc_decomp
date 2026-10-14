typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *dispatch;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c206e2c(Object *o)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be8c **)0x8c44be8c));
    o->dispatch = (void *)0x8c278058;
    o->f04 |= 0x10;
    return o;
}
