typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506080 S_g8c506080;
extern void call_8c2233b8(void *, int);
void operation_8c22353c(int a0)
{
    if (*(int *)0x8c506080 != 0 && (unsigned int)0xc > (unsigned int)(unsigned short)a0) {
        call_8c2233b8((void *)(*(S_g8c506080 **)0x8c506080), (int)((unsigned short)a0));
    }
}
