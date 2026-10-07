#ifndef PSO_CONTROLLER_CHILD_H
#define PSO_CONTROLLER_CHILD_H
/* Common observed prefix of two controller child types; names are provisional. */
typedef struct ControllerChild {
    unsigned int tag;
    unsigned short flags;
    char unknown_06[18];
    void *dispatch;
    char unknown_1c[2];
    unsigned short size;
    float x, y, rate;
    int value, ticks;
} ControllerChild;
typedef char check_controller_child_tag[(unsigned long)&((ControllerChild *)0)->tag == 0 ? 1 : -1];
typedef char check_controller_child_flags[(unsigned long)&((ControllerChild *)0)->flags == 4 ? 1 : -1];
typedef char check_controller_child_dispatch[(unsigned long)&((ControllerChild *)0)->dispatch == 24 ? 1 : -1];
typedef char check_controller_child_size[(unsigned long)&((ControllerChild *)0)->size == 30 ? 1 : -1];
typedef char check_controller_child_x[(unsigned long)&((ControllerChild *)0)->x == 32 ? 1 : -1];
typedef char check_controller_child_y[(unsigned long)&((ControllerChild *)0)->y == 36 ? 1 : -1];
typedef char check_controller_child_rate[(unsigned long)&((ControllerChild *)0)->rate == 40 ? 1 : -1];
typedef char check_controller_child_value[(unsigned long)&((ControllerChild *)0)->value == 44 ? 1 : -1];
typedef char check_controller_child_ticks[(unsigned long)&((ControllerChild *)0)->ticks == 48 ? 1 : -1];
typedef char check_controller_child_prefix[sizeof(ControllerChild) == 52 ? 1 : -1];
#endif
