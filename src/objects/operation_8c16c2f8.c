typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db400 S_g8c4db400;
extern S_g8c4db400 *g_8c4db400;
extern int g_8c4db420;
char operation_8c16c2f8(void)
{
    char *v1;
    v1 = (char *)g_8c4db420;
    g_8c4db420 += 1;
    return *(char *)((char *)((char *)g_8c4db400 + 0x0) + ((int)(v1)));
}
