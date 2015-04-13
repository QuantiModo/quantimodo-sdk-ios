#import "SWGVariableCategory.h"

@implementation SWGVariableCategory
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name" }];
}

@end
