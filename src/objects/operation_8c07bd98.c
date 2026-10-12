typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c05bbf8(void);
void operation_8c07bd98(void)
{
    int t1;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        *(void **)0x8c469ac0 = (void *)0x8c284f38;
        return;
    }
    *(void **)0x8c469ac0 = (void *)0x8c284f2c;
}
