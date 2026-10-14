typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c31a224[];
extern int call_8c104e9c(void *);
void operation_8c18fabc(void)
{
    int t1;
    t1 = call_8c104e9c((void *)((g_8c31a224 + 0xc)));
    *(int *)0x8c4dc294 = (int)(t1);
}
