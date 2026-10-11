typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
void operation_8c09a478(void)
{
    *(Block24 *)0x8c469e98 = *(Block24 *)0x8c2850dc;
}
