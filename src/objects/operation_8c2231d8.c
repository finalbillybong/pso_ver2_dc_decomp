typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c03ed64(void);
extern void call_8c03ed70(void *);
void operation_8c2231d8(void)
{
    int t1;
    t1 = call_8c03ed64();
    if (t1 == 0) {
        call_8c03ed70((void *)0x8c2e198b);
        *(int *)0x8c4dc844 = 0;
    }
}
