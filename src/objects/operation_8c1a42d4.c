typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c31dbcc[];
extern int call_8c104e9c(void *);
extern int call_8c118528(void *);
void operation_8c1a42d4(void)
{
    int t1;
    int t2;
    t1 = call_8c104e9c((void *)((g_8c31dbcc + 0xd)));
    *(int *)0x8c4dc720 = (int)(t1);
    t2 = call_8c118528((void *)((g_8c31dbcc + 0x1e)));
    *(int *)0x8c4dc724 = (int)(t2);
}
