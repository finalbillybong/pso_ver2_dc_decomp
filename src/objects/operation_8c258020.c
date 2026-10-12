typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c258088(void);
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
extern int call_8c18de4c(int);
int operation_8c258020(int a0)
{
    int t1;
    int t2;
    int t3;
    if (a0 != 0) {
        call_8c258088();
        t1 = call_8c03ed64();
        *(int *)0x8c513380 = t1;
        if (t1 != 0 && 0x40000 > a0) {
            t2 = call_8c03ed10((void *)0x8c2e20a8);
            *(int *)0x8c513384 = t2;
            goto L_8c25805c;
        }
        t3 = call_8c18de4c(a0);
        *(int *)0x8c513384 = t3;
    }
L_8c25805c:;
    return *(int *)0x8c513384;
}
