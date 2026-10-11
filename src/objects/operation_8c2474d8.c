typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block40 {
    int words[10];
} Block40;
void operation_8c2474d8(void)
{
    *(Block40 *)0x8c33af20 = *(Block40 *)0x8c33b030;
}
