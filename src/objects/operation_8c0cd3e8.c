#include "src/include/classes/TObjBoss1MokoHill_Solo.h"
typedef struct S_g8c46fa68 S_g8c46fa68;
struct S_g8c46fa68 {
    Vector3 f00;
};
void TObjBoss1MokoHill_Solo_update_8c0cd3e8(TObjBoss1MokoHill_Solo *o)
{
    if (o->f48 != 0) {
        if (o->f48 == 1) {
            goto L_8c0cd434;
        }
        if (o->f48 == 2) {
            goto L_8c0cd454;
        }
        return;
    }
    o->f38 += 4.0f;
    if (!(o->f3c > o->f38)) {
        o->f38 = o->f3c;
        o->f48 = 1;
    }
    *(Vector3 *)&o->f2c = *(Vector3 *)&(*(S_g8c46fa68 **)0x8c46fa68)->f00;
    return;
L_8c0cd434:;
    o->f44 += 1;
    if (o->f44 > o->f50) {
        o->f48 = 2;
        return;
L_8c0cd454:;
        o->f38 -= 0.5f;
        if (-32.0f > o->f38) {
            o->f04 |= 1;
        }
    }
}
