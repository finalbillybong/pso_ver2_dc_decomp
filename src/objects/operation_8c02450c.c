typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void *hierarchy_is_active(int);
int operation_8c02450c(int a0)
{
    void *t1;
    if (a0 != 0) {
        t1 = hierarchy_is_active(a0);
        if (t1 != 0) {
            return 1;
        }
    }
    return 0;
}
