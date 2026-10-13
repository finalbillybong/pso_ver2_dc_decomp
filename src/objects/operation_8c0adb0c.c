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
extern char g_8c304fbc[];
extern S_c8c104e9c *call_8c104e9c(void *);
extern void copy_resource_fields(void *, void *);
extern void operation_8c0d0318(void);
void operation_8c0adb0c(void)
{
    int v1;
    S_c8c104e9c *t1;
    t1 = call_8c104e9c((void *)((g_8c304fbc + 0x9)));
    *(S_c8c104e9c **)0x8c46f1c0 = t1;
    copy_resource_fields((void *)((g_8c304fbc + 0x15)), (void *)(t1->f00));
    copy_resource_fields((void *)((g_8c304fbc + 0x1d)), (void *)((void *)0x8c3055f4));
    operation_8c0d0318();
    v1 = (int)0;
    while (0x13 > v1) {
        *(float *)((char *)0x8c46f204 + (v1 << 2)) = 0.0f;
        *(float *)((char *)0x8c46f250 + (v1 << 2)) = 0.0f;
        v1 = (int)(v1 + 1);
    }
    *(int *)0x8c46f29c = 0;
}
