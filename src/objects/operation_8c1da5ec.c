typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c1da224(int, int);
int TOBoss4Bird_create_8c1da5ec(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        call_8c1da224(t1, a0);
    }
    return (int)(t1);
}
