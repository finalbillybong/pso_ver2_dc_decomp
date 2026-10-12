typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e50 S_g8c510e50;
extern int call_8c011ecc(int);
extern void construct_seeded_random_state(void *, unsigned int);
extern void call_8c245694(int, int);
void operation_8c244c4c(void)
{
    int t1;
    int t2;
    t1 = call_8c011ecc(0xe8);
    if (t1 != 0) {
        construct_seeded_random_state((void *)t1, (unsigned int)*(S_g8c510e50 **)0x8c510e50);
    }
    *(int *)0x8c510e20 = t1;
    t2 = call_8c011ecc(0x14);
    if (t2 != 0) {
        call_8c245694(t2, 0x20);
    }
    *(int *)0x8c510e24 = t2;
}
