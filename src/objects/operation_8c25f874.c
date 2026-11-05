typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void select_mode10_8c1cc588(void);
void select_mode10_wrapper_8c25f874(void)
{
    *(char *)0x8c4e3130 = 1;
    select_mode10_8c1cc588();
}
