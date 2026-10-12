typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int query_flag_32(void *);
extern void call_8c1e8e60(int, int, int);
void operation_8c1ee7d4(int a0)
{
    int t1;
    t1 = query_flag_32((void *)a0);
    if (t1 != 0) {
        call_8c1e8e60(a0, 0x13, 5);
    }
}
