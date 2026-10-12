typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct S_g8c50590c_c S_g8c50590c_c;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
    char unknown1[0x2];
    char f03;
};
struct S_g8c50590c {
    char unknown0[0xc];
    S_g8c50590c_c *f0c;
};
extern int clamp_int(int, int, int);
extern int call_8c218c14(int, void *, int, int, int);
void operation_8c218fa8(int a0, Arg1 *a1, int a2)
{
    int t1;
    int t2;
    if ((a1->f00) == 0) {
        t1 = clamp_int(a2, 0, 3);
        t2 = call_8c218c14(a0, (void *)((*(S_g8c50590c **)0x8c50590c)->f0c), t1, 9, 4);
        a1->f03 = t2;
    }
}
