typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c03d360(int, int, void *, void *, int, int, int);
void operation_8c081730(void)
{
    int t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d360(t1, 1, (void *)((void *)0x8c2fef10), (void *)((void *)0x8c2fef18), 0, 0, 0);
    }
    *(int *)0x8c469be4 = (int)(t1);
}
