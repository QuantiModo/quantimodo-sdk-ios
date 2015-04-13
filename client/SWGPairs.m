#import "SWGPairs.h"

@implementation SWGPairs
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"name": @"name" }];
}

@end
