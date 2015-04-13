#import "SWGUserTokenSuccessfulResponse.h"

@implementation SWGUserTokenSuccessfulResponse
  
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"code": @"code", @"message": @"message", @"user": @"user" }];
}

@end
