typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060a0 S_g8c5060a0;
extern void call_8c2233f0(void *, int);
void operation_8c2236a8(int a0)
{
    if (*(int *)0x8c5060a0 != 0 && (unsigned int)0xc > (unsigned int)(unsigned short)a0) {
        call_8c2233f0((void *)(*(S_g8c5060a0 **)0x8c5060a0), (int)((unsigned short)a0));
    }
}
