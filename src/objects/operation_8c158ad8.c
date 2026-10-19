typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467188;
extern int g_8c4daac0;
extern char g_8c31644c[];
extern int call_8c104e9c(void *);
void operation_8c158ad8(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    g_8c4daac0 = 0;
    switch (g_8c467188) {
    case 0:
        t1 = call_8c104e9c((void *)((void *)g_8c31644c));
        g_8c4daac0 = (int)(t1);
        return;
    case 1:
        t2 = call_8c104e9c((void *)((g_8c31644c + 0x15)));
        g_8c4daac0 = (int)(t2);
        return;
    case 2:
        t3 = call_8c104e9c((void *)((g_8c31644c + 0x2a)));
        g_8c4daac0 = (int)(t3);
        return;
    case 3:
        t4 = call_8c104e9c((void *)((g_8c31644c + 0x3f)));
        g_8c4daac0 = (int)(t4);
        return;
    case 4:
        t5 = call_8c104e9c((void *)((g_8c31644c + 0x54)));
        g_8c4daac0 = (int)(t5);
        return;
    }
}
