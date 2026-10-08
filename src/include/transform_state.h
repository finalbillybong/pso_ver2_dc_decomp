#ifndef PSO_TRANSFORM_STATE_H
#define PSO_TRANSFORM_STATE_H
/* Provisional accessed prefix; callback identities follow literal addresses. */
typedef struct TransformState {char unknown00[32];unsigned int flags;char unknown24[12];void *first,*second,*third,*alternate;} TransformState;
typedef char check_TransformState_flags[(unsigned long)&((TransformState *)0)->flags == 32 ? 1 : -1];
typedef char check_TransformState_first[(unsigned long)&((TransformState *)0)->first == 48 ? 1 : -1];
typedef char check_TransformState_second[(unsigned long)&((TransformState *)0)->second == 52 ? 1 : -1];
typedef char check_TransformState_third[(unsigned long)&((TransformState *)0)->third == 56 ? 1 : -1];
typedef char check_TransformState_alternate[(unsigned long)&((TransformState *)0)->alternate == 60 ? 1 : -1];
typedef char check_TransformState_size[sizeof(TransformState)==64?1:-1];
#endif
