typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c328bb4[];
extern int call_8c104e9c(void *);
extern int call_8c118528(void *);
void operation_8c1c4d4c(void)
{
    int t1;
    int t2;
    t1 = call_8c104e9c((void *)((g_8c328bb4 + 0xd)));
    *(int *)0x8c4e2da0 = (int)(t1);
    t2 = call_8c118528((void *)((g_8c328bb4 + 0x1e)));
    *(int *)0x8c4e2da4 = (int)(t2);
}
