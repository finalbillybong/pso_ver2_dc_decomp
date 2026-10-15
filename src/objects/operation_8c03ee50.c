typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c03ee50(int a0, int a1)
{
    char v4;
    S_vv1 *v1;
    int v3;
    int t1;
    v1 = (S_vv1 *)a0;
    v3 = (int)a1;
    while ((v4 = v1->f00) != 0) {
        if ((char)v4 == 0x2e) {
            t1 = icmp((unsigned char *)(int)v1 + 1, (unsigned char *)v3);
            return (int)(t1);
        }
        v1 = (S_vv1 *)((char *)v1 + 1);
    }
    return -1;
}
