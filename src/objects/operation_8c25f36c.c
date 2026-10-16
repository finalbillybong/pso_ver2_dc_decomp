typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
int operation_8c25f36c(void)
{
    int t1;
    t1 = current_effect_mode();
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
