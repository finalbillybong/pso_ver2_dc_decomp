typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dc4a0;
extern int g_8c4dc4a4;
extern int g_8c4dc4a8;
extern int get_field_8c19cacc(void *);
extern void call_8c19cae8(int);
extern void call_8c19cc30(int);
extern void call_8c19cd74(int);
void operation_8c19ca7c(int a0)
{
    int t1;
    if (g_8c4dc4a0 != 0) {
        g_8c4dc4a8 = 0;
        t1 = get_field_8c19cacc((void *)a0);
        g_8c4dc4a4 = t1;
        call_8c19cae8(a0);
        call_8c19cc30(a0);
        call_8c19cd74(a0);
    }
}
