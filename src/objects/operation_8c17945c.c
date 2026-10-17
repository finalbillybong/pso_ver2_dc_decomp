typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c17945c(int a0)
{
    int v1;
    if (!(a0 >= 0)) {
        v1 = (int)0;
    } else {
        if (*(int *)0x8c2e2ad8 != 0) {
            v1 = (int)a0;
            if (!(a0 >= 4)) {
                goto L_8c17947e;
            }
            v1 = (int)3;
        } else {
            v1 = (int)a0;
            if (a0 >= 3) {
                v1 = (int)2;
            }
        }
    }
L_8c17947e:;
    *(int *)0x8c4db954 = (int)(v1);
}
