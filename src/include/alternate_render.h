#ifndef PSO_ALTERNATE_RENDER_H
#define PSO_ALTERNATE_RENDER_H
/* Provisional accessed prefixes; globals remain reference/runtime dependent. */
typedef struct AlternateDispatch {char unknown00[48];void *previous;} AlternateDispatch;
typedef struct AlternateParameter {int unknown00;void *parameter;} AlternateParameter;
typedef struct AlternateDrawObject {char unknown00[56];void *dispatch;} AlternateDrawObject;
typedef char check_AlternateDispatch_previous[(unsigned long)&((AlternateDispatch *)0)->previous == 48 ? 1 : -1];
typedef char check_AlternateDispatch_size[sizeof(AlternateDispatch)==52?1:-1];
typedef char check_AlternateParameter_parameter[(unsigned long)&((AlternateParameter *)0)->parameter == 4 ? 1 : -1];
typedef char check_AlternateParameter_size[sizeof(AlternateParameter)==8?1:-1];
typedef char check_AlternateDrawObject_dispatch[(unsigned long)&((AlternateDrawObject *)0)->dispatch == 56 ? 1 : -1];
typedef char check_AlternateDrawObject_size[sizeof(AlternateDrawObject)==60?1:-1];
#endif
