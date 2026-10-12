typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern int create_effect_7cc0(void *, int, int, int);
extern void call_8c10760c(int, void *, int, int, float);
void operation_8c108428(int a0, int a1, float f0)
{
    int t1;
    int t2;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x3c);
    if (t1 != 0) {
        t2 = create_effect_7cc0((void *)a0, 0xe4, 0, a1);
        call_8c10760c(t1, *(S_g8c44be98 **)0x8c44be98, a0, t2, f0);
    }
}
