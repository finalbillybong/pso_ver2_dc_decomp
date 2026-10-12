typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void set_fields_8c2163e0(void *);
extern void call_8c2163bc(int);
void operation_8c2123a8(int a0, int a1)
{
    set_fields_8c2163e0((void *)a1);
    call_8c2163bc(a1);
}
