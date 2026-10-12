typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c02c30c(int);
int operation_8c1a7170(int a0)
{
    int t1;
    t1 = call_8c02c30c(a0);
    return (char)t1 * 0x24 + 0x8c287fec;
}
