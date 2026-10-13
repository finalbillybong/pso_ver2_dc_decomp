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
extern char g_8c2ffb1c[];
extern S_c8c104e9c *call_8c104e9c(void *);
extern void copy_resource_fields(void *, void *);
void operation_8c0860ac(void)
{
    S_c8c104e9c *t1;
    t1 = call_8c104e9c((void *)((g_8c2ffb1c + 0xb)));
    *(S_c8c104e9c **)0x8c469cc0 = t1;
    copy_resource_fields((void *)((g_8c2ffb1c + 0x1d)), (void *)(t1->f00));
}
