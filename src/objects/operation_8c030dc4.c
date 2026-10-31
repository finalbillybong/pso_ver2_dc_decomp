typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
struct S_g8c44be0c {
    char unknown0[0x4];
    float f04;
};
extern int get_game_mode_8c01c25c(void);
extern int get_current_area_8c032b10(void);
void operation_8c030dc4(void)
{
    int t1;
    int t2;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0x10) {
        t2 = get_current_area_8c032b10();
        switch (t2) {
        case 6:
        case 7:
            if (*(int *)0x8c44be0c != 0) {
                (*(S_g8c44be0c **)0x8c44be0c)->f04 = 540.0f;
            }
            return;
        case 8:
        case 9:
        case 10:
            break;
        }
    }
}
