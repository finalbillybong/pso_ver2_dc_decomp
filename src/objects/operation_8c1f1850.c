typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c3727a0(int);
int operation_8c1f1850(void)
{
    int v1;
    int v2;
    int t1;
    v1 = (int)0;
    v2 = (int)0;
    while ((unsigned int)8 > (unsigned int)(unsigned char)v2) {
        t1 = call_8c3727a0((int)((unsigned char)v2));
        if (t1 != 0) {
            v1 = (int)(v1 + 1);
        }
        v2 = (int)(v2 + 1);
    }
    return (int)(v1);
}
