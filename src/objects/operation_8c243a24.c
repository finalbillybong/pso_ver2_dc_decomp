typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPlayerBattleCtrl_ctor_8c242448(int, void *);
extern void strncpy_8c12b154(int, int, int);
void operation_8c243a24(int a0, int a1)
{
    int t1;
    if (*(int *)0x8c510c80 == 0) {
        t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x274);
        if (t1 != 0) {
            TPlayerBattleCtrl_ctor_8c242448(t1, *(S_g8c44be84 **)0x8c44be84);
        }
        *(int *)0x8c510c80 = t1;
    }
    if (*(int *)0x8c510c80 != 0) {
        strncpy_8c12b154(*(int *)0x8c510c80 + 0x68, a1, 0x200);
        *(int *)0x8c510c88 = a0;
    }
}
