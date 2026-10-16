typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Arg1 Arg1;
struct S_c8c1c7658 {
    int f00;
};
struct Arg1 {
    unsigned char f00;
    unsigned char f01;
};
extern S_c8c1c7658 *call_8c1c7658(Arg1 *);
extern int operation_8c22c100(void *, int);
int operation_8c22c06c(int a0, Arg1 *a1)
{
    int v1;
    S_c8c1c7658 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (a1 != 0) {
        t1 = call_8c1c7658(a1);
        v1 = (int)t1->f00;
        if (t1 != 0) {
            switch (a1->f00) {
            case 0:
                if (v1 >= 0x4e) {
                    if (0x11f > v1) {
                        t2 = operation_8c22c100((void *)a0, (int)(v1 + -0x4e));
                        return (int)(t2);
                    }
                }
                t3 = operation_8c22c100((void *)a0, 0x114);
                return (int)(t3);
            case 2:
                if ((unsigned int)0x39 > (unsigned int)a1->f01) {
                    t4 = operation_8c22c100((void *)a0, (int)(a1->f01 + 0xd1));
                    return (int)(t4);
                }
                t5 = operation_8c22c100((void *)a0, 0xd1);
                return (int)(t5);
            }
        }
    }
    return 0;
}
