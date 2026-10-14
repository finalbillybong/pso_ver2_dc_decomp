typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int initialize_hierarchy_root(void *);
extern void call_8c18e318(int, void *, void *);
extern int initialize_hierarchy_node(void *, void *);
extern void destroy_hierarchy_node();
extern void destroy_hierarchy_root();
void operation_8c281f80(void)
{
    int t1;
    int t2;
    int t3;
    t1 = initialize_hierarchy_root((void *)((void *)0x8c44bec8));
    call_8c18e318(t1, destroy_hierarchy_root, (void *)((void *)0x8c44bebc));
    t2 = initialize_hierarchy_node((void *)((void *)0x8c44bef4), (void *)0);
    call_8c18e318(t2, destroy_hierarchy_node, (void *)((void *)0x8c44bee8));
    t3 = initialize_hierarchy_node((void *)((void *)0x8c44bf20), (void *)0);
    call_8c18e318(t3, destroy_hierarchy_node, (void *)((void *)0x8c44bf14));
}
