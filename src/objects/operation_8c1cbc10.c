typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode10_8c1cc588(void);
extern void wait_vsync_and_flip_8c380516(void);
void operation_8c1cbc10(void)
{
    call_8c1cbdd4();
    select_mode10_8c1cc588();
    wait_vsync_and_flip_8c380516();
}
