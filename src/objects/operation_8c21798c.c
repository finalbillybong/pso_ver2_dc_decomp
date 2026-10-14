typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c2179e0(void);
extern void call_8c0db30c(int);
extern void update_view_nodes(void *, void *);
void operation_8c21798c(int a0)
{
    call_8c2179e0();
    call_8c0db30c(a0);
    update_view_nodes((void *)a0, (void *)(a0 + 0x2c));
}
