typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9c64 S_L8c4d9c64;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    int f138;
    char unknown13c[0x44];
    int f180;
};
struct S_L8c4d9c64 {
    int f00;
    int f04;
};
extern int g_8c4d9c60;
extern S_L8c4d9c64 g_8c4d9c64;
extern void set_transform_node_callback(void *);
void operation_8c13ef08(Object *o)
{
    g_8c4d9c60 = 0;
    (&g_8c4d9c64)->f00 = o->f180;
    (&g_8c4d9c64)->f04 = o->f138;
    set_transform_node_callback((void *)0x8c13ef48);
}
