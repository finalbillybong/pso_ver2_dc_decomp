typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memcpy_8c12b77c(void *, int, int);
void handle_6x7F_battle_scores_and_places_8c243cac(int a0)
{
    memcpy_8c12b77c((void *)0x8c510c9c, a0 + 4, 0x20);
    *(int *)0x8c510c98 = 1;
}
