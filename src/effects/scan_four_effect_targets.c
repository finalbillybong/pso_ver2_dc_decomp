#include "src/include/effect_scan.h"
extern EffectScanResults scan_results;
#define test_at ((int (*)(EffectScanResource *,void *,float))0x8c052648)
#define get_at ((void *(*)(int))0x8c021ef8)
EffectScanResults *scan_four_effect_targets(EffectScanOrigin *effect,EffectScanResource *resource,Vector3 *unused,void *argument){Vector3 position=effect->position;int i;for(i=0;i<16;i++){*(void **)((char *)scan_results.objects+((unsigned int)i<<2))=0;*(int *)((char *)scan_results.values+((unsigned int)i<<2))=0;}scan_results.count=0;if(!resource)return &scan_results;resource->position=position;for(i=0;i<4;i++){void *object=get_at(i);if(object){int result=test_at(resource,object,10000.0f);if(result){*(int *)((char *)scan_results.values+((unsigned int)scan_results.count<<2))=result;*(void **)((char *)scan_results.objects+((unsigned int)scan_results.count<<2))=object;scan_results.count++;if(scan_results.count>=16){scan_results.count=15;break;}}}}return &scan_results;}
