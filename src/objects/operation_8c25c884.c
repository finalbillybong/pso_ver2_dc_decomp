typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c372d98(int);
int operation_8c25c884(void)
{
    int v1;
    int t1;
    v1 = (int)0;
    while (v1 != 4) {
        t1 = call_8c372d98(v1);
        if (t1 != 0) {
            return 1;
        }
        v1 = (int)(v1 + 1);
    }
    return 0;
}
