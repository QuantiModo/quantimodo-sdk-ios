#import "SWGUnitCategory.h"

@implementation SWGUnitCategory
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name" }];
}

@end
