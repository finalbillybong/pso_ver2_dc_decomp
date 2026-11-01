typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int bu_check_busy_8c372d98(int);
int game_bu_check_busy_wrapper_8c25c884(void)
{
    int v1;
    int t1;
    v1 = (int)0;
    while (v1 != 4) {
        t1 = bu_check_busy_8c372d98(v1);
        if (t1 != 0) {
            return 1;
        }
        v1 = (int)(v1 + 1);
    }
    return 0;
}
