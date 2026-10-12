typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c46ed0c S_g8c46ed0c;
struct S_c8c18de4c {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern S_c8c18de4c *call_8c18de4c(int);
extern void call_8c12b880(int, int, int);
extern int call_8c011ecc(int);
extern int call_8c2064b8(int, void *, int, int);
extern void call_8c011ed8(int);
extern void call_8c0369c0(S_c8c18de4c *, int);
extern void call_8c18de08(S_c8c18de4c *);
void operation_8c01ab8c(int a0)
{
    S_c8c18de4c *t1;
    int t2;
    int t3;
    t1 = call_8c18de4c(0x8000);
    if (t1 != 0) {
        call_8c12b880((int)t1, 0, 0x8000);
        t2 = call_8c011ecc(0x7230);
        if (t2 != 0) {
            t3 = call_8c2064b8(t2, *(S_g8c46ed0c **)0x8c46ed0c, *(int *)0x8c46ed14 << 2, (int)((char *)t1 + 0x8));
            call_8c011ed8(t2);
            t1->f00 = 0x6c;
            t1->f01 = 0;
            t1->f02 = 0;
            t1->f04 = ((unsigned int)t3 + 3 >> 2 << 2) + 8;
            call_8c0369c0(t1, a0);
        }
        call_8c18de08(t1);
    }
}
