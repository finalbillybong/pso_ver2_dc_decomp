#ifndef PSO_MODEL_NODE_H
#define PSO_MODEL_NODE_H
/* Provisional accessed prefix; no complete model-node extent asserted. */
typedef struct ModelNode ModelNode;
struct ModelNode {
    unsigned int flags;
    unsigned char unknown04[40];
    ModelNode *child, *next;
};
typedef char check_model_flags[
    (unsigned long)&((ModelNode *)0)->flags == 0 ? 1 : -1];
typedef char check_model_child[
    (unsigned long)&((ModelNode *)0)->child == 44 ? 1 : -1];
typedef char check_model_next[
    (unsigned long)&((ModelNode *)0)->next == 48 ? 1 : -1];
#endif
