typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int initialize_hierarchy_root(void *);
extern void call_8c18e318(int, void *, void *);
extern int TObject_ctor_8c0330e4(void *, void *);
extern void TObject_dtor_8c03311c();
extern void destroy_hierarchy_root();
void operation_8c281f80(void)
{
    int t1;
    int t2;
    int t3;
    t1 = initialize_hierarchy_root((void *)((void *)0x8c44bec8));
    call_8c18e318(t1, destroy_hierarchy_root, (void *)((void *)0x8c44bebc));
    t2 = TObject_ctor_8c0330e4((void *)((void *)0x8c44bef4), (void *)0);
    call_8c18e318(t2, TObject_dtor_8c03311c, (void *)((void *)0x8c44bee8));
    t3 = TObject_ctor_8c0330e4((void *)((void *)0x8c44bf20), (void *)0);
    call_8c18e318(t3, TObject_dtor_8c03311c, (void *)((void *)0x8c44bf14));
}
