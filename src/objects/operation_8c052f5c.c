typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x14];
    int f14;
};
extern int call_8c053868(int, int, Arg2 *);
extern int call_8c052f94(int, int, int);
int operation_8c052f5c(int a0, int a1, Arg2 *a2)
{
    int v5;
    int v6;
    int v7;
    int t1;
    int t2;
    if (a1 != 0 && a2 != 0) {
        if (a2->f14 != 0) {
            v5 = (int)a0;
            v6 = (int)a1;
            v7 = (int)a2;
        } else {
            t1 = call_8c053868(a0, a1, a2);
            return (int)(t1);
        }
        t2 = call_8c052f94(v5, v6, v7);
        return (int)(t2);
    }
    return 0;
}
