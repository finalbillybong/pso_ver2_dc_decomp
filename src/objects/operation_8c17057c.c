typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_g8c4db404 S_g8c4db404;
typedef struct S_vv5 S_vv5;
struct S_vv5 {
    Block80 f00;
};
void operation_8c17057c(int a0)
{
    S_vv5 *v5;
    v5 = (S_vv5 *)(*(int *)((char *)((char *)*(S_g8c4db404 **)0x8c4db404 + 0x0) + ((unsigned short)a0 << 2)) + *(int *)0x8c4db400);
    if (v5 != 0) {
        *(Block80 *)&*(Block80 *)0x8c4d8154 = *(Block80 *)&v5->f00;
    }
}
