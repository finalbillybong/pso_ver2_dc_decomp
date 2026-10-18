typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011e9c(int);
void operation_8c13f3f0(void)
{
    int t1;
    if (*(int *)0x8c4d9e20 != 0 && *(int *)0x8c4d9e24 == 0) {
        t1 = call_8c011e9c(0x4a800);
        *(int *)0x8c4d9e24 = (int)(t1);
        if (t1 == 0) {
            return;
        }
    }
}
