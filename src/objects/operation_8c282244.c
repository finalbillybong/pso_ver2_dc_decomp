typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int initialize_hierarchy_node(void *, void *);
extern void call_8c18e318(int, void *, void *);
extern void destroy_hierarchy_node();
void operation_8c282244(void)
{
    int t1;
    t1 = initialize_hierarchy_node((void *)((void *)0x8c470374), (void *)0);
    call_8c18e318(t1, destroy_hierarchy_node, (void *)((void *)0x8c470368));
}
