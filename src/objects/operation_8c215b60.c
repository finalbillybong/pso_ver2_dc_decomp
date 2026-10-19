typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0db30c(int);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c215b60(int a0)
{
    call_8c0db30c(a0);
    interpolate_view_parameters((void *)a0);
    update_view_nodes((void *)a0, (void *)(a0 + 0x2c));
}
