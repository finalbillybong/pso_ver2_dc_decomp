typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int game_malloc_buffer_8c011e9c(void);
int operation_8c18604c(int a0)
{
    int t1;
    t1 = game_malloc_buffer_8c011e9c();
    *(int *)0x8c4dbb98 = t1;
    if (t1 != 0) {
        *(int *)0x8c4dbb9c = a0;
        return 1;
    }
    *(int *)0x8c4dbb98 = 0;
    return 0;
}
