#import "SWGConversionStep.h"

@implementation SWGConversionStep
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"operation": @"operation", @"value": @"value" }];
}

@end
