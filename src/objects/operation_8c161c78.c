typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db1e0 S_L8c4db1e0;
typedef struct Object Object;
struct S_L8c4db1e0 {
    int f00;
    int f04;
    int f08;
};
struct Object {
    int tag;
    int f04;
};
extern S_L8c4db1e0 g_8c4db1e0;
extern void set_transform_node_callback(void *);
void operation_8c161c78(Object *o)
{
    (&g_8c4db1e0)->f00 = 0;
    (&g_8c4db1e0)->f04 = o->tag;
    (&g_8c4db1e0)->f08 = o->f04;
    set_transform_node_callback((void *)0x8c161c9c);
}
