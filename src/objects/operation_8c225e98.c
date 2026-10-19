typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c506140;
extern int g_8c506144;
extern char g_8c3376a8[];
extern void load_resource_small(void *, void *);
extern int call_8c104e9c(void *);
void operation_8c225e98(void)
{
    int t1;
    load_resource_small((void *)((void *)g_8c3376a8), (void *)((void *)0x8c33760c));
    t1 = call_8c104e9c((void *)((g_8c3376a8 + 0x20)));
    g_8c506144 = (int)(t1);
    g_8c506140 = 0;
}
