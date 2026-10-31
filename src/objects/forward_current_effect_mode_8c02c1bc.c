typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void *get_current_area_8c032b10(void);
int forward_current_effect_mode_8c02c1bc(void)
{
    void *t1;
    t1 = get_current_area_8c032b10();
    return t1 == 0;
}
