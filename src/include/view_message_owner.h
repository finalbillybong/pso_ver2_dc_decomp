#ifndef PSO_VIEW_MESSAGE_OWNER_H
#define PSO_VIEW_MESSAGE_OWNER_H
/* Provisional accessed prefix. Referenced message data remains unresolved. */
typedef struct ViewMessageOwner {char unknown0[60];int count;} ViewMessageOwner;
typedef char check_ViewMessageOwner_count[(unsigned long)&((ViewMessageOwner *)0)->count==60?1:-1];
typedef char check_ViewMessageOwner_size[sizeof(ViewMessageOwner)==64?1:-1];
#endif
