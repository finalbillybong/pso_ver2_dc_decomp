/* Provisional address-based name; preserve output guards and intervening reloads. */
#include "src/include/resource_outputs.h"
int operation_193348(unsigned int id){
    ResourceQueryList *list=*(ResourceQueryList **)0x8c4dc2e8;
    if(list){
        ResourceQueryNode *node=list->first;
        while(node){
            if(id==node->id)return 1;
            node=node->next;
        }
    }
    return 0;
}
