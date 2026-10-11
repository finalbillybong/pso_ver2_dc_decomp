typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
void operation_8c075300(void)
{
    if (1.0f > *(float *)0x8c469a2c) {
        *(Block16 *)0x8c5755ac = *(Block16 *)0x8c469a1c;
    }
}
