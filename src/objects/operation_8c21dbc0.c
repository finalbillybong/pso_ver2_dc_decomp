typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c247e04(void);
extern int call_8c17796c(int);
int operation_8c21dbc0(void)
{
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 != 0) {
        t1 = call_8c247e04();
        return t1;
    }
    t2 = call_8c17796c(0x33);
    if (t2 != 0) {
        return 4;
    }
    t3 = call_8c17796c(0x2a);
    if (t3 != 0) {
        return 3;
    }
    t4 = call_8c17796c(0x20);
    if (t4 != 0) {
        return 2;
    }
    t5 = call_8c17796c(0x17);
    v2 = (int)(t5 != 0);
    return v2;
}
