typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void select_mode16_8c1cc600(void);
void operation_8c25f860(void)
{
    *(char *)0x8c513410 = 1;
    select_mode16_8c1cc600();
}
