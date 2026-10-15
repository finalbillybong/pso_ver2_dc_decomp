typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbc08;
extern int g_8c4dbc0c;
extern int g_8c4dbc10;
extern int operation_8c187728(void);
int operation_8c1876d8(void)
{
    int t1;
    g_8c4dbc08 = 0;
    g_8c4dbc0c = 0;
    g_8c4dbc10 = 1;
    while (g_8c4dbc08 == 0) {
        t1 = operation_8c187728();
        ((void (*)(int))(*(int *)((char *)0x8c319b78 + ((unsigned char)t1 << 3))))(t1);
    }
    return (int)(g_8c4dbc0c);
}
