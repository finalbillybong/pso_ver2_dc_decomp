typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c391c94(void);
extern void call_8c391cc4(void);
void operation_8c03798c(void)
{
    switch (*(int *)0x8c4627fc) {
    case 16:
    case 26:
    case 32:
        call_8c391c94();
        break;
    default:
        call_8c391cc4();
        break;
    }
    *(int *)0x8c4627fc += 1;
}
