typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void play_se_8c05fbf8(int, void *, int, int);
void TBoss4Type3_v70_8c1b798c(Object *o)
{
    o->f34 &= -0x201;
    play_se_8c05fbf8(0x30034, (void *)(((char *)o + 0x3c)), 0, 1);
}
