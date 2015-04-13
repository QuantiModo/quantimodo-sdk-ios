#import "SWGMeasurementRange.h"

@implementation SWGMeasurementRange
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"lowerLimit": @"lowerLimit", @"upperLimit": @"upperLimit" }];
}

@end
