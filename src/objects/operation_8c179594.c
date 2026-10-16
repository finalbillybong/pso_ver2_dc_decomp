typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct S_g8c4db94c S_g8c4db94c;
typedef struct Object Object;
struct Object {
    Block32 tag;
};
void operation_8c179594(Object *o)
{
    int v4;
    int v2;
    int v1;
    v1 = (int)*(int *)0x8c4db958;
    v2 = (int)0;
    if (v1 >= 0) {
        v2 = (int)0;
        if (0x60 > v1) {
            v2 = (int)1;
        }
    }
    if (v2 != 0) {
        v4 = (int)0;
        while (4 > v4) {
            *(Block32 *)&*(Block32 *)((char *)((char *)*(S_g8c4db94c **)0x8c4db94c + 0x0) + (v1 << 5)) = *(Block32 *)&o->tag;
            v4 = (int)(v4 + 1);
        }
    }
}
