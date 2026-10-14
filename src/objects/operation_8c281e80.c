typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c417fb0 S_L8c417fb0;
struct S_L8c417fb0 {
    char unknown0[0x18];
    void *f18;
};
extern S_L8c417fb0 g_8c417fb0;
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c18e318(void *, void *, void *);
extern void destroy_object_8c011fc4();
void operation_8c281e80(void)
{
    initialize_hierarchy_node((void *)((void *)&g_8c417fb0), (void *)0);
    (&g_8c417fb0)->f18 = (void *)0x8c260fa0;
    call_8c18e318((void *)((void *)&g_8c417fb0), destroy_object_8c011fc4, (void *)((void *)0x8c417fa4));
}
