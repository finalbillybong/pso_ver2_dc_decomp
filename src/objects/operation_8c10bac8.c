typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operator_new_8c18de4c(int);
void operation_8c10bac8(void)
{
    int t1;
    if (*(int *)0x8c4d7ce4 == 0) {
        t1 = operator_new_8c18de4c(0x1400);
        *(int *)0x8c4d7ce4 = t1;
    }
}
