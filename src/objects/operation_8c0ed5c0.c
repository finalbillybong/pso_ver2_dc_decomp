typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c37e4a8(float, float);
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c01c250(int);
extern void call_8c01c244(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c0ed1e4(int);
extern void call_8c380516(void);
void operation_8c0ed5c0(void)
{
    int t1;
    call_8c37e4a8(1.0f, 1.0f);
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    call_8c01c250(2);
    call_8c01c244(6);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t1 != 0) {
        call_8c0ed1e4(t1);
    }
    call_8c380516();
}
