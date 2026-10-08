#include "src/include/effect_scan.h"
extern EffectScanResults scan_results;
#define test_at ((int (*)(EffectScanResource *,void *,float))0x8c052648)
#define kind_at ((int (*)(void))0x8c032b10)
#define first_index (*(int *)0x8c467874)
#define last_index (*(int *)0x8c467870)
#define object_table ((EffectScanObject **)0x8c467240)
EffectScanResults *scan_active_effect_targets(EffectScanOrigin *effect,EffectScanResource *resource,Vector3 *unused,void *argument){Vector3 position;float radius;int i,j;if(kind_at()==14)radius=62500.0f;else radius=10000.0f;position=effect->position;for(j=0;j<16;j++){*(void **)((char *)scan_results.objects+((unsigned int)j<<2))=0;*(int *)((char *)scan_results.values+((unsigned int)j<<2))=0;}scan_results.count=0;if(!resource)return &scan_results;resource->position=position;for(i=first_index;i<last_index;i++){EffectScanObject *object=*(EffectScanObject **)((char *)object_table+((unsigned int)i<<2));if(object && (object->flags&0x20000000)){int result=test_at(resource,object,radius);if(result){*(int *)((char *)scan_results.values+((unsigned int)scan_results.count<<2))=result;*(void **)((char *)scan_results.objects+((unsigned int)scan_results.count<<2))=object;scan_results.count++;if(scan_results.count>=16){scan_results.count=15;break;}}}}return &scan_results;}
