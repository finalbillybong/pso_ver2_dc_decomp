typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Object Object;
typedef struct S_x54768 S_x54768;
struct S_x54768 {
    Block36 f00;
};
struct Object {
    Block36 tag;
};
void operation_8c1794e8(Object *o)
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
            *(Block36 *)&((S_x54768 *)(*(int *)0x8c4db944 + v1 * 0x24))->f00 = *(Block36 *)&o->tag;
            v4 = (int)(v4 + 1);
        }
    }
}
