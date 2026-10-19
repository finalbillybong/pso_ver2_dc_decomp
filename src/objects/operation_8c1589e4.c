typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa8 S_g8c4daaa8;
extern S_g8c4daaa8 *g_8c4daaa8;
extern float call_8c2198e8(void *, int);
extern int call_8c12b944(void);
float operation_8c1589e4(int a0)
{
    float t1;
    int t2;
    if (g_8c4daaa8 != 0) {
        t1 = call_8c2198e8(g_8c4daaa8, a0);
        return t1;
    }
    t2 = call_8c12b944();
    return (float)t2 / 32768.0f;
}
