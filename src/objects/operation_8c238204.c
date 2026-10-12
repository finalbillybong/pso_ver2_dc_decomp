typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg1 {
    int f00;
};
struct Arg2 {
    int f00;
};
struct Arg3 {
    int f00;
};
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
void operation_8c238204(int a0, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c18e768(a0, 0xe10);
    a1->f00 = t1;
    if (a1->f00 > 0x63) {
        a1->f00 = 0x63;
    }
    t2 = call_8c18e768(a0, 0x3c);
    t3 = call_8c18e8a0(t2, 0x3c);
    a2->f00 = t3;
    t4 = call_8c18e8a0(a0, 0x3c);
    a3->f00 = t4;
}
