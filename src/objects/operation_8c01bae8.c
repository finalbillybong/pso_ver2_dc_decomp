typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block188 {
    int words[47];
} Block188;
typedef struct Object Object;
typedef struct S_x23600 S_x23600;
typedef struct S_x88096 S_x88096;
struct S_x88096 {
    Block188 f00;
};
struct S_x23600 {
    Block188 f00;
};
void operation_8c01bae8(Object *o, int a1)
{
    int v1;
    v1 = (int)0;
    while (a1 > v1) {
        *(Block188 *)&((S_x88096 *)(*(int *)((char *)((char *)o + 0x0) + (v1 * 0xbc)) * 0xbc + 0x8c41bd34))->f00 = *(Block188 *)&((S_x23600 *)((int)o + v1 * 0xbc))->f00;
        v1 = (int)(v1 + 1);
    }
}
