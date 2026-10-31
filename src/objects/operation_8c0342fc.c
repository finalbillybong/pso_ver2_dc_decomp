typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c1e45a4(int, int);
int TOContainerAncientItemRare_create_8c0342fc(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x384);
    if (t1 != 0) {
        call_8c1e45a4(t1, a0);
    }
    return (int)(t1);
}
