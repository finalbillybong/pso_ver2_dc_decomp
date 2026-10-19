typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c09b33c(void);
extern int operation_8c034994(void *);
void operation_8c03496c(int a0)
{
    int t1;
    int t2;
    t1 = operation_8c09b33c();
    if (t1 != 0) {
        t2 = operation_8c034994((void *)a0);
        if (t2 == 0) {
            return;
        }
    }
}
