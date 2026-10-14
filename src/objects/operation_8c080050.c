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
extern S_c8c104e9c *g_8c469b80;
extern char g_8c2febe8[];
extern S_c8c104e9c *call_8c104e9c(void *);
extern void copy_resource_fields(void *, void *);
void operation_8c080050(void)
{
    S_c8c104e9c *t1;
    t1 = call_8c104e9c((void *)((void *)g_8c2febe8));
    g_8c469b80 = t1;
    copy_resource_fields((void *)((g_8c2febe8 + 0xd)), (void *)(t1->f00));
}
