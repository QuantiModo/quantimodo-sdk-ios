#import "SWGUserTokenFailedResponse.h"

@implementation SWGUserTokenFailedResponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"code": @"code", @"message": @"message", @"success": @"success" }];
}

@end
