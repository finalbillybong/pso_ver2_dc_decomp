typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
struct S_c8c18de4c {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern S_c8c18de4c *call_8c18de4c(int);
extern void call_8c12b880(S_c8c18de4c *, int, int);
extern int call_8c192764(S_c8c18de4c *);
extern int call_8c011ecc(int);
extern int call_8c2064b8(int, S_c8c18de4c *, int, void *);
extern void call_8c011ed8(int);
extern void call_8c18de08(S_c8c18de4c *);
extern void operation_8c0369c0(void *, int);
void operation_8c01ac34(int a0)
{
    int v9;
    S_c8c18de4c *t1;
    S_c8c18de4c *t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c18de4c(0x8000);
    if (t1 != 0) {
        call_8c12b880(t1, 0, 0x8000);
        t2 = call_8c18de4c(0x8000);
        if (t2 != 0) {
            call_8c12b880(t2, 0, 0x8000);
            t4 = call_8c192764(t2);
            t3 = call_8c011ecc(0x7230);
            if (t3 != 0) {
                t5 = call_8c2064b8(t3, t2, t4, (void *)(((char *)t1 + 0x8)));
                call_8c011ed8(t3);
                v9 = (int)t5;
            }
            call_8c18de08(t2);
        }
        t1->f00 = 0x6d;
        t1->f01 = 0;
        t1->f02 = 0;
        t1->f04 = ((unsigned int)v9 + 3 >> 2 << 2) + 8;
        operation_8c0369c0((void *)t1, a0);
        call_8c18de08(t1);
    }
}
