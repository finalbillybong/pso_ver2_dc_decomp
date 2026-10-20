typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
extern int operation_8c219834(void *, int, unsigned int);
unsigned char operation_8c218d18(int a0, Arg1 *a1, int a2, int a3, int a4)
{
    unsigned char v1;
    unsigned char v4;
    int t1;
    int off;
    int i1;
    int i4;
    off = a2 * a4 + a3 << 1;
    v1 = ((unsigned char *)a1)[off];
    a1 = (Arg1 *)((char *)a1 + 1);
    v4 = ((unsigned char *)a1)[off];
    i1 = v1;
    if (i1 == 0xff || (i4 = v4) == 0xff || (unsigned int)i1 > (unsigned int)i4) {
        return 0xff;
    }
    if (i1 == i4) {
        return v1;
    }
    t1 = operation_8c219834((void *)a0, (int)(i4 - i1 + 1), (unsigned int)4);
    return t1 + i1;
}
