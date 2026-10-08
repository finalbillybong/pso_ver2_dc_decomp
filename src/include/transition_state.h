#ifndef PSO_TRANSITION_STATE_H
#define PSO_TRANSITION_STATE_H
/* Provisional offset view; complete allocation extent is unknown. */
typedef struct TransitionState {
    char unknown00[240];
    short optional;
    char unknownf2[536];
    short mode;
    char unknown30c[2];
    short previous;
    unsigned int mask;
    char unknown314[60];
    unsigned int flags;
} TransitionState;
typedef char check_transition_optional[(unsigned long)&((TransitionState *)0)->optional == 240 ? 1 : -1];
typedef char check_transition_mode[(unsigned long)&((TransitionState *)0)->mode == 778 ? 1 : -1];
typedef char check_transition_previous[(unsigned long)&((TransitionState *)0)->previous == 782 ? 1 : -1];
typedef char check_transition_mask[(unsigned long)&((TransitionState *)0)->mask == 784 ? 1 : -1];
typedef char check_transition_flags[(unsigned long)&((TransitionState *)0)->flags == 848 ? 1 : -1];
typedef char check_transition_prefix[sizeof(TransitionState) == 852 ? 1 : -1];
#endif
