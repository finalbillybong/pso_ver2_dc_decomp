#ifndef PSO_EFFECT_LIST_NODE_H
#define PSO_EFFECT_LIST_NODE_H
/* Observed link prefix; payload allocation size remains provisional. */
typedef struct EffectListNode {
    struct EffectListNode *previous;
    struct EffectListNode *next;
} EffectListNode;
typedef char check_effect_list_previous[(unsigned long)&((EffectListNode *)0)->previous == 0 ? 1 : -1];
typedef char check_effect_list_next[(unsigned long)&((EffectListNode *)0)->next == 4 ? 1 : -1];
typedef char check_effect_list_prefix[sizeof(EffectListNode) == 8 ? 1 : -1];
#endif
