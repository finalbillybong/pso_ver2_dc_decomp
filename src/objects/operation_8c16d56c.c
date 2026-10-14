typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void start_fade_state(int);
void operation_8c16d56c(void)
{
    start_fade_state(0);
    *(int *)0x8c4db428 = 8;
}
