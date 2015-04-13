#import "SWGVariableUserSettings.h"

@implementation SWGVariableUserSettings
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"user": @"user", @"variable": @"variable", @"durationOfAction": @"durationOfAction", @"fillingValue": @"fillingValue", @"joinWith": @"joinWith", @"maximumValue": @"maximumValue", @"minimumValue": @"minimumValue", @"name": @"name", @"onsetDelay": @"onsetDelay", @"unit": @"unit" }];
}

@end
