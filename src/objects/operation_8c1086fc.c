typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d7b84;
extern void call_8c391cc4(void);
extern void call_8c391c94(void);
void operation_8c1086fc(void)
{
    if (g_8c4d7b84 != 0) {
        call_8c391cc4();
        return;
    }
    call_8c391c94();
}
