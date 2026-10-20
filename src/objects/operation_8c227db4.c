typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float call_8c37eb0c(int);
int operation_8c227db4(int a0, unsigned int a1, int a2)
{
    unsigned int v7;
    float t1;
    t1 = call_8c37eb0c(a2);
    a0 &= a1;
    v7 = (unsigned int)((float)(unsigned int)a0 * (t1 + 1.0f));
    if (v7 > a1) {
        v7 = a1;
    }
    return v7 & a1;
}
