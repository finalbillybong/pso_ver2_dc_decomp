typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock14 {
    short halves[7];
} SBlock14;
typedef struct S_c8c1a714c S_c8c1a714c;
typedef struct S_c8c1a7194 S_c8c1a7194;
typedef struct Arg2 Arg2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_sc S_vv4_sc;
struct Arg2 {
    char f00;
};
struct S_c8c1a7194 {
    char f00;
};
struct S_vv4 {
    char unknown0[0xc];
    unsigned char f0c;
};
struct S_c8c1a714c {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
};
struct S_vv4_sc {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
};
extern S_c8c1a7194 *operation_8c1a7194(int);
extern int operation_8c1a71fc(int, int);
extern S_c8c1a714c *operation_8c1a714c(int);
extern void call_8c025764(int, Arg2 *, short);
void operation_8c025178(int a0, int a1, Arg2 *a2)
{
    int v1;
    int v5;
    unsigned char *p;
    S_c8c1a7194 *t1;
    S_c8c1a714c *t3;
    int v3;
    if (!(a1 >= 0)) {
        a1 = 0;
    } else if (a1 > 0xc7) {
        a1 = 0xc7;
    }
    v3 = a1;
    t1 = operation_8c1a7194(a0);
    *(SBlock14 *)&a2->f00 = *(SBlock14 *)&t1->f00;
    p = (unsigned char *)operation_8c1a71fc(a0, 0);
    if (p != 0) {
        t3 = operation_8c1a714c(a0);
        v5 = (int)0;
        while (v3 > v5) {
            p += 0xc;
            call_8c025764((int)(p[0]), a2, t3->f00);
            call_8c025764((int)(p[1]), (Arg2 *)(((char *)a2 + 0x2)), t3->f02);
            call_8c025764((int)(p[2]), (Arg2 *)(((char *)a2 + 0x4)), t3->f04);
            call_8c025764((int)(p[3]), (Arg2 *)(((char *)a2 + 0x6)), t3->f06);
            call_8c025764((int)(p[4]), (Arg2 *)(((char *)a2 + 0x8)), t3->f08);
            call_8c025764((int)(p[5]), (Arg2 *)(((char *)a2 + 0xa)), t3->f0a);
            v5 = (int)(v5 + 1);
        }
    }
}
