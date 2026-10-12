typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c3889a4(int, int, int);
void operation_8c2455e4(int a0)
{
    if (*(int *)0x8c510e44 != 0) {
        call_8c3889a4(*(int *)0x8c510e44 + *(int *)0x8c510e48, a0, 1);
        *(int *)0x8c510e48 += 1;
    }
}
