typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c0130ac(int, void *);
extern void call_8c15dd48(int, int, int, int);
int operation_8c15dcdc(int a0, int a1)
{
    int t1;
    int t2;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
    if (t1 != 0) {
        call_8c0130ac(t1, (void *)(*(S_g8c44be94 **)0x8c44be94));
    }
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x438);
    if (t2 != 0) {
        call_8c15dd48(t2, t1, a0, a1);
    }
    return (int)(t2);
}
