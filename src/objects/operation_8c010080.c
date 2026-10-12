typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c36cd16(int);
extern void call_8c12b880(int, int, int);
extern void call_8c372500(int, int, void *, void *);
void operation_8c010080(void)
{
    int t1;
    t1 = call_8c36cd16(0x260);
    *(int *)0x8c417664 = t1;
    call_8c12b880(t1, 0, 0x4c);
    call_8c372500(0xf, 0xff, (void *)0x8c408560, (void *)0x8c0100cc);
}
