typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(void *, int, int);
extern int get_render_state_8c1e77e8(void);
extern void call_8c12b154(void *, int, int);
void *operation_8c03680c(void)
{
    int t1;
    call_8c12b880((void *)0x8c462168, 0, 0x40);
    t1 = get_render_state_8c1e77e8();
    call_8c12b154((void *)0x8c462168, t1, 8);
    return (void *)0x8c462168;
}
