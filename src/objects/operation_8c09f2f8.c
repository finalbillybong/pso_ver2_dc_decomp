#include "src/include/classes/TSceneSora.h"
extern int get_current_area_8c032b10(void);
void TSceneSora_update_8c09f2f8(TSceneSora *o)
{
    int t1;
    t1 = get_current_area_8c032b10();
    switch (t1) {
    case 1:
    case 2:
        o->f64 += 1;
    }
}
