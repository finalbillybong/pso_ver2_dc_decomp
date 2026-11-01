typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode0_8c1cc49c(void);
extern void wait_vsync_and_flip_8c380516(void);
void operation_8c1cbb20(void)
{
    call_8c1cbdd4();
    select_mode0_8c1cc49c();
    wait_vsync_and_flip_8c380516();
}
