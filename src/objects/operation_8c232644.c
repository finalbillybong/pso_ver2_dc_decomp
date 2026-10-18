typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct S_c8c18de4c S_c8c18de4c;
struct S_c8c18de4c {
    Block32 f00;
};
extern S_c8c18de4c *call_8c18de4c(int);
extern void call_8c12b880(void *, int, int);
extern int call_8c378bf8(int, S_c8c18de4c *);
extern void call_8c378d88(int, S_c8c18de4c *);
extern int call_8c378e04(void);
extern void call_8c378e98(void);
extern void call_8c18de08(S_c8c18de4c *);
int operation_8c232644(void)
{
    S_c8c18de4c *t3;
    S_c8c18de4c *t1;
    int v3;
    int t2;
    int v8;
    int t4;
    t3 = call_8c18de4c(0x3c);
    t1 = call_8c18de4c(0x4000);
    call_8c12b880((void *)((void *)0x8c338c40), 0xff, 0x20);
    t2 = call_8c378bf8(2, t1);
    if (t2 == 0) {
        call_8c378d88(7, t3);
        do {
            t4 = call_8c378e04();
        } while (t4 == 2);
        switch (t4) {
        case 1:
            *(Block32 *)&*(Block32 *)0x8c338c40 = *(Block32 *)&t3->f00;
            v3 = (int)0;
            break;
        default:
            v3 = (int)2;
            break;
        }
        call_8c378e98();
        v8 = (int)v3;
    } else {
        v8 = (int)2;
    }
    call_8c18de08(t1);
    call_8c18de08(t3);
    return (int)(v8);
}
