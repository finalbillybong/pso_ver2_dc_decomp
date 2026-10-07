#include "src/include/effect_manager.h"

/* Provisional types for the compiler's observed member-pointer representation. */
typedef void (EffectManager::*ManagerMethod)(void);
struct ManagerMethodTable { ManagerMethod methods[11]; };
typedef char check_manager_method_size[sizeof(ManagerMethod) == 12 ? 1 : -1];
typedef char check_manager_method_table_size[
    sizeof(ManagerMethodTable) == 132 ? 1 : -1];
typedef char check_manager_method_table_offset[
    (unsigned long)&((ManagerMethodTable *)0)->methods == 0 ? 1 : -1];

extern "C" unsigned char input_state[];
#define key_at ((int (*)(int))0x8c01e148)
#define apply_at ((void (*)(EffectManager *))0x8c0a95b4)

extern "C" void edit_effect_manager(EffectManager *p) {
    ManagerMethodTable table = *(ManagerMethodTable *)0x8c303e70;
    int i;
    table.methods[0] = *(ManagerMethod *)0x8c303dec;
    table.methods[1] = *(ManagerMethod *)0x8c303df8;
    table.methods[2] = *(ManagerMethod *)0x8c303e04;
    table.methods[3] = *(ManagerMethod *)0x8c303e10;
    table.methods[4] = *(ManagerMethod *)0x8c303e1c;
    table.methods[5] = *(ManagerMethod *)0x8c303e28;
    table.methods[6] = *(ManagerMethod *)0x8c303e34;
    table.methods[7] = *(ManagerMethod *)0x8c303e40;
    table.methods[8] = *(ManagerMethod *)0x8c303e4c;
    table.methods[9] = *(ManagerMethod *)0x8c303e58;
    table.methods[10] = *(ManagerMethod *)0x8c303e64;
    if ((*(unsigned int *)(input_state + 0xa0) & 0x10000) || key_at(81)) {
        p->field80++;
        if (p->field80 >= 11) p->field80 = 0;
    } else if ((*(unsigned int *)(input_state + 0xa0) & 0x20000) || key_at(82)) {
        p->field80--;
        if (p->field80 < 0) p->field80 = 10;
    }
    if (key_at(62)) p->field68 ^= 1;
    if (p->field68) apply_at(p);
    for (i = 0; i < 11; i++) (p->*table.methods[i])();
}
