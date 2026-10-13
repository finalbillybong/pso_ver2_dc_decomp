typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c05fbf8(int, int, int, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
void operation_8c08a2cc(void)
{
    int t1;
    call_8c05fbf8(5, 0, 0, 0);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t1 != 0) {
        initialize_color_rise(t1, (void *)(*(S_g8c44be84 **)0x8c44be84), (void *)((void *)0x8c08a314));
    }
}
