#include "src/include/classes/TODoorAncient09.h"
typedef struct S_g8c4d9b04 S_g8c4d9b04;
struct S_g8c4d9b04 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4d9b04 *g_8c4d9b04;
extern int call_8c0eea7c(TODoorAncient09 *, float);
extern void operation_8c05426c(void *, int, int);
extern int get_current_area_8c032b10(void);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorAncient09_v17_8c13582c(TODoorAncient09 *o)
{
    int t1;
    int t2;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 == 1) {
            o->fe4 = 1;
            o->f28 = (int)(g_8c4d9b04->f04);
            operation_8c05426c((void *)o, 0, 0x10);
            o->f118 = 1;
            t2 = get_current_area_8c032b10();
            switch (t2) {
            case 3:
            case 4:
            case 5:
                play_se_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 6:
            case 7:
                play_se_8c05fbf8(0x40001, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 8:
            case 9:
            case 10:
                play_se_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 0:
            case 1:
            case 2:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            }
        }
    }
}
