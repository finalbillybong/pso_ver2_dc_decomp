#ifndef PSO_CONTROLLER_FLAGS_H
#define PSO_CONTROLLER_FLAGS_H
/* Additional observed controller header view; other flag bits are unknown. */
typedef struct ControllerFlags {
    unsigned int tag;
    unsigned short flags;
} ControllerFlags;
typedef char check_controller_flags_tag[(unsigned long)&((ControllerFlags *)0)->tag == 0 ? 1 : -1];
typedef char check_controller_flags_field[(unsigned long)&((ControllerFlags *)0)->flags == 4 ? 1 : -1];
typedef char check_controller_flags_prefix[sizeof(ControllerFlags) == 8 ? 1 : -1];
#endif
