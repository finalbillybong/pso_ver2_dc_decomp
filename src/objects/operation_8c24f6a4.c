typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void translate_current_matrix_v_8c382a40(int);
extern void scale_current_matrix_v_8c37e390(int);
void TItemWpnYasumuraShiki2_v57_8c24f6a4(int a0)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 != 2) {
            return;
        }
    } else {
        translate_current_matrix_v_8c382a40((int)(a0 + 0x248));
        return;
    }
    scale_current_matrix_v_8c37e390((int)(a0 + 0x238));
}
