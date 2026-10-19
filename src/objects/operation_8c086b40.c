typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c104e9c S_c8c104e9c;
typedef struct S_c8c104e9c_0 S_c8c104e9c_0;
struct S_c8c104e9c {
    S_c8c104e9c_0 *f00;
};
extern S_c8c104e9c *g_8c469ce0;
extern char g_8c2ffb78[];
extern S_c8c104e9c *call_8c104e9c(void *);
extern void copy_resource_fields(void *, void *);
void operation_8c086b40(void)
{
    S_c8c104e9c *t1;
    t1 = call_8c104e9c((void *)((g_8c2ffb78 + 0xc)));
    g_8c469ce0 = t1;
    copy_resource_fields((void *)((g_8c2ffb78 + 0x1c)), (void *)(t1->f00));
}
