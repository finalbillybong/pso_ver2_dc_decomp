typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0db30c(void);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c1a6370(int a0)
{
    call_8c0db30c();
    interpolate_view_parameters((void *)a0);
    update_view_nodes((void *)a0, (void *)(a0 + 0x2c));
}
