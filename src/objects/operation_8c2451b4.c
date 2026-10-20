typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e20 S_g8c510e20;
extern S_g8c510e20 *g_8c510e20;
extern int next_random_state(void *);
int operation_8c2451b4(unsigned int a0, int a1)
{
    float v3;
    float v6;
    unsigned int r;
    int t1;
    t1 = next_random_state(g_8c510e20);
    v3 = (float)(unsigned int)a1;
    v6 = (float)(unsigned int)t1;
    r = (unsigned int)(v3 * v6 / 4294967296.0f);
    a0 = (a0 > r) ? a0 : r;
    return (int)a0;
}
