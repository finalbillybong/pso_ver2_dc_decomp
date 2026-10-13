typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469b80 S_g8c469b80;
typedef struct S_g8c469b80_0 S_g8c469b80_0;
struct S_g8c469b80 {
    S_g8c469b80_0 *f00;
};
extern void call_8c37d534(void *);
extern void operation_8c105320(int);
void operation_8c080080(void)
{
    call_8c37d534((void *)((*(S_g8c469b80 **)0x8c469b80)->f00));
    operation_8c105320((int)(*(S_g8c469b80 **)0x8c469b80));
}
