typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char unknown6[0xe];
};
extern void operation_1c7dd4(void *);
extern int operation_8c15b6bc(int);
void operation_8c16fb48(int a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    operation_1c7dd4((void *)(&frame));
    v1 = (char *)*(int *)0x8c4db408;
    (&frame)->f00 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f01 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f02 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f03 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f04 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f05 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
    t1 = operation_8c15b6bc((int)(&frame));
    if (t1 != 0) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0;
}
