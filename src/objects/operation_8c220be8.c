typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505c28 S_g8c505c28;
extern void call_8c12b880(void *, int, int);
extern void call_8c220d04(int, void *);
extern void call_8c22ecd4(void *, void *, int);
void operation_8c220be8(int a0, int a1)
{
    if (*(int *)0x8c505c28 != 0) {
        call_8c12b880((void *)0x8c505a20, 0, 0x200);
        call_8c220d04(a0, (void *)0x8c505a20);
        call_8c22ecd4(*(S_g8c505c28 **)0x8c505c28, (void *)0x8c505a20, a1 | 0x80);
    }
}
