typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c19b054(void);
extern int call_8c37293e(int, int);
extern int call_8c372d38(int, void *);
int operation_8c1cb94c(void)
{
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c19b054();
    t4 = call_8c37293e((char)t1, 0);
    t2 = call_8c19b054();
    t3 = call_8c372d38((char)t2, (void *)0x8c319870);
    v2 = (int)t4;
    if (t3 == 0) {
        v2 = (int)(t4 - *(int *)0x8c4dbb08);
    }
    return v2;
}
