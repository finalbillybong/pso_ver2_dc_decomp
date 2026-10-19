typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern int call_8c18de4c(int);
extern int call_8c18e130(int, void *, int, int, int);
extern void call_8c1922a0(void);
void operation_8c192130(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = call_8c18de4c(0xf308);
    t2 = call_8c18e130(t1, (void *)((void *)0x8c1921e8), 0, 0x24, 0x6c0);
    *(int *)0x8c4dc2c0 = (int)(t2);
    t3 = call_8c18de4c(0x48);
    *(int *)0x8c4dc2c4 = (int)(t3);
    t4 = call_8c18de4c(0x48);
    *(int *)0x8c4dc2c8 = (int)(t4);
    t5 = call_8c18de4c(0x40);
    *(int *)0x8c4dc2cc = (int)(t5);
    *(int *)0x8c4dc2d0 = 0;
    t6 = call_8c18de4c(0x24);
    *(int *)0x8c4dc2d4 = (int)(t6);
    *(int *)0x8c4dc2d8 = 0;
    call_8c1922a0();
}
