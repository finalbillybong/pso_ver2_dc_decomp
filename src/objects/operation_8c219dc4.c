typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct S_g8c50590c_14 S_g8c50590c_14;
typedef struct Arg1 Arg1;
struct S_g8c50590c {
    char unknown0[0x14];
    S_g8c50590c_14 *f14;
};
struct Arg1 {
    char unknown0[0x5];
    char f05;
};
extern int call_8c218c14(int, void *, int, int, int);
void operation_8c219dc4(int a0, Arg1 *a1)
{
    int t1;
    t1 = call_8c218c14(a0, (*(S_g8c50590c **)0x8c50590c)->f14, 0, 5, 1);
    a1->f05 = t1;
}
