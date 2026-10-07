#include "src/include/effect_list_node.h"

void detach_effect_node(EffectListNode *node, EffectListNode **head,
                        EffectListNode **tail) {
    if (node->previous) node->previous->next = node->next;
    else *head = node->next;
    if (node->next) node->next->previous = node->previous;
    else *tail = node->previous;
}

void append_effect_node(EffectListNode *node, EffectListNode **head,
                        EffectListNode **tail) {
    if (*tail) {
        node->previous = *tail;
        (*tail)->next = node;
    } else {
        node->previous = 0;
        *head = node;
    }
    *tail = node;
    node->next = 0;
}
