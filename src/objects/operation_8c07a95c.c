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
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEneDarkGunner_v69_8c07a95c(Object *o)
{
    o->f34 &= -0x101;
    create_effect_777c((void *)(((char *)o + 0x324)), 0xd7);
    play_se_8c05fbf8(0x3002d, (void *)(((char *)o + 0x3c)), 0, 0);
}
