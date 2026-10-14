typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c32adfc[];
extern int call_8c118528(void *);
void operation_8c1db4c4(void)
{
    int t1;
    t1 = call_8c118528((void *)((g_8c32adfc + 0x9)));
    *(int *)0x8c4e2f60 = (int)(t1);
}
