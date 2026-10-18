typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char f00;
};
int operation_8c0de30c(int a0, int a1)
{
    char *v4;
    char v6;
    v4 = (char *)a1;
    while ((v6 = *v4) != 0) {
        if (v6 == 9) {
            break;
        }
        v4++;
    }
    if (v6 == 0) {
        return a1;
    }
    return (int)(v4 + 1);
}
