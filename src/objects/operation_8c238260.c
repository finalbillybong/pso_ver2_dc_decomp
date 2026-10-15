typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
int operation_8c238260(void)
{
    int v1;
    int v2;
    int t1;
    v1 = (int)0;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            v1 = (int)(v1 + 1);
        }
        v2 = (int)(v2 + 1);
    }
    return (int)(v1);
}
