#ifndef PSO_EFFECT_CONTROLLER_H
#define PSO_EFFECT_CONTROLLER_H
/* Observed controller prefix and provisional field roles. */
typedef struct EffectController {
    unsigned int tag;
    char unknown_04[20];
    void *dispatch;
    char unknown_1c[2];
    unsigned short size;
    unsigned char mode;
    char unknown_21[3];
    int ticks;
} EffectController;
typedef char check_controller_tag[(unsigned long)&((EffectController *)0)->tag == 0 ? 1 : -1];
typedef char check_controller_dispatch[(unsigned long)&((EffectController *)0)->dispatch == 24 ? 1 : -1];
typedef char check_controller_size[(unsigned long)&((EffectController *)0)->size == 30 ? 1 : -1];
typedef char check_controller_mode[(unsigned long)&((EffectController *)0)->mode == 32 ? 1 : -1];
typedef char check_controller_ticks[(unsigned long)&((EffectController *)0)->ticks == 36 ? 1 : -1];
typedef char check_controller_prefix[sizeof(EffectController) == 40 ? 1 : -1];
#endif
