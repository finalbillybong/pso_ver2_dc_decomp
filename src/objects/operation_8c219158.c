typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct S_g8c50590c_38 S_g8c50590c_38;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Arg1 {
    unsigned char f00;
    char unknown1[0x3];
    char f04;
};
struct S_g8c50590c {
    char unknown0[0x34];
    int f34;
    S_g8c50590c_38 *f38;
};
struct S_vv1 {
    unsigned char f00;
};
extern int call_8c1c7ffc(Arg1 *);
extern int call_8c219834(int, int, int);
extern float call_8c2198e8(int, int);
extern int call_8c1584b4(int);
void operation_8c219158(int a0, Arg1 *a1, int a2)
{
    S_vv1 *v1;
    int t1;
    int t2;
    float t3;
    int t4;
    if ((a1->f00) == 0) {
        t1 = call_8c1c7ffc(a1);
        if (t1 == 0) {
            v1 = (S_vv1 *)((*(S_g8c50590c **)0x8c50590c)->f34 + a2);
            if ((v1->f00) != 0) {
                t2 = call_8c219834(a0, 0x64, 9);
                if ((unsigned int)*(unsigned char *)((char *)((char *)(*(S_g8c50590c **)0x8c50590c)->f38 + 0x0) + (a2)) > (unsigned int)t2) {
                    t3 = call_8c2198e8(a0, 0xa);
                    t4 = call_8c1584b4((int)((int)((float)v1->f00 * t3)));
                    a1->f04 = t4;
                }
            }
        }
    }
}
