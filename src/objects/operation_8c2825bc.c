typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d5ad0 S_L8c4d5ad0;
struct S_L8c4d5ad0 {
    char unknown0[0x18];
    void *f18;
};
extern int g_8c30b600;
extern int g_8c4d5b10;
extern S_L8c4d5ad0 g_8c4d5ad0;
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c18e318(void *, void *, void *);
extern void destroy_object_8c09ae88();
void operation_8c2825bc(void)
{
    initialize_hierarchy_node((void *)((void *)&g_8c4d5ad0), (void *)0);
    (&g_8c4d5ad0)->f18 = (void *)0x8c26586c;
    call_8c18e318((void *)((void *)&g_8c4d5ad0), destroy_object_8c09ae88, (void *)((void *)0x8c4d5ac4));
    g_8c4d5b10 = (int)(g_8c30b600);
}
