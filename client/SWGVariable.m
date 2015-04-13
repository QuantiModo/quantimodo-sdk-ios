#import "SWGVariable.h"

@implementation SWGVariable
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name", @"originalName": @"originalName", @"category": @"category", @"unit": @"unit", @"sources": @"sources", @"minimumValue": @"minimumValue", @"maximumValue": @"maximumValue", @"combinationOperation": @"combinationOperation", @"fillingValue": @"fillingValue" }];
}

@end
