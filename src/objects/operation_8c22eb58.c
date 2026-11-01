typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TQuestVmDownLoadServer_ctor_8c22d5c8(int, void *);
void TQuestVmDownLoadServer_create_8c22eb58(void)
{
    int t1;
    if (*(int *)0x8c506504 == 0) {
        t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x9c);
        if (t1 != 0) {
            TQuestVmDownLoadServer_ctor_8c22d5c8(t1, *(S_g8c44be84 **)0x8c44be84);
        }
    }
}
