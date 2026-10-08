#include "src/include/actor_model_helpers.h"
void collect_actor_model_nodes(ActorModelNode *node){do{if(!(node->flags&8)&&node->model){*(*(ActorModelNode ***)0x8c46f424)++=node;(*(int *)0x8c46f428)++;}if(node->child)collect_actor_model_nodes(node->child);node=node->sibling;}while(node);}
