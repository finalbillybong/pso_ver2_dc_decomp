typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
int operation_8c02c194(void)
{
    int t1;
    t1 = current_effect_mode();
    return t1 == 0xf;
}
