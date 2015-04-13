#import "SWGMeasurement.h"

@implementation SWGMeasurement
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"variable": @"variable", @"source": @"source", @"timestamp": @"timestamp", @"value": @"value", @"unit": @"unit" }];
}

@end
