typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c02c320(void);
extern void call_8c1a7260(int, int);
void operation_8c1a723c(int a0, int a1)
{
    int t1;
    t1 = call_8c02c320();
    call_8c1a7260(t1, a1);
}
