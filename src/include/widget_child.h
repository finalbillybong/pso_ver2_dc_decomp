#ifndef PSO_WIDGET_CHILD_H
#define PSO_WIDGET_CHILD_H
/* Provisional signed child selection and input flag views. */
typedef struct WidgetChild {signed char selected,count;char unknown02[2];float displacement;} WidgetChild;
typedef struct WidgetInput {char unknown00[40];unsigned int flags;} WidgetInput;
typedef char check_WidgetChild_selected[(unsigned long)&((WidgetChild *)0)->selected == 0 ? 1 : -1];
typedef char check_WidgetChild_count[(unsigned long)&((WidgetChild *)0)->count == 1 ? 1 : -1];
typedef char check_WidgetChild_displacement[(unsigned long)&((WidgetChild *)0)->displacement == 4 ? 1 : -1];
typedef char check_WidgetChild_prefix[sizeof(WidgetChild) == 8 ? 1 : -1];
typedef char check_WidgetInput_flags[(unsigned long)&((WidgetInput *)0)->flags == 40 ? 1 : -1];
typedef char check_WidgetInput_prefix[sizeof(WidgetInput) == 44 ? 1 : -1];
#endif
