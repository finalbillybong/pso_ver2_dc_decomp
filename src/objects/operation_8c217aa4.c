typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c217d3c S_c8c217d3c;
struct S_c8c217d3c {
    int f00;
};
extern S_c8c217d3c *recordbc_8c217d3c(int);
extern void call_8c217af8(int);
int operation_8c217aa4(int a0)
{
    char *v2;
    int v1;
    int v11;
    S_c8c217d3c *t1;
    v1 = (int)0;
    v2 = (char *)*(int *)0x8c505244;
    while ((int)(v2) > (int)(v1)) {
        t1 = recordbc_8c217d3c(v1);
        v11 = (int)v2;
        if (a0 == t1->f00) {
            call_8c217af8(v1);
            v11 = (int)(v2 + -1);
        }
        v1 = (int)(v1 + 1);
        v2 = (char *)v11;
    }
    if (8 > (int)(v2)) {
        return (int)(v2);
    }
    call_8c217af8(0);
    return 7;
}
