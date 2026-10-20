typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
struct Arg1 {
    unsigned char f00;
};
struct Arg2 {
    char f00;
};
struct S_vv1 {
    unsigned char f00;
};
extern int operation_8c2097a8(int);
void operation_8c1cdd60(int a0, Arg1 *a1, Arg2 *a2)
{
    unsigned char *v1;
    int t1;
    v1 = (unsigned char *)0x8c2892e0 + (a0 << 1);
    a1->f00 = *v1++;
    if (a1->f00 == 0x1a) {
        t1 = operation_8c2097a8(2);
        if (t1 != 0) {
            a1->f00 = 0x1b;
        }
    }
    a2->f00 = *v1;
}
