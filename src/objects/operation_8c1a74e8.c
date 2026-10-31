typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2885b6 S_L8c2885b6;
struct S_L8c2885b6 {
    char unknown0[0x4];
    short f04;
};
extern S_L8c2885b6 g_8c2885b6;
extern int get_current_area_8c032b10(void);
int operation_8c1a74e8(void)
{
    int t1;
    t1 = get_current_area_8c032b10();
    return *(short *)((char *)&g_8c2885b6.f04 + (t1 << 3));
}
