typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
int operation_8c25f36c(void)
{
    int t1;
    t1 = get_current_area_8c032b10();
    if (!(t1 > 0)) {
        if (t1 == 0) {
            goto L_8c25f3a0;
        }
    } else {
        if (!(t1 > 0xe) && t1 >= 0xb) {
            switch (t1) {
            case 11:
            case 12:
            case 13:
            case 14:
L_8c25f3a0:;
                return 0;
            }
        }
    }
    return 1;
}
