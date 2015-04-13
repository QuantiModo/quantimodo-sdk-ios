#import "SWGMeasurementSource.h"

@implementation SWGMeasurementSource
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name" }];
}

@end
