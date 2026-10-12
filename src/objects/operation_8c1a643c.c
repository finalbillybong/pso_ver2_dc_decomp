typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_field_8c21f338(int);
extern void call_8c1a6460(int, int);
void operation_8c1a643c(int a0, int a1)
{
    int t1;
    t1 = get_field_8c21f338(a1);
    call_8c1a6460(a0, t1);
}
