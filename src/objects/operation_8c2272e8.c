typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowSoundBalance_ctor_8c22b800(int, void *);
int TWindowSoundBalance_create_8c2272e8(void)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x70);
    if (t1 != 0) {
        TWindowSoundBalance_ctor_8c22b800(t1, (void *)0x8c2e19d8);
    }
    return t1;
}
