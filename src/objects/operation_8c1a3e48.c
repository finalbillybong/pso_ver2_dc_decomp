typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c31db44[];
extern int call_8c104e9c(void *);
extern int call_8c118528(void *);
void operation_8c1a3e48(void)
{
    int t1;
    int t2;
    t1 = call_8c104e9c((void *)((g_8c31db44 + 0xd)));
    *(int *)0x8c4dc6c0 = (int)(t1);
    t2 = call_8c118528((void *)((g_8c31db44 + 0x1e)));
    *(int *)0x8c4dc6c4 = (int)(t2);
}
