typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TOVS2Wall01_ctor_8c24c598(int, int);
int TOVS2Wall01_create_8c24c750(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x37c);
    if (t1 != 0) {
        TOVS2Wall01_ctor_8c24c598(t1, a0);
    }
    return (int)(t1);
}
