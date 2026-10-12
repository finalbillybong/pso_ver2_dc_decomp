typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int query_flag_16(void *);
extern int call_8c12b944(void);
int operation_8c029b3c(int a0, int a1)
{
    int v9;
    int t1;
    int t2;
    t1 = query_flag_16((void *)a0);
    v9 = (int)a1;
    if (t1 != 0) {
        t2 = call_8c12b944();
        v9 = (int)(int)((float)t2 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    }
    return v9;
}
