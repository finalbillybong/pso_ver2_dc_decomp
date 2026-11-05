typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
int get_current_area_wrapper_8c02c194(void)
{
    int t1;
    t1 = get_current_area_8c032b10();
    return t1 == 0xf;
}
