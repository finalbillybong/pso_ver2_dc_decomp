typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c41bd10;
extern int g_8c4daaf0;
extern int g_8c5049fc;
extern int g_8c504a04;
extern int operation_8c01c25c(void);
int operation_8c250514(void)
{
    int v1;
    int t1;
    int t2;
    t1 = operation_8c01c25c();
    if (t1 == 0xf) {
        return (int)(g_8c4daaf0);
    }
    t2 = operation_8c01c25c();
    if (t2 == 0x10) {
        if (g_8c41bd10 != 0) {
            return 1;
        }
        if (g_8c5049fc != 0) {
            return 1;
        }
        v1 = (int)(g_8c504a04 != 0);
        return (int)(v1);
    }
    return 0;
}
