typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct Object Object;
struct S_c8c18de4c {
    Block32 f00;
};
struct Object {
    Block32 tag;
};
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c378bf8(int, S_c8c18de4c *);
extern void call_8c378d88(int, S_c8c18de4c *);
extern int call_8c378e04(void);
extern void call_8c378dc4(int, S_c8c18de4c *);
extern void call_8c378e98(void);
extern void call_8c18de08(S_c8c18de4c *);
int operation_8c2326f4(Object *o)
{
    S_c8c18de4c *t3;
    S_c8c18de4c *t1;
    int v2;
    int t2;
    int v7;
    int t4;
    int t5;
    t3 = call_8c18de4c(0x3c);
    t1 = call_8c18de4c(0x4000);
    t2 = call_8c378bf8(2, t1);
    if (t2 == 0) {
        call_8c378d88(7, t3);
        do {
            t4 = call_8c378e04();
        } while (t4 == 2);
        if (t4 != 1) {
            if (t4 == 3) {
                goto L_8c23277e;
            }
        } else {
            *(Block32 *)&t3->f00 = *(Block32 *)&o->tag;
            call_8c378dc4(7, t3);
            do {
                t5 = call_8c378e04();
            } while (t5 == 2);
            if (t5 == 1) {
                *(Block32 *)&*(Block32 *)0x8c338c40 = *(Block32 *)&o->tag;
                v2 = (int)0;
                goto L_8c232784;
            }
            v2 = (int)1;
            goto L_8c232784;
L_8c23277e:;
            v2 = (int)1;
            goto L_8c232784;
        }
        v2 = (int)1;
L_8c232784:;
        call_8c378e98();
        v7 = (int)v2;
    } else {
        v7 = (int)2;
    }
    call_8c18de08(t1);
    call_8c18de08(t3);
    return (int)(v7);
}
