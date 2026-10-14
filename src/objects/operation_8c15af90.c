typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x8];
    float f2c;
    float f30;
    int f34;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c15af90(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be94 **)0x8c44be94));
    o->dispatch = (void *)0x8c26ee88;
    o->tag = (int)(*(int *)0x8c316650);
    o->size = 0x38;
    o->f20 = a1;
    o->f34 = (int)((float)(-0x5a - a1 * 0x3c) * 65536.0f / 360.0f);
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    return o;
}
