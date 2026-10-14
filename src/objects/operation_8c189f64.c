typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void configure_temporary_render_state(void);
void operation_8c189f64(void)
{
    if (*(int *)0x8c46ee80 == 0) {
        configure_temporary_render_state();
    }
}
