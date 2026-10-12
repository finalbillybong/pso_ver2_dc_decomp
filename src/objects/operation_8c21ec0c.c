typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
extern int operation_8c173460(void *, int);
int operation_8c21ec0c(int a0, int a1)
{
    int t1;
    if (!((char)a1 >= 0)) {
        return 0;
    }
    if ((char)a1 > 6) {
        return 0;
    }
    t1 = operation_8c173460(*(S_g8c4db520 **)0x8c4db520, (char)a1 + 0x4a);
    return t1;
}
