typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46b040;
extern void operation_8c09b960(void *);
void operation_8c09b940(int a0)
{
    if (g_8c46b040 != 0) {
        operation_8c09b960((void *)a0);
    }
}
