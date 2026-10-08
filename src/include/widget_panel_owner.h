#ifndef PSO_WIDGET_PANEL_OWNER_H
#define PSO_WIDGET_PANEL_OWNER_H
#include "src/include/widget_draw.h"
#include "src/include/widget_panel.h"
/* Provisional owner, weighted-input and two-item selection views. */
typedef struct WidgetPanelController {int tag;short flags;char unknown06[18];void *dispatch;short field1c,size;int mode,previous,current;float opacity,field30,field34;int field38;} WidgetPanelController;
typedef struct WidgetWeightedInput {void *actor;float weights[3];} WidgetWeightedInput;
typedef struct WidgetSelectionPair {int items[2];} WidgetSelectionPair;
typedef char check_WidgetPanelController_tag[(unsigned long)&((WidgetPanelController *)0)->tag == 0 ? 1 : -1];
typedef char check_WidgetPanelController_flags[(unsigned long)&((WidgetPanelController *)0)->flags == 4 ? 1 : -1];
typedef char check_WidgetPanelController_dispatch[(unsigned long)&((WidgetPanelController *)0)->dispatch == 24 ? 1 : -1];
typedef char check_WidgetPanelController_field1c[(unsigned long)&((WidgetPanelController *)0)->field1c == 28 ? 1 : -1];
typedef char check_WidgetPanelController_size[(unsigned long)&((WidgetPanelController *)0)->size == 30 ? 1 : -1];
typedef char check_WidgetPanelController_mode[(unsigned long)&((WidgetPanelController *)0)->mode == 32 ? 1 : -1];
typedef char check_WidgetPanelController_previous[(unsigned long)&((WidgetPanelController *)0)->previous == 36 ? 1 : -1];
typedef char check_WidgetPanelController_current[(unsigned long)&((WidgetPanelController *)0)->current == 40 ? 1 : -1];
typedef char check_WidgetPanelController_opacity[(unsigned long)&((WidgetPanelController *)0)->opacity == 44 ? 1 : -1];
typedef char check_WidgetPanelController_field30[(unsigned long)&((WidgetPanelController *)0)->field30 == 48 ? 1 : -1];
typedef char check_WidgetPanelController_field34[(unsigned long)&((WidgetPanelController *)0)->field34 == 52 ? 1 : -1];
typedef char check_WidgetPanelController_field38[(unsigned long)&((WidgetPanelController *)0)->field38 == 56 ? 1 : -1];
typedef char check_WidgetPanelController_size[sizeof(WidgetPanelController) == 60 ? 1 : -1];
typedef char check_WidgetWeightedInput_actor[(unsigned long)&((WidgetWeightedInput *)0)->actor == 0 ? 1 : -1];
typedef char check_WidgetWeightedInput_weights[(unsigned long)&((WidgetWeightedInput *)0)->weights == 4 ? 1 : -1];
typedef char check_WidgetWeightedInput_size[sizeof(WidgetWeightedInput) == 16 ? 1 : -1];
typedef char check_WidgetSelectionPair_items[(unsigned long)&((WidgetSelectionPair *)0)->items == 0 ? 1 : -1];
typedef char check_WidgetSelectionPair_size[sizeof(WidgetSelectionPair) == 8 ? 1 : -1];
#endif
