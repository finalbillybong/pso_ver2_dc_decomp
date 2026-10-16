typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_g8c4d8628 S_g8c4d8628;
typedef struct Arg1 Arg1;
struct Arg1 {
    Block64 f00;
};
void operation_8c122494(int a0, Arg1 *a1)
{
    *(Block64 *)&*(Block64 *)((char *)((char *)*(S_g8c4d8628 **)0x8c4d8628 + 0x0) + (a0 << 6)) = *(Block64 *)&a1->f00;
}
