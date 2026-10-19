typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dc4a0;
extern char g_8c31ccbc[];
extern int call_8c104e9c(void *);
void operation_8c19ca38(void)
{
    int t1;
    t1 = call_8c104e9c((void *)((g_8c31ccbc + 0xb)));
    g_8c4dc4a0 = (int)(t1);
}
