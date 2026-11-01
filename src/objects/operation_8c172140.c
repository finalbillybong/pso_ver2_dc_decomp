typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x28];
    short f28;
};
extern S_L8c4db494 g_8c4db494;
void quest_op_ba_death_tech_level_up_8c172140(unsigned int a0)
{
    if ((unsigned int)0x1d >= a0) {
        (&g_8c4db494)->f28 = a0;
    }
}
