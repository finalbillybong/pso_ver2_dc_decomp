typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c31a114[];
extern int call_8c104e9c(void *);
void operation_8c18ee70(void)
{
    int t1;
    t1 = call_8c104e9c((void *)((g_8c31a114 + 0xd)));
    *(int *)0x8c4dbf64 = (int)(t1);
}
