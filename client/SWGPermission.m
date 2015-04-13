#import "SWGPermission.h"

@implementation SWGPermission
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"target": @"target", @"variableName": @"variableName", @"min_timestamp": @"min_timestamp", @"max_timestamp": @"max_timestamp", @"min_time_of_day": @"min_time_of_day", @"max_time_of_day": @"max_time_of_day", @"week": @"week" }];
}

@end
