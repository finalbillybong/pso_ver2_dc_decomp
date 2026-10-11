typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
void operation_8c256b48(void)
{
    *(Block16 *)0x8c33ff7c = *(Block16 *)0x8c33ff5c;
    *(Block16 *)0x8c33ff6c = *(Block16 *)0x8c33ff5c;
}
