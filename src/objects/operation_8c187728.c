typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc00 S_g8c4dbc00;
extern S_g8c4dbc00 *g_8c4dbc00;
extern int g_8c4dbc04;
char operation_8c187728(void)
{
    char *v1;
    v1 = (char *)g_8c4dbc04;
    g_8c4dbc04 += 1;
    return *(char *)((char *)((char *)g_8c4dbc00 + 0x0) + ((int)(v1)));
}
