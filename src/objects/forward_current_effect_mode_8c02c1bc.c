typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void *current_effect_mode(void);
int forward_current_effect_mode_8c02c1bc(void)
{
    void *t1;
    t1 = current_effect_mode();
    return t1 == 0;
}
